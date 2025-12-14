/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_16 = (max((max(((~(arr_1 [i_0]))), -20622)), (max((arr_1 [i_0]), (84 >= -2145)))));
        var_17 = -2159;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] |= ((~((2118 ? var_2 : 2146))));

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            arr_7 [i_1] = (~(arr_5 [i_1] [10]));

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_18 [i_5] [i_4] [i_3] [i_3] [i_3] [i_1] [i_1] = (-2131 * 2149);
                        var_18 = (-2143 + -2163);
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_19 *= (arr_15 [i_1] [i_1] [i_3] [i_4] [i_1]);
                        var_20 *= (((2117 / var_5) && (((var_10 ? 2147 : (arr_10 [i_2] [i_2]))))));
                    }
                    var_21 -= (-2161 <= -2148);
                }
                for (int i_7 = 3; i_7 < 15;i_7 += 1)
                {
                    var_22 -= (arr_15 [i_2] [i_2] [i_2] [i_2] [2]);
                    arr_25 [i_1] [i_1] [i_1] [i_3] [6] |= var_5;
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_23 = ((!(arr_24 [i_2] [i_3] [i_2] [i_1])));
                    var_24 *= (-2137 ? (!-2153) : -2142);
                    arr_28 [i_8] |= (arr_24 [i_2 - 1] [i_2 + 4] [i_2 - 2] [i_2 + 1]);
                    arr_29 [i_8] [i_3] [i_3] [i_1] = (~-2145);
                }
                var_25 = ((-(arr_9 [i_3 + 2] [i_3] [i_3 + 4])));
            }
            for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
            {
                arr_32 [i_1] [11] [i_9] = ((2131 ? (arr_19 [i_9] [i_9] [15] [i_9] [i_9] [i_9 - 2] [1]) : (arr_19 [i_9] [i_9] [i_9] [i_9] [0] [i_9 - 2] [5])));
                arr_33 [6] [i_2 - 1] [i_1] = ((!(arr_13 [i_9 + 1] [i_9] [i_1] [i_1] [i_9 + 2] [i_9 - 2])));
            }
            for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_26 *= ((-2150 != (arr_14 [i_10] [2] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10])));
                var_27 += (-2164 & 2160);
            }
        }
        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            var_28 = (2140 > 2176);
            var_29 = (arr_26 [i_1] [0] [i_11] [0]);
        }
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            arr_43 [i_1] [i_1] = ((!(arr_36 [i_12 + 1] [i_12 - 1] [i_12 - 1])));
            arr_44 [i_1] [i_1] = (!-2154);
        }
        arr_45 [i_1] = var_14;
        arr_46 [i_1] = -2162;
        var_30 = arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        arr_49 [i_13] = (~-2188);
        arr_50 [i_13] [8] = ((arr_47 [i_13]) == -2165);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 19;i_15 += 1)
            {
                {
                    arr_57 [i_13] [i_14] [i_14] [5] &= ((!(arr_53 [i_15 + 2] [i_15 - 1] [i_15 - 1])));
                    var_31 *= ((-2153 ? -2136 : -2148));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 18;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 16;i_18 += 1)
            {
                {
                    arr_67 [i_18] [i_17] [i_16] |= (max((((arr_65 [i_18 + 2] [i_18 - 3] [i_18 - 1] [i_18 + 2]) && -2135)), ((-2175 >= (arr_54 [i_18 - 1] [i_18 - 1] [i_17])))));
                    arr_68 [i_16] [i_16] [i_16] [i_16] = ((~(arr_65 [i_18] [i_18 + 1] [i_18] [i_18 + 2])));

                    for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
                    {
                        var_32 = (max((max(2145, (arr_51 [i_18 + 2]))), (max(-2157, (arr_52 [2] [i_18 + 1])))));
                        arr_72 [i_16] [i_16] [i_16] [i_16] [i_18] &= (-2142 > -2138);
                    }
                    for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
                    {
                        arr_75 [i_20] [i_17] [i_20] [i_17] [i_20] = ((((max(var_3, (arr_65 [1] [i_17] [i_17] [i_17]))) <= ((((!(arr_51 [i_16]))))))));
                        var_33 &= ((~(2149 * 2132)));
                        arr_76 [i_20] [i_20] [9] [i_20] [i_16] = (min((max(((2163 ? var_9 : 2177)), ((var_0 ? (arr_64 [i_17] [i_17] [i_17]) : -2159)))), ((((((arr_62 [1]) >> (((arr_55 [i_18] [i_17] [i_16]) - 30913)))) == -2151)))));
                    }
                }
            }
        }
    }
    var_34 = (max(((-((min(var_14, var_14))))), -2106));
    var_35 = var_7;
    #pragma endscop
}
