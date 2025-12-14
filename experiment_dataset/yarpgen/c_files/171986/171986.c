/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (var_0 < 16687);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (arr_1 [12]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = ((max(var_4, 9090241594377059319)));
                                arr_12 [i_2] [i_3] [i_1] = (((max(var_4, -16683)) / ((((((((min((-9223372036854775807 - 1), -119)) + 9223372036854775807)) + 9223372036854775807)) << ((((max((arr_1 [i_0]), 120))) - 14602)))))));
                                var_14 += (arr_7 [0] [i_3]);
                            }
                        }
                    }
                    arr_13 [i_1] [i_2 - 3] = (((((min(var_3, (min(-113, (arr_0 [13]))))))) > var_5));
                }
            }
        }
    }
    #pragma endscop
}
