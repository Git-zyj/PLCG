/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = 255;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 *= (-(arr_10 [i_4] [i_3] [1] [i_1] [16]));
                                var_20 *= (((((-(arr_6 [i_0] [i_1])))) && 1));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] = ((((((arr_11 [i_0] [i_1] [i_0 + 4] [i_1] [i_0 - 1]) % (max(var_10, 5918980804432694087))))) ? 23771 : var_11));
                }
            }
        }
    }
    var_21 = var_3;
    var_22 = (!4294967295);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_23 = (min(var_23, (((~(((-43 ? 1 : 254))))))));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_24 = (!(var_2 % 7388758211933706201));

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_22 [i_5] [i_5] = 42416;
                        var_25 = (max(var_25, (max(var_5, (((var_10 > var_10) & var_7))))));
                        var_26 = var_16;
                        var_27 = (-2147483647 - 1);
                        arr_23 [i_5] [i_7] = ((((arr_15 [i_5]) > var_15)));
                    }
                    var_28 = (((arr_19 [i_5] [i_6] [i_7]) <= var_14));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_29 = 9007199254740991;
                                var_30 = (arr_19 [i_10 - 1] [i_6] [i_5]);
                                var_31 = 1;
                            }
                        }
                    }
                    var_32 = (min(var_32, (~1)));
                }
                var_33 ^= (min((min(var_16, ((var_9 << (var_15 - 2403363618))))), (((~((49 << (var_3 - 34066))))))));
            }
        }
    }
    var_34 = (min(var_34, (((1 / ((184 ? (((-9223372036854775807 - 1) ? var_1 : -331361722)) : var_11)))))));
    #pragma endscop
}
