/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_21 = (max(var_21, var_17));
            var_22 -= (~255);

            for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] = ((((((arr_3 [i_0] [i_1]) & -16))) ? 98 : var_13));
                arr_9 [i_0] [i_0] [16] [i_0] = (arr_1 [i_0]);
                arr_10 [14] [4] [i_0] = (arr_0 [i_2]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_16 [i_3] [i_3] [i_3] = (~var_11);
                            var_23 *= (((120 ? var_14 : var_2)));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] = ((+(((arr_17 [i_0] [i_1] [i_5]) % (arr_4 [i_0] [i_0] [i_5])))));
                arr_20 [i_5] [1] [1] = var_16;
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_24 = var_3;

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_25 = -121;
                var_26 ^= var_14;
                var_27 ^= (((arr_22 [i_0]) ? 35712 : (arr_5 [i_0] [i_6] [i_0])));
                var_28 = (98 > (((!(arr_7 [i_7] [i_7] [i_7] [i_7])))));
                var_29 ^= (-72 && 29823);
            }
        }
        var_30 = (max(var_30, (arr_6 [i_0] [i_0] [i_0])));
        var_31 = (min(var_31, var_11));
    }

    for (int i_8 = 2; i_8 < 13;i_8 += 1)
    {
        var_32 = (max(var_32, (var_11 && 21323)));
        arr_29 [i_8] [i_8] = (((arr_26 [i_8 - 1]) < (((arr_27 [i_8 + 1] [i_8]) ^ var_11))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_33 = (arr_32 [i_9]);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                {
                    var_34 = -1;
                    var_35 = (max((max((!71), (arr_37 [i_9] [i_10] [i_9]))), ((((arr_39 [i_9] [i_10]) && (((var_18 % (arr_33 [1] [i_9] [i_11])))))))));
                }
            }
        }
        arr_40 [i_9] = (((1 || var_9) || ((min(-18, (arr_32 [i_9]))))));
    }
    for (int i_12 = 2; i_12 < 12;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_36 += (min((((arr_14 [i_12 + 4] [0] [i_12 + 3]) ? ((min(45941, -2))) : var_0)), (max(((var_17 ? var_12 : var_14)), 35704))));
            arr_47 [i_12] [i_13] = (arr_33 [i_12] [i_12] [i_13]);
        }
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                var_37 = (min(var_37, (((!(var_12 < 89))))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_38 = ((!(((25066 ? (arr_46 [i_14 + 1] [i_12]) : (arr_46 [i_14 + 1] [i_12]))))));
                            var_39 ^= ((arr_6 [i_12 + 1] [i_12 + 1] [i_14 + 1]) > ((29812 ? (min(707571406, -114)) : -3050)));
                            var_40 = (((var_18 & ((min(var_19, var_1))))));
                            arr_60 [i_12] [i_12] = (max(((35714 ? 125 : ((4294967279 ? 125 : 116)))), ((max(var_6, (65529 <= var_18))))));
                        }
                    }
                }
            }
            for (int i_18 = 1; i_18 < 15;i_18 += 1)
            {
                var_41 = (max(var_41, (((!(arr_62 [4] [i_18 + 1]))))));
                arr_63 [i_12] [i_14] [i_12] = arr_30 [i_12];
                var_42 ^= (min((arr_56 [i_12] [i_14 + 1] [i_14 + 1] [2]), (var_12 < 7)));
                arr_64 [i_18 - 1] [i_12] [i_18 - 1] [i_12] = (((arr_33 [10] [i_12] [i_12]) ? (29835 - var_6) : ((-18 + (arr_33 [i_12] [i_12] [i_18])))));
            }
            arr_65 [i_12] [i_12] [i_12] = ((-106 ? 1 : 79));
        }
        for (int i_19 = 0; i_19 < 16;i_19 += 1)
        {
            arr_69 [i_12] = -109;
            var_43 = (((((!(((var_14 ? (arr_58 [i_12] [i_12]) : 123)))))) / 1));
        }
        var_44 = 14;
    }
    #pragma endscop
}
