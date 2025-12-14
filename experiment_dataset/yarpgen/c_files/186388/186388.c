/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (!var_10);
                    arr_8 [11] [i_1 - 3] [i_1] = (((((401294245 ? 6 : 28))) ? var_4 : (var_11 & var_6)));
                    var_17 = ((((((arr_2 [i_2 - 1] [i_1] [i_1 + 1]) ? (arr_2 [i_2 + 1] [i_2] [i_1 + 1]) : var_15))) ? var_5 : (((arr_4 [i_2 - 1]) | (arr_4 [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = -var_10;
                                var_19 = (((arr_1 [i_1 + 1]) | (+-18446744073709551615)));
                                var_20 = (((((arr_12 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [13] [i_2]) << (((arr_3 [i_2] [i_3]) - 637540602)))) ^ (min((arr_12 [1] [i_2 + 1] [i_1 + 1] [i_3] [1] [i_2]), var_12))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (((var_14 + var_5) >> (((min((max(var_4, var_9)), -var_9)) - 6477931642848332304))));
    var_22 = ((var_1 >= (((var_8 + 2147483647) >> (((~var_0) + 1303384964))))));
    #pragma endscop
}
