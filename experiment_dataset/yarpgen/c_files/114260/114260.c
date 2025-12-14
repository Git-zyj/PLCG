/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_0] = ((5483982153330724764 <= (arr_8 [i_0] [i_0] [i_4 + 3] [i_4 + 2] [i_0])));
                            var_16 = (arr_1 [i_0]);
                            var_17 = (!-21422);
                        }
                        var_18 ^= 249;

                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_19 = (((arr_1 [i_5 + 2]) | var_0));
                            var_20 = (var_6 && 3779788408890911371);
                            var_21 = ((238 ? var_9 : (arr_11 [i_0] [i_0] [i_5 - 2] [i_3] [i_3] [i_0] [i_5])));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_17 [i_0] = (arr_6 [i_0] [14] [13] [i_6] [i_6] [i_6]);
                            var_22 *= (((12962761920378826835 || 100) / var_8));
                            var_23 = (((arr_0 [i_0] [i_2]) % var_5));
                        }
                        for (int i_7 = 2; i_7 < 24;i_7 += 1)
                        {
                            var_24 = (min(var_24, var_9));
                            var_25 = (--122);
                        }
                    }
                }
            }
            var_26 = 3779788408890911382;
            arr_21 [i_0] = (~58);
            var_27 = (max(var_27, (-7679967624932360254 - var_9)));
        }
        var_28 = ((var_12 ? var_7 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_22 [i_0] = (((18446744073709551615 % var_2) == (~var_6)));
        var_29 = ((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_3 : 55);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 15;i_9 += 1)
        {
            var_30 = ((-31516 || (arr_25 [i_8] [i_8])));

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_31 = (var_9 / -16);
                arr_29 [i_9] [i_9] = ((!(arr_9 [i_9] [i_9] [i_9] [i_9] [i_9 - 3])));
            }

            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                arr_33 [i_9] = (((arr_32 [i_11] [i_8] [i_9]) ? (var_10 && 18446744073709551615) : ((206 ? -3779788408890911362 : 103))));
                var_32 &= 7;
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
            {
                arr_36 [i_9] [i_9] [i_9] = (((!var_7) != 41));
                var_33 = (((21826 & 0) == var_7));
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                arr_40 [i_8] [i_13] [4] &= (-4992 > -123);
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_34 |= ((var_5 ? (arr_25 [i_9 - 1] [i_9 + 1]) : (arr_25 [i_9 + 2] [i_9 - 3])));
                            var_35 = ((18569 >= (arr_32 [i_9] [i_9 + 2] [i_9])));
                            var_36 ^= (120 && var_5);
                        }
                    }
                }
                arr_48 [8] [i_9] [i_13] = (-125 % 65527);
            }
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                var_37 ^= (((var_10 != var_11) % (-2156996756754647080 < 71)));
                var_38 = (((var_11 != var_0) ? 207232960 : (var_1 <= -8211455382421750003)));
                arr_53 [i_9] = 54;
                var_39 = (((arr_23 [i_16] [i_9]) >= (!-65)));
            }
            var_40 ^= ((-(18446744073709551611 ^ -82)));
        }
        var_41 = (max(var_41, (~var_11)));
        var_42 = (min(var_42, (((198 / (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
        arr_54 [i_8] = ((-(arr_23 [i_8] [i_8])));
    }
    for (int i_17 = 0; i_17 < 15;i_17 += 1)
    {
        var_43 = 10432562783561280224;
        var_44 *= ((((var_8 < (arr_11 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))) ? ((-(arr_9 [14] [i_17] [6] [i_17] [14]))) : (!var_2)));
    }
    #pragma endscop
}
