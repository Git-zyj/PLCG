/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max((((var_1 ? 4274681910299810928 : -489609191))), -4274681910299810928));
                arr_5 [i_0] [8] |= (((max(8405238856298624663, (arr_0 [i_0]))) << (((arr_3 [i_0]) - 912299437))));
                var_17 = (max(var_17, (((((~var_14) << (4794997711059168399 - 143)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_18 ^= ((~(((arr_1 [i_3] [i_3]) % var_11))));

                    for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (((-8135160941100148352 ? (((-4274681910299810928 || (-9223372036854775807 - 1)))) : -249)))));
                        var_20 = 8405238856298624663;
                    }
                    for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_21 -= (-var_6 >> (-2147483624 - -2147483633));

                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            var_22 += -0;
                            var_23 = 8405238856298624663;
                            var_24 = (min(var_24, -1));
                        }
                        var_25 &= -9223372036854775795;
                    }
                }
            }
        }
        var_26 = (max(var_26, (((4274681910299810928 ? ((~(arr_19 [10] [10]))) : -var_5)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_27 [9] = -8135160941100148358;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_27 *= (((((var_6 ? 0 : 126))) < (~9223372036854775807)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_28 &= -0;
                                var_29 = (min(var_29, (arr_7 [i_8])));
                            }
                        }
                    }
                    arr_38 [i_8] = var_12;
                    var_30 = (min(var_30, (((0 ? -8135160941100148356 : (((var_8 ? var_16 : var_3))))))));
                }
            }
        }
    }
    #pragma endscop
}
