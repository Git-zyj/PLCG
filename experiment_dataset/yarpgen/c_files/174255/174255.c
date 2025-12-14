/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_2 [i_0] [i_0] [i_0 - 1]) ? (((-(arr_0 [i_0] [i_0])))) : (-9449367048833439467 + var_14)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((((((((arr_11 [i_2] [i_4] [0] [1] [i_4]) ? (arr_1 [i_0 + 1] [i_2]) : var_2)) >> (((arr_6 [i_2] [i_0 + 1] [i_0 + 2]) - 20791))))) != (min((arr_2 [i_2] [i_3] [i_4]), ((((arr_10 [i_0] [i_1] [i_0 + 2] [i_2]) ? 1 : (arr_3 [i_1] [i_4] [i_4])))))))))));
                                arr_13 [i_0] [i_1] = (-1 ? ((-(arr_3 [i_0] [i_0] [i_0 + 1]))) : (((arr_3 [i_0] [i_0] [i_0 - 1]) * (arr_3 [i_0 + 1] [i_0] [i_0 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 *= (min(var_8, (max((var_10 + var_1), var_3))));
    var_20 = (min(-var_11, var_12));
    #pragma endscop
}
