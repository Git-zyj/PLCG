/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_11;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_21 *= 2930474822;
                            var_22 = (((((1 ? var_12 : (arr_2 [i_0] [i_0])))) ? 987629344 : -832855468));
                            var_23 = ((~(arr_9 [i_0] [i_0])));
                        }
                    }
                }
            }
            var_24 = var_11;
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_15 [i_5] [i_5] [i_5] = ((min(((min(28015, var_17))), ((var_4 ? (arr_1 [i_0] [i_5]) : var_19)))) << ((((min((arr_13 [i_0]), (arr_4 [i_0])))) - 192)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_25 *= (((max(((max(var_6, 255))), (arr_2 [i_0] [i_5]))) <= 54511));
                            arr_24 [i_7] [i_8] = (+((((min((arr_10 [i_7]), 25))) ? (arr_19 [i_0] [i_7 + 1]) : (var_15 + 28008))));
                        }
                        arr_25 [i_7] [i_6] [i_5] [i_0] [i_0] = 832855452;
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((min(((var_8 / (arr_3 [i_0] [i_5]))), (((3978322211 ? var_17 : 28015))))) << (((arr_20 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1]) - 43750)));
                    }
                }
            }
        }
        var_26 = (max(var_26, ((((((arr_10 [i_0]) ? (arr_10 [i_0]) : var_7)) <= (-2147483647 - 1))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {

                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        arr_35 [i_11 - 1] = (max((((((arr_19 [i_9] [i_0]) >= (arr_30 [i_10] [i_10] [i_10] [i_10]))) ? (max(var_2, var_15)) : (2361707559 + var_6))), (((var_16 || (arr_6 [i_11 + 1] [i_10] [i_10] [i_11]))))));
                        arr_36 [i_0] [i_9] [i_10] [i_11] = (((~var_6) ? (((1933259731 || (arr_7 [i_11 + 4])))) : (((arr_7 [i_11 + 2]) ? 10756 : 163))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_27 = (max(var_27, var_11));
                            var_28 = (((arr_31 [i_0] [i_9] [i_13] [i_12] [i_13] [i_9]) ? (((!((max((arr_33 [i_13] [i_10] [i_9] [i_0]), var_7)))))) : (((var_17 - (arr_19 [i_12] [i_10]))))));
                            var_29 *= ((((((arr_27 [i_10] [i_9]) >= ((min(var_18, var_18)))))) <= (2 | 255)));
                        }
                        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                        {
                            var_30 = ((((((arr_34 [i_12] [i_9] [i_14] [i_12] [i_14]) ? var_17 : 65531))) ? (min((((arr_32 [i_0] [i_9] [i_10] [i_12] [i_14]) ? var_8 : 536870400)), ((5 ? 2996148255 : var_10)))) : (((((var_15 ? var_17 : 1)) | (arr_4 [i_9]))))));
                            var_31 = (arr_6 [i_14] [i_12] [i_10] [i_0]);
                            arr_45 [i_12] [i_0] [i_9] = -536870401;
                        }
                        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                        {
                            var_32 = 2147483647;
                            arr_48 [i_0] [i_12] [i_10] [i_12] [i_15] = (((((((max(0, (arr_5 [i_0])))) + ((-39 / (arr_42 [i_0] [i_10])))))) ? ((-(min(var_18, var_12)))) : ((-10756 ? -33 : 0))));
                            var_33 = -2147483647;
                            arr_49 [i_15] [i_12] [i_12] [i_0] = max(((536870400 ? 1 : (arr_21 [i_15] [i_15] [i_12] [i_10] [i_9] [i_9] [i_0]))), (arr_21 [i_0] [i_0] [i_9] [i_9] [i_10] [i_12] [i_15]));
                        }
                        var_34 = 2147483647;
                        var_35 = 965279278;
                    }
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        arr_53 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((((((arr_11 [i_0] [i_0]) / 47077))) ? (max((max(2703608063, var_19)), 0)) : (max(((2361707559 ? 1298819041 : -947217163)), var_12))));

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            var_36 = (((arr_41 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 3084 : (arr_33 [i_0] [i_9] [i_10] [i_17])));
                            arr_56 [i_17] [i_16] [i_10] [i_9] [i_17] = var_5;
                            var_37 = (((arr_44 [i_0] [i_9] [i_10] [i_16] [i_17]) ? (arr_44 [i_17] [i_16] [i_10] [i_9] [i_0]) : var_18));
                        }
                    }
                    var_38 = (max(var_38, (((((max((((arr_52 [i_0] [i_0] [i_9] [i_10]) + (arr_8 [i_0] [i_9] [i_10] [i_10]))), -36))) ? (((max(var_6, 10186)))) : (max((((arr_33 [i_9] [i_9] [i_9] [i_9]) ^ var_8)), var_3)))))));
                    arr_57 [i_10] [i_9] [i_0] = (max((((arr_37 [i_0] [i_9]) ? 10756 : var_16)), (arr_37 [i_9] [i_10])));
                }
            }
        }
    }
    #pragma endscop
}
