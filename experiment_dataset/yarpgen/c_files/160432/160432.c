/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_8));
    var_16 = (var_2 > var_1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (arr_7 [i_0 + 3] [i_0 - 1] [i_0 - 1]);
                                var_18 = ((+(max((arr_12 [i_0] [11] [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 2]), (arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 2])))));
                            }
                        }
                    }
                }
                var_19 = max((~511), (((arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_0 - 2] [i_0]) & (arr_10 [i_0 - 2] [i_0 + 3] [i_0] [i_0 - 2] [i_0 + 1] [0]))));
                arr_14 [i_0] [i_1] = (arr_5 [8] [8] [i_0]);
                var_20 = (12674099224227908906 % ((((arr_6 [i_0 + 3]) * var_14))));
            }
        }
    }
    var_21 *= (-1985215723 ? ((2097151 + (min(-17068, var_0)))) : var_6);
    #pragma endscop
}
