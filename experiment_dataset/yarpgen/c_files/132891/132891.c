/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_14 += (arr_0 [3] [i_0]);
                var_15 = (((arr_2 [i_0] [i_1] [12]) ? (arr_3 [7]) : (arr_3 [i_0])));
            }
        }
    }
    var_16 = var_0;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_17 -= ((-(arr_5 [9] [i_3])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [10] [i_4 + 1] [i_3] [i_6] |= 65516;
                                var_18 = ((((max((arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1]), (25 < 43099)))) ? (min((min(var_6, 52)), (arr_7 [i_2]))) : 13));
                            }
                        }
                    }
                    var_19 = (min(((((var_5 && (arr_10 [i_2 + 2]))) ? ((min(11639, -16409))) : var_10)), (((arr_18 [i_4 + 1] [i_4] [i_4] [i_4 + 1] [15]) ? (arr_18 [i_4 + 1] [11] [i_4 + 1] [i_4 + 1] [i_4]) : (arr_18 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1])))));
                }
            }
        }
    }
    var_20 = (((max((155 ^ var_7), 26)) > var_2));
    #pragma endscop
}
