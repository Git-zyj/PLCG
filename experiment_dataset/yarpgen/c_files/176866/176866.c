/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((max((((var_12 ? var_8 : var_1)), var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 += (arr_5 [5]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [17] [i_1] [12] = (arr_1 [10]);
                            var_15 = var_5;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_16 = ((((min((arr_4 [13]), (!var_0)))) && ((((arr_20 [i_0] [i_0] [i_1] [i_4] [i_0] [i_6]) ? (arr_12 [i_1] [i_4] [i_5]) : (arr_1 [i_6]))))));
                                var_17 = (max(((((max((arr_19 [i_0 + 1]), 2297094897))) ? (arr_16 [i_0 - 1]) : (max((arr_7 [i_0] [i_0] [i_4]), var_10)))), var_2));
                                var_18 = (min(var_18, (((max(var_5, 1997872398))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((((min(var_12, var_8))) ? var_4 : (max(9223372036854775807, -1931551057)))) - var_10));
    #pragma endscop
}
