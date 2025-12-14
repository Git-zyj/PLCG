/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [4] [4] [4] &= ((((!47) != (var_3 <= 1))) ? (arr_9 [1] [i_2] [i_1] [1]) : ((~(~var_10))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_1 [i_1]), (arr_5 [i_3])));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_18 -= ((~(((!((((arr_1 [i_0]) ? (arr_8 [8] [i_2] [8] [8]) : (arr_5 [i_4])))))))));
                                var_19 = (1 ? 0 : 1);
                            }
                        }
                    }
                }
                arr_14 [i_0] = (arr_8 [i_0] [16] [i_0] [i_0]);
                var_20 = 0;
                var_21 += ((~((112 ? 1 : -21))));
            }
        }
    }
    var_22 += ((~((~(!var_12)))));
    #pragma endscop
}
