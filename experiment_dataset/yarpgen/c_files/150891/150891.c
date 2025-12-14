/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 *= (((((arr_4 [i_0]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_0]))) & (arr_4 [i_1])));

                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        var_21 &= (((arr_12 [i_0] [9]) ? (((arr_11 [i_3 + 4] [9] [i_3 + 4] [i_1]) ? var_8 : 65535)) : ((((-(arr_12 [10] [10])))))));
                        var_22 = -32732;
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_23 = (((!var_6) ? (max(var_13, (arr_0 [i_0] [9]))) : (((((24 != 1023) < (arr_13 [i_1] [i_4])))))));
                        var_24 = min(((((~var_3) ^ (max(var_2, (arr_8 [i_0])))))), ((-(min(var_0, var_6)))));
                    }
                    arr_16 [i_0] [i_2 - 4] [i_0] = (((~((~(arr_0 [i_2] [i_0]))))));
                }
            }
        }

        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            arr_20 [2] [i_5] &= -5567381927158535484;
            var_25 -= (~64528);
        }
        arr_21 [i_0] = ((-((((((var_8 ? 1 : (arr_11 [i_0] [2] [i_0] [i_0])))) && 64523)))));
        var_26 = ((-((var_12 ? ((((var_16 < (arr_3 [i_0]))))) : (arr_0 [i_0] [i_0])))));
        var_27 ^= (arr_9 [i_0]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_28 |= (((arr_12 [i_8] [i_7]) + (arr_18 [i_6] [i_6] [i_6])));
                var_29 += (((arr_22 [i_6]) / 2585513788120065));
                arr_30 [i_6] [i_7] [i_8] = -var_5;
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_30 = ((!(((-(arr_31 [i_9]))))));
                    var_31 = (((((65535 ? 64528 : 1003))) ? (((arr_23 [i_7]) | (arr_5 [i_6] [i_7] [7]))) : (arr_5 [i_7] [i_7] [i_9])));
                    var_32 = (max(var_32, -8677));
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    arr_41 [i_11] [i_11] = 64532;
                    var_33 |= ((-(arr_19 [i_11])));
                    var_34 = var_16;
                }
                arr_42 [5] [5] [5] [5] |= (arr_38 [i_6] [i_6] [i_7] [i_7] [i_6] [i_6]);
                var_35 = ((0 ? 1 : 209));
                arr_43 [i_6] [i_7] [i_7] = (!855515726602638069);
                arr_44 [i_9] [i_7] = var_11;
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                var_36 *= ((var_17 & (arr_48 [i_7])));

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_37 = var_8;
                    arr_51 [i_12] [i_13] [i_13] [i_12] [i_7] [i_6] = 238;
                    var_38 ^= ((arr_47 [i_13] [i_6] [i_7] [i_7]) ? var_17 : ((-35 ? -855515726602638070 : 4294967293)));
                }
                for (int i_14 = 4; i_14 < 10;i_14 += 1)
                {
                    arr_54 [i_6] [i_6] [i_12] [i_14 - 3] = (arr_32 [i_14 - 2] [i_14 - 4]);
                    arr_55 [1] [i_14 - 3] [i_6] [i_14] [i_14 - 3] [i_12] = var_13;
                    var_39 = (arr_5 [i_12] [i_7] [i_6]);
                }
            }
            var_40 = 939524096;
        }
        arr_56 [i_6] &= (((var_10 / (arr_50 [i_6] [i_6] [i_6] [i_6]))));
    }
    var_41 &= 1628;
    #pragma endscop
}
