/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_2;
                var_17 = (17074680569835575958 >= ((((-661173145190588434 + 9223372036854775807) >> ((((3983261357 >> (31302 - 31293))) - 7779796))))));
                var_18 *= ((~((~(~var_0)))));
                var_19 = ((((((var_11 != var_15) && (~var_16)))) & var_11));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = ((~(~-661173145190588428)));
                            var_21 ^= ((-((-var_4 / (var_8 / var_14)))));
                            var_22 = (var_6 || (-30692 & var_0));
                            arr_17 [i_4] |= -var_7;
                        }
                    }
                }
                var_23 = (((((-(~var_13)))) ^ var_9));
                var_24 = (~var_5);
                arr_18 [i_2] [i_2] [i_3] = ((var_15 % (((-661173145190588428 && (~661173145190588409))))));
            }
        }
    }
    var_25 = (-661173145190588427 + var_2);
    var_26 = ((var_11 ^ ((((~11) >= (var_14 | var_0))))));
    #pragma endscop
}
