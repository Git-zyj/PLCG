/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_10 ^= (min((min((!var_3), (((arr_6 [2] [i_1] [i_4 - 1]) ? -600339079 : (arr_6 [i_3] [i_1] [8]))))), -600339080));
                                var_11 = (min(((-703927265694398391 ? (-2147483647 - 1) : 1521138081725031736)), ((var_1 ? var_5 : (max((arr_4 [5] [5]), (arr_0 [i_0])))))));
                                var_12 = ((var_0 < (arr_11 [i_0] [9] [i_3] [4])));
                            }
                        }
                    }
                    arr_17 [i_0] = -18938;
                    arr_18 [i_0] [i_1] [0] [8] &= (max((max(-1034024729, 1165293532)), (arr_6 [i_1 - 1] [i_1] [i_1 - 2])));

                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        var_13 = ((!((((arr_14 [9] [11] [i_1 + 1] [11] [i_5 + 2] [i_5 - 1] [i_5 - 1]) ^ (arr_3 [i_5 - 2]))))));
                        var_14 = ((~(((((arr_13 [i_2] [0] [5]) ? 20774 : var_2)) % var_2))));
                    }
                    var_15 = (((-(arr_8 [i_1 - 1] [i_2] [i_2]))));
                }
            }
        }
    }
    var_16 *= var_8;
    var_17 += 1034024751;
    #pragma endscop
}
