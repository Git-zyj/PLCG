/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = (1312219609 & 2586356767498448184);
            var_15 = ((~(min((arr_3 [19]), (min(var_7, -122))))));
            var_16 ^= (((((-var_3 & (var_4 == var_13)))) ? var_7 : (((6235570651086209490 ? 2251499109 : 41198)))));
        }
        for (int i_2 = 4; i_2 < 24;i_2 += 1)
        {
            arr_7 [i_0] [i_0] = (min((((var_10 >= (arr_2 [i_0] [i_2 + 1])))), (arr_5 [15] [15])));
            var_17 = var_8;
            var_18 = (min(var_18, 1312219609));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                var_19 *= (arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2]);
                var_20 = (min(var_20, var_0));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_2] = ((((((arr_2 [i_4] [i_2]) ? 2043468187 : var_6))) ? ((max(2043468187, -2147483647))) : ((53 ? 212 : -2586356767498448184))));
                var_21 = 13;
            }
            var_22 = (((((arr_9 [9] [i_2] [i_2] [i_2 + 1]) & 2982747697)) | ((((arr_9 [i_0] [i_0] [i_0] [i_2 - 1]) / var_6)))));
        }
        var_23 ^= ((0 ? ((+(((arr_11 [i_0] [i_0] [i_0] [i_0]) ? -2586356767498448202 : var_2)))) : ((((((0 ^ (arr_1 [2])))) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
        var_24 = (((arr_1 [i_0]) ? ((~(arr_12 [i_0] [i_0] [i_0]))) : 51200));
    }
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
        {
            var_25 ^= (((((-122 ? 121 : 182))) ? (max(255, (((arr_4 [i_5]) ^ var_2)))) : (arr_5 [i_5 + 1] [i_6 + 4])));
            var_26 = (max(var_26, ((((1312219609 ? 121 : 15817))))));
            arr_20 [i_5] [i_6] = ((-(((arr_8 [i_6 + 4] [i_5] [2]) ? var_5 : 2043468186))));
        }
        for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
        {
            var_27 = (min(var_27, (((((-(((arr_0 [i_5 - 2] [i_7]) - 2586356767498448175)))) - (((((arr_1 [i_5]) / var_3)) + (((-111 + (arr_2 [i_5] [i_5])))))))))));
            var_28 = (arr_18 [4] [4] [i_5 + 1]);
            arr_24 [i_5] [i_7 - 1] = 122;
            arr_25 [i_5 - 3] [i_7] = 3482256087456756885;
        }
        arr_26 [i_5] = (~-6648225771159180376);
        var_29 = arr_6 [i_5];
        var_30 = (((~var_9) ? 49 : 73));
    }
    var_31 |= var_7;

    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_32 = (min(((2043468186 ? (arr_19 [i_8] [i_8]) : (arr_19 [i_8] [i_8]))), (((arr_19 [i_8] [i_8]) ? (arr_19 [8] [i_8]) : (arr_19 [i_8] [i_8])))));
        var_33 = (((((~(1 || -168655767)))) != (max(1, (arr_17 [i_8] [i_8])))));
        var_34 = (~-3135155628803492070);
        var_35 += (((arr_16 [i_8]) << (((arr_0 [i_8] [i_8]) - 1301659508))));
    }
    #pragma endscop
}
