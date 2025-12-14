/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(var_13, var_5)) ? (~var_5) : -0))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (((arr_0 [i_0 - 1]) + ((((var_14 == (arr_0 [i_0 + 1])))))));
            var_19 = ((15277950542395224672 < (((1 ^ 3127321389866598331) ? (((arr_5 [i_0] [i_1]) ? (arr_6 [i_0] [i_0]) : 21079)) : 21079))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_9 [i_2] [i_1] [i_1] [i_1] = (((((((arr_7 [i_2] [i_0]) / (arr_0 [i_2]))))) && 3127321389866598331));
                var_20 = (arr_2 [i_2]);
            }
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_21 = (max(var_21, ((((((min(var_9, var_2)))) > var_6)))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_15 [i_0] [i_0] [i_0] [i_0] = ((8135065135217664977 ? ((1 ? var_6 : (max(44488, var_6)))) : var_16));
                var_22 = ((~(((var_8 <= -3127321389866598317) ? ((var_6 ? var_11 : var_11)) : var_14))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_23 = 1;
                var_24 = (((arr_7 [i_3] [i_3]) <= var_14));
            }
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_23 [i_0] [4] [i_0] = 10311678938491886657;
            var_25 = (((~var_8) || (((-26863 ? (~63984561) : (-19 < var_11))))));
            var_26 = (var_3 % 6459186024114386243);
        }
        var_27 = (((arr_10 [i_0] [i_0]) ^ var_7));
        var_28 = (((~var_3) ? (((min(var_13, (arr_11 [13] [i_0 - 1]))))) : (max(((var_16 ? (arr_5 [i_0 + 1] [i_0]) : (arr_11 [i_0] [1]))), ((max((arr_17 [i_0]), (arr_8 [i_0] [i_0]))))))));
        var_29 = ((~(((44456 * var_11) / var_1))));
        var_30 = ((((min(((var_8 ? var_14 : 21082)), ((((arr_18 [i_0] [i_0] [i_0] [15]) < -7685838212069525468)))))) ? ((~((max(var_13, 1))))) : 1));
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        var_31 = max(var_16, ((((~var_10) + (((max(1, var_11))))))));
        arr_26 [i_7] = (min(1, -21092));
        var_32 = 18066;
        var_33 = (max(var_33, ((min(var_12, ((var_11 / (min(var_8, 3127321389866598336)))))))));
    }
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        var_34 = var_7;
        var_35 = (~1426843803);
    }

    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_36 = (arr_31 [i_9]);
        arr_33 [i_9] = (var_8 ^ var_8);
    }
    for (int i_10 = 2; i_10 < 24;i_10 += 1)
    {
        var_37 = (max(var_37, ((((var_9 % 65525) | (min(var_13, (max(var_3, var_14)))))))));
        var_38 = (max(var_38, (((max((max(var_16, (arr_35 [i_10] [i_10])), var_5)))))));
        var_39 ^= (arr_35 [i_10] [i_10]);
    }
    #pragma endscop
}
