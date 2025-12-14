/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((1 ^ 130) & (min(var_9, var_5)))), (-21082 || var_1)));
    var_16 = (((((min((var_8 - var_4), 9007199254740991)) + 2147483647)) << (var_12 - 26436)));
    var_17 = (((((-1 & var_10) + -10)) - 35));
    var_18 = ((((~var_10) > -18)));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 ^= ((((((-10 - (arr_0 [1] [i_0]))) * (arr_1 [i_0 + 2] [i_0 + 2]))) - var_2));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [i_4] [i_1] [i_4] [i_0] [i_2] = (-3 > 7447);
                            var_20 *= (arr_3 [i_0] [i_1] [i_1]);
                        }
                        for (int i_5 = 4; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_0 - 2] [i_0] = (max((49152 <= 49124), (arr_14 [i_0] [i_2] [i_3] [i_3])));
                            arr_17 [i_0] [i_1] [i_1] [i_0] [i_5] = (arr_8 [i_0] [i_0]);
                            var_21 = (((max(var_3, var_0)) >> (min((((arr_8 [i_1] [i_1]) % var_4)), (((var_8 + 2147483647) << (4009220875 - 4009220875)))))));
                        }
                        for (int i_6 = 4; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_22 ^= 12;
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = 1;
                            var_23 = (min(var_23, (((min((arr_0 [i_6] [i_6]), ((var_13 - (arr_1 [i_0] [i_1])))))))));
                        }
                        var_24 ^= (((((min((arr_4 [i_3] [i_1] [i_1] [i_0]), 1)) * ((((var_10 <= (arr_8 [i_1] [i_1]))))))) & (((min(var_5, var_14)) / (arr_15 [i_0] [i_0] [i_1])))));
                    }
                }
            }
            arr_21 [i_0] = 27;
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = ((max(252, -1)));
        arr_25 [i_7] = var_6;
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {

        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            var_25 = -12;
            arr_32 [i_8] [i_9] [i_8] = (-11 <= (max((((0 & (arr_28 [i_8])))), (min(2362336390263806954, 511)))));
            arr_33 [i_8] [i_8] [i_9] = 112;
        }
        arr_34 [i_8] = var_2;
    }
    #pragma endscop
}
