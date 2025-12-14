/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 ^= (min((arr_6 [i_0]), (max(var_12, (arr_0 [i_0] [i_2])))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (max((((arr_1 [i_1] [i_2]) ? var_12 : (max(1, var_6)))), (((var_14 ? (!var_11) : (arr_3 [i_1] [i_2]))))));
                    var_20 = (min(var_20, (51818 || -1287904382)));
                    arr_9 [i_2] [i_2] = (max((((-(arr_6 [i_0])))), (min((arr_0 [i_0] [i_0]), 1))));
                }
            }
        }
    }
    var_21 = var_14;

    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            var_22 &= ((-(min(1, 3853359588))));

            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                var_23 = (min(var_23, (((-((var_14 & ((min(var_1, var_5))))))))));
                var_24 = (min(var_24, ((max((min((arr_12 [i_5 + 3]), -25355)), (arr_12 [i_5 + 1]))))));
                var_25 += (~1);

                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_26 -= min((arr_10 [i_5 + 3]), (arr_10 [i_5 - 1]));
                    arr_21 [i_3] [i_4] [i_5] [9] [i_5] [7] = ((var_18 != (max(((var_8 >> (65535 - 65532))), (arr_1 [i_5] [i_4 - 2])))));
                    var_27 += ((((max((min(441607699, 8883840698213287907)), ((min(2052575045, 27650)))))) ? var_16 : (((~var_12) * ((2954395285386614817 ? 0 : 2954395285386614839))))));
                    arr_22 [i_3 + 1] [0] [0] &= -2954395285386614845;
                    var_28 = (min(var_28, ((max((((arr_4 [i_5 - 1] [i_4 - 1] [i_3 + 1]) ? (arr_4 [i_5 + 1] [i_4 + 3] [i_3 + 1]) : (arr_4 [i_5 + 3] [i_4 + 3] [i_3 - 1]))), (max(1, var_11)))))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_29 -= (max(var_5, (max((min((arr_0 [i_3] [i_5]), (arr_16 [i_4] [i_4] [i_7]))), (arr_4 [i_3] [i_4 + 2] [1])))));

                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_30 = (min(var_30, (~var_16)));
                        var_31 = (min(var_31, (((-26 ? 2954395285386614798 : 1)))));
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_32 = (min(var_32, 19705));
                        arr_31 [i_3] [i_5] [i_5] [0] [i_9] = ((!((!((((arr_26 [i_3] [i_9] [i_3] [i_7] [i_9]) ? var_4 : var_15)))))));
                        var_33 += ((~(min((~var_5), var_17))));
                        var_34 = (min(var_34, ((max(50724, -6449073322659905190)))));
                    }
                    var_35 -= 51;
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_36 = (min(var_36, ((((((arr_3 [i_5 + 2] [i_10]) ? -124362902222993790 : (arr_25 [i_3] [6] [i_3 + 1]))) & (arr_2 [i_5]))))));
                    var_37 ^= var_2;
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_38 ^= max(1, (max(1, 1)));
                    var_39 ^= (arr_19 [i_3] [i_4] [1] [i_5 + 3] [i_11] [i_11]);
                    var_40 = (min(var_40, ((((arr_28 [i_3 - 1]) ? (max(var_12, (var_12 ^ var_6))) : 6)))));
                    var_41 += (arr_3 [1] [i_11]);
                }
                var_42 -= (5676 & 9223372036854775807);
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_43 = (min(var_43, ((min((var_8 * var_1), (min(var_2, ((~(arr_13 [i_3]))))))))));
                            var_44 += var_16;
                            arr_44 [i_3] [i_4] [i_4 + 3] [i_12] [i_4 + 3] [i_13] [1] = arr_30 [0] [0] [i_12] [i_12];
                        }
                    }
                }

                for (int i_15 = 1; i_15 < 8;i_15 += 1)
                {
                    var_45 -= (arr_19 [i_3] [i_3] [i_3] [i_3] [i_4] [i_12]);
                    arr_47 [i_3] [i_15] [i_15] = (min(var_2, ((!(((var_11 ? -32739 : var_0)))))));
                }
                arr_48 [i_3] [i_3] [8] = ((-(arr_15 [i_3])));
                var_46 -= ((~(~-37)));
            }
            arr_49 [i_3] &= (min((((arr_3 [i_3 - 1] [i_4 - 1]) << (arr_3 [i_3 - 1] [i_4 + 1]))), (arr_3 [i_3 + 1] [i_4 + 2])));
            var_47 ^= ((-20865 ? (((-273501740 ? 0 : -760133324))) : (~441607729)));
            var_48 = (min(var_48, ((61371 % ((~(arr_1 [i_3 + 1] [i_3])))))));
        }
        var_49 ^= var_3;
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 12;i_16 += 1)
    {
        var_50 ^= -var_12;
        arr_54 [i_16] [0] = (((~3) & var_7));
        arr_55 [i_16] = (arr_2 [i_16 + 1]);
    }
    #pragma endscop
}
