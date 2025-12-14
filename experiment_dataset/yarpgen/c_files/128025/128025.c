/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((4294967295 ? var_5 : (arr_0 [2]))) - (arr_0 [i_0])));
        arr_3 [i_0] = (((((((min(243, 2592997487))) < (min(4203759123777841441, (-9223372036854775807 - 1)))))) > (arr_1 [i_0])));
        var_17 = (max(var_17, 9223372036854775807));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_18 = 8826;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_19 -= ((9223372036854775807 ? var_14 : (arr_5 [i_1 - 2] [i_1 - 2])));
                        arr_12 [i_1] [i_2] [i_3] [i_2] [i_4] [i_4] = (((arr_4 [i_1] [i_1 + 1]) <= (arr_4 [i_1 + 1] [i_1 - 2])));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_20 = var_4;
                            var_21 ^= var_6;
                            arr_16 [i_5] [i_2] [i_1] [i_2] [i_1] [i_1] [i_1 + 2] = var_12;
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_1] = (((var_1 * (arr_4 [i_2] [i_2]))) - (((arr_6 [i_5] [i_5] [13]) ? var_12 : (arr_11 [i_1]))));
                            arr_18 [i_1 + 2] [i_1 + 2] [i_1 + 2] [1] [i_1 - 1] [i_1] [2] = ((!(arr_14 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2] [i_2] [i_1 + 2])));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_1] [i_3] [i_2] [i_1] = (((arr_13 [i_1 + 2] [i_1]) ^ var_0));
                            arr_22 [i_1] [i_3] [0] [i_1] = (((((var_8 ? var_15 : 3123844239))) ? 220 : (((arr_13 [i_3] [i_1]) ? var_12 : 936167013))));
                            var_22 = var_1;
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_23 *= var_7;
            var_24 += ((var_12 || ((((arr_15 [2] [i_7] [i_7] [i_1 - 1] [i_7]) + (arr_4 [i_1] [i_7]))))));
            arr_25 [i_7] [i_7] &= var_4;
            arr_26 [i_1] [i_1] [i_1] = 2018952900;
        }
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            var_25 = (max(var_25, var_1));

            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                var_26 -= ((((1094866105 >= (arr_29 [i_8] [i_8] [i_8]))) ? ((32737 ? 151 : 2276014395)) : var_0));
                var_27 = ((var_5 ? 1171123040 : var_8));
            }
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                var_28 = (~var_2);
                arr_33 [i_8] [i_8] [i_1] |= (137 < var_4);
                arr_34 [7] [i_8] [i_1] = (((16 / -4090936134944658052) + (arr_28 [i_1 + 1])));
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_29 = ((arr_5 [i_1 + 2] [i_8 + 1]) ? var_5 : var_14);
                var_30 = (min(var_30, 255));
                var_31 = ((175 ? -12 : var_13));
            }
        }
        var_32 = var_3;
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_33 = (((arr_38 [i_12]) % (min((min(-4090936134944658052, (arr_39 [i_12]))), ((min(var_9, 3928756940)))))));
        var_34 -= ((+((3928756937 ? (arr_39 [4]) : 3585413152641312453))));

        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            arr_44 [i_12] [i_13] [i_12] = 6;
            var_35 = var_7;
        }
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        arr_48 [i_14] [i_14] = (((226 < var_1) ? 2639150203 : -10759));
        var_36 = (max(var_36, var_9));
    }
    #pragma endscop
}
