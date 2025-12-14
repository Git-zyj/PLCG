/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 = (arr_1 [i_0 - 1]);
        var_21 -= (((arr_0 [i_0] [i_0 + 1]) + var_3));
        arr_2 [i_0] = -31080;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_22 -= var_18;

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2 - 3] [i_2] [i_2] = ((1157505641 == (arr_10 [i_2])));
                            var_23 = (arr_4 [i_1 - 1] [i_2 - 2]);
                            arr_13 [i_2] [i_2] = (((arr_8 [i_2] [i_0] [i_2]) && 229));
                            var_24 = (max(var_24, (((229 << (arr_9 [i_1] [i_1] [i_1] [i_1 - 1] [i_2 - 1]))))));
                            var_25 = (max(var_25, ((((arr_3 [i_1 - 2]) ^ (var_6 + 127))))));
                        }
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_26 = (((arr_7 [i_2] [i_2 - 2] [i_3] [i_3] [i_5]) || 127));
                            arr_18 [i_0 - 3] [i_5] [i_2] = (((arr_7 [i_5 - 2] [1] [i_5 + 2] [0] [i_5]) % (arr_7 [i_5 - 2] [i_1] [i_5] [i_5] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_27 = (((var_14 * ((114 ? 2894323101 : -1)))));
    #pragma endscop
}
