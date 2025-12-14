/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = (((!1) || ((var_8 || (arr_12 [i_1 + 2] [i_0 + 3] [i_0 + 3] [i_0] [i_0] [i_0 - 2])))));
                            var_19 = ((0 < -3) || (((+(((arr_2 [i_0] [i_0]) ? (arr_8 [i_0] [14] [i_3]) : var_17))))));
                        }
                    }
                }
                var_20 = (min(((-var_16 ? 0 : (min(var_16, 4032)))), 65535));
                arr_13 [i_1] [i_0] = (((-(arr_12 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 1] [i_0 + 3]))));
                var_21 ^= (((~var_5) != ((~((min(var_6, var_1)))))));
            }
        }
    }
    var_22 = (((var_7 ? (~3470432453210869516) : (var_8 & 19))));
    #pragma endscop
}
