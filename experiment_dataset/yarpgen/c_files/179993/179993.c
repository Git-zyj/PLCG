/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [0] [6] [8] [i_0] [0] = (((((min(14, 5203)))) - (arr_10 [i_4] [i_3] [0] [i_1] [i_0 + 2])));
                                var_16 = ((((((((-14021 | (arr_2 [i_4] [i_4]))))) + 2147483647)) >> 1));
                                arr_13 [7] [7] [0] [i_3] [i_0] [3] = (arr_7 [i_0] [i_3] [i_2] [i_0]);
                                arr_14 [i_4] [0] [0] [0] [0] [4] |= (max((arr_1 [i_4]), 1));
                            }
                        }
                    }
                    arr_15 [i_0] [0] [6] [i_2] = (max((arr_3 [i_0]), (((arr_4 [i_0 + 1]) ? 1 : (((arr_2 [3] [i_1]) + (arr_6 [1] [1] [i_0])))))));
                    var_17 += ((!((max((arr_2 [0] [i_0 - 1]), (arr_2 [i_1] [i_0 - 1]))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_18 = (((arr_16 [i_5]) ? (arr_16 [0]) : (-2147483647 - 1)));
        var_19 = -2729569840168581233;
        arr_19 [19] &= 1;
        var_20 = (max(5707073195276751624, 2251799679467520));
    }
    #pragma endscop
}
