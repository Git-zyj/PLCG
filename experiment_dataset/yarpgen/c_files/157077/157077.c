/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 &= (max((~var_11), ((~(arr_0 [i_0])))));
        var_13 &= var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_14 = 21363;
            arr_9 [i_1] [i_2] [i_1] = (~var_9);
            var_15 = (min(var_15, ((((arr_6 [10] [i_2]) + (arr_6 [20] [20]))))));
            var_16 = (max(var_16, ((((!var_5) ? (arr_6 [6] [i_2]) : (((arr_2 [18] [18]) ? (arr_8 [i_2] [i_1]) : var_3)))))));
        }
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                var_17 = (var_11 && var_0);
                var_18 -= var_2;
                var_19 ^= ((var_2 | (arr_4 [i_3])));
                var_20 = ((((4063232 > (arr_13 [i_4]))) && (var_7 >= -1)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_21 += (((~42327) ? 3549647132 : (arr_10 [i_6] [i_3] [i_3])));
                            var_22 = ((var_3 ? (arr_14 [i_4 + 2] [i_5] [i_4 + 2] [i_4]) : (arr_16 [i_6] [i_6] [i_4 - 1] [i_3])));
                            arr_20 [i_1] [i_3] [i_1] [i_1] [i_1] = 245;
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_23 = (min(var_23, ((((((arr_3 [i_1]) / 2096128))) ? (~var_0) : (((arr_18 [i_1] [i_3 + 2] [0]) ? var_1 : (arr_5 [i_7])))))));
                var_24 = 104;

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_25 |= (((((arr_23 [14] [14]) << (((arr_13 [i_8]) - 74)))) > var_10));
                    var_26 = (min(var_26, (((~(arr_25 [16] [16]))))));
                    arr_27 [i_1] = -var_3;
                    var_27 = (arr_18 [i_1] [i_1] [i_1]);
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    var_28 &= (arr_24 [11] [i_3]);
                    var_29 = (max(var_29, ((((((-(arr_2 [1] [1])))) || var_7)))));
                }
                var_30 *= ((!(arr_22 [i_3 - 4] [i_7] [14])));
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
            {
                var_31 = (((arr_23 [i_1] [i_1]) != (((arr_28 [i_1]) ? var_0 : (arr_2 [i_1] [i_1])))));
                var_32 = (min(var_32, (arr_7 [i_1])));

                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_33 += var_0;
                    var_34 = (min(var_34, ((((var_9 + 2147483647) << (var_2 * 22))))));
                }
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                arr_37 [i_1] = (arr_22 [i_1] [i_3 + 1] [i_1]);
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_35 *= (((arr_40 [i_1] [i_1] [i_13 + 1] [i_3 - 2] [14] [i_1]) || var_6));
                            var_36 += ((-4095 ? (((((arr_40 [i_1] [i_1] [i_3] [i_12] [i_13] [i_14]) + 9223372036854775807)) << (((-1 + 25) - 23)))) : var_6));
                        }
                    }
                }
            }
            var_37 += (~var_7);
            var_38 -= (((arr_2 [20] [20]) ? ((((arr_38 [i_3] [i_1] [i_1] [i_1]) < var_0))) : (((-24 == (arr_29 [i_3] [i_1] [i_1] [i_1]))))));
            arr_44 [i_1] [i_3] = (-17 || -1);
            var_39 *= (-32 ? var_9 : var_3);
        }
        var_40 = (min(var_40, (arr_3 [i_1])));
        var_41 = -3667813889968662284;
        var_42 = (min(var_42, ((((-17 % var_11) ^ (((arr_16 [i_1] [i_1] [i_1] [i_1]) / var_7)))))));
    }

    for (int i_15 = 0; i_15 < 16;i_15 += 1)
    {
        var_43 = ((((min(var_3, var_8))) ^ var_3));
        var_44 = (-((-7 ? (arr_13 [i_15]) : -1)));
        var_45 ^= (min((((((!(arr_30 [i_15] [i_15] [i_15])))) / (((-309525199 >= (arr_5 [i_15])))))), ((-(arr_31 [i_15] [i_15] [i_15])))));
    }
    var_46 &= (var_5 >= var_0);
    #pragma endscop
}
