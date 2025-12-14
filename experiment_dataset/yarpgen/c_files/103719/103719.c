/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = 9223372036854775807;
                                var_19 = (min((arr_12 [i_1] [i_2] [i_2] [i_2 + 1] [i_4] [i_4] [i_4]), ((var_7 ? (arr_12 [i_0] [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [3]) : (arr_9 [i_1] [3] [i_2] [i_2 + 1] [i_2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 *= (!9223372036854775807);
                                var_21 = (min((985162418487296 > var_8), ((var_9 ? (arr_1 [i_2 + 1]) : -4828909805217216579))));
                                arr_18 [i_6] = ((!((max((arr_4 [i_5]), 12808)))));
                                var_22 = ((~((max((arr_12 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_5 + 2] [i_6 - 1]), 0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, var_16));
    var_24 = ((~(((var_5 | -3042) ? (-20289 ^ var_11) : (min(9223372036854775807, var_11))))));
    var_25 = var_0;
    #pragma endscop
}
