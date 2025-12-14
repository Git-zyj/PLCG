/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((~(var_14 + var_17)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((!-var_11) ? (((~var_8) ? (arr_5 [i_1] [i_1] [i_1]) : (((arr_4 [i_0] [i_1] [i_1] [i_1]) ? var_12 : var_0)))) : ((((33283252 && ((min(var_16, var_7)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = var_17;
                                var_20 = (arr_9 [i_1] [i_2]);
                            }
                        }
                    }
                    var_21 = (min(var_21, (((!((!(((var_0 ? (arr_10 [i_0] [i_1] [i_2] [i_2]) : (arr_3 [i_2] [i_1])))))))))));
                    var_22 = (max(var_22, (((-((~(arr_8 [i_2 - 1]))))))));
                    var_23 = ((((max((arr_5 [i_2 + 2] [i_2] [i_2]), var_5))) ? (arr_6 [i_2 + 2] [i_2] [0]) : -18446744073709551615));
                }
            }
        }
    }
    #pragma endscop
}
