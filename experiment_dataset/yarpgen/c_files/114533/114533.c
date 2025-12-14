/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = var_3;
    var_14 -= 54302;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            var_15 = (-0 * 247663321);
            arr_4 [i_1] [i_1] = (max(((((((144 != (arr_1 [i_0] [4])))) * var_3))), (((-7346921429046415201 + 9223372036854775807) >> (var_6 > var_8)))));
            var_16 = (((((-7346921429046415212 ? 0 : (arr_1 [i_1 + 1] [i_1 + 2])))) | 627515393382596464));
        }
        var_17 = ((-119 * (((max((arr_0 [i_0]), 7346921429046415186))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_16 [i_2] [6] &= 7346921429046415201;
                        var_18 = -var_10;
                        arr_17 [i_2] = 4294967277;
                        var_19 = ((25 == ((((131 <= 627515393382596465) > ((max(var_4, 0))))))));
                        var_20 = 4294967277;
                    }
                }
            }
            var_21 ^= 1;
            var_22 = (min(var_22, ((max((arr_14 [i_2] [10] [10] [i_2]), (((((max(4294967277, 41))) == (max(1, 627515393382596464))))))))));
            arr_18 [i_2] [i_3] [i_2] = 43460;
            arr_19 [i_2] = ((max(-7346921429046415208, 7627160543383173988)));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    var_23 = (((46 == -1) != -7627160543383173989));
                    var_24 = var_3;
                    var_25 = (max(((22229 ? -7346921429046415201 : (((65535 >> (8773324856635653276 - 8773324856635653266)))))), 1384077345));
                }
            }
        }
    }
    var_26 = (max(var_26, ((max(((((10 ? 145 : 1)))), (max(var_9, var_2)))))));
    #pragma endscop
}
