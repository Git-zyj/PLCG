/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 *= ((~((0 ? 4875 : 623770274))));
                arr_4 [i_0] [i_1] = (0 && ((((0 ? 536869888 : 0)) <= (var_5 < var_12))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (min(623770282, 44096));
                                var_15 = (max(var_15, 3671197003));
                                var_16 = (((((~(arr_12 [8] [i_3] [i_3])))) ? ((min((arr_12 [i_2] [i_2] [i_4 - 1]), (arr_12 [i_2] [i_3] [i_4])))) : ((~(arr_12 [i_0 + 3] [i_1] [i_2])))));
                            }
                        }
                    }
                }
                var_17 = (min(44103, (((arr_3 [i_0 - 1] [i_0 + 1]) / var_3))));
            }
        }
    }
    var_18 = (!var_10);
    var_19 = (((max((max(3671197013, 0)), var_4))) <= var_12);
    #pragma endscop
}
