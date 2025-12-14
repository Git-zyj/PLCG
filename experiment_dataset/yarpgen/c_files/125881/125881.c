/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((-113 & (arr_3 [i_1 + 2] [i_0 + 2] [i_0 + 2])));
                var_12 &= 99;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = -99;
                                arr_15 [i_0 + 2] [i_0] = min((min((arr_3 [i_0] [i_1 + 2] [i_1 + 1]), (var_4 - var_7))), (((((0 ? 95 : 18446744073709551615))) ? (arr_12 [i_3 - 1]) : (18446744073709551615 * var_11))));
                                arr_16 [i_0] [i_0] [i_0] = (-(~16));
                            }
                        }
                    }
                }
                var_13 = var_4;
                arr_17 [i_0] = (((!16) - (-6697 ^ var_3)));
            }
        }
    }
    var_14 = var_11;
    var_15 = (max(var_15, var_7));
    #pragma endscop
}
