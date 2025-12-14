/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((1 ^ -16660) + 2147483647)) << (var_8 - 25674)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 |= -23614;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = ((+((((arr_7 [i_1] [i_1 - 1] [i_1 + 1] [i_1]) && var_9)))));
                                var_23 += ((var_16 ? 232107512 : var_14));
                            }
                        }
                    }
                    var_24 = ((((((-30153 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) / 2353365341)) * ((((!(arr_3 [i_1 + 2] [i_1 + 2])))))));
                    var_25 = (min((~0), (arr_0 [i_1 + 2] [i_0])));
                }
            }
        }
    }
    var_26 = var_16;
    #pragma endscop
}
