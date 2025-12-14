/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-(1 / 17710)))) ? var_4 : ((-(1 / 1)))));
    var_14 = (max(var_14, 1));
    var_15 = 1;
    var_16 = ((var_4 ? var_9 : (~1)));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = min(1, (((-(arr_0 [i_1])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_0 - 1] = 1;
                        var_17 ^= 1;
                    }
                }
            }
            var_18 = -1162019084761130078;
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_19 = (((((arr_7 [i_0] [i_0 + 3]) ? (arr_7 [i_0] [i_0 - 2]) : (arr_7 [i_0] [i_0 - 1]))) >> ((((arr_7 [i_0] [i_0 - 1]) >= var_7)))));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_20 = ((+(((!var_0) ? (((arr_11 [i_5] [i_4]) >> (arr_5 [i_0] [i_0] [i_5]))) : ((min(var_8, var_12)))))));
                var_21 = var_10;
                var_22 = (((arr_0 [i_0 + 3]) ? var_5 : 1));
                var_23 ^= 1;
                var_24 = (min(var_24, (((~(max((max(var_11, (-2147483647 - 1))), -1638828726)))))));
            }

            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
            {
                arr_18 [i_0] [i_0] = (max(((-((-(arr_7 [i_0] [1]))))), var_2));
                arr_19 [i_0] [i_0] = (max((((-(arr_1 [i_0] [i_0])))), ((var_7 ? (arr_1 [i_0] [i_0]) : (!1)))));

                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    var_25 ^= arr_7 [10] [10];
                    arr_22 [12] [0] [i_0] [i_0] [i_0] [i_0] = ((((max(1162019084761130056, ((min(var_2, (arr_5 [i_0] [4] [i_0]))))))) ? (((~(arr_12 [i_0])))) : var_6));
                }
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_26 ^= var_4;
                var_27 = -1;
            }
        }

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_29 [i_0] [i_0 + 3] [i_0] = ((((min(-23924, var_0))) ? -172 : ((max(-2147483622, var_5)))));

            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                arr_34 [i_0] [i_0] [i_10] = ((min(var_11, (var_0 & 3))));
                arr_35 [i_0] [i_0] [i_10] [i_10] = var_8;
                arr_36 [i_0] [i_9] [i_0] = 1;
                arr_37 [i_0] [i_9] = (max(((var_1 ? ((0 ? 0 : (arr_23 [17] [i_9]))) : ((2147483622 ? var_3 : 0)))), (arr_7 [i_0] [i_0])));
                arr_38 [i_0] [i_0] [i_0] = (((((-7887067127832310116 ? (arr_23 [i_0 + 2] [i_0 + 1]) : 1))) ? (~var_0) : ((min(1, 1)))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                var_28 ^= ((!(~1)));
                arr_41 [5] [i_0] [15] = -2147483622;

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    arr_46 [i_0 + 1] [i_9] [i_0] [i_0 + 1] = (((arr_8 [i_0 - 1] [i_0 + 3] [i_11] [i_11]) ? (arr_3 [i_11] [i_0]) : (var_9 + 1)));
                    var_29 = 0;
                }
                for (int i_13 = 4; i_13 < 18;i_13 += 1)
                {
                    var_30 = ((var_4 < (((arr_5 [i_0] [i_11] [i_0]) ^ 240))));
                    arr_51 [i_0] [i_11] [i_0] [i_0] = ((130 ? 2147483647 : 1));
                }
            }
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            var_31 = (max(var_31, ((min((~16), ((~(1162019084761130056 < -16197807928775400))))))));
            arr_55 [i_0] [i_0] = 108;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_32 = (min((!2147483620), (((arr_60 [i_0] [5] [i_15] [i_16] [i_17]) ? ((((arr_57 [i_0]) >= (arr_3 [i_14] [i_0 + 3])))) : var_12))));
                            arr_65 [i_0] = ((((min((~16), 240))) != (((~9018237303379400317) - (arr_42 [i_16] [i_0])))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            var_33 = (~(arr_45 [1] [i_18] [i_0 + 1] [i_0 - 1]));
            arr_70 [i_0] [i_0] = (((arr_7 [i_0] [i_0 - 2]) ? var_12 : (arr_43 [i_0] [i_0 + 3] [i_0] [i_0] [10] [i_0 + 1])));
        }
        for (int i_19 = 3; i_19 < 17;i_19 += 1)
        {
            var_34 = (arr_58 [i_0]);
            var_35 = (max(var_35, ((((arr_73 [i_0] [1] [i_0 + 1]) ? (((arr_60 [i_0] [i_0] [1] [i_0] [i_0 + 3]) ? 1 : (arr_60 [1] [0] [1] [5] [i_0 - 1]))) : (max((arr_73 [i_0] [8] [i_0 - 1]), 255)))))));
        }
    }
    #pragma endscop
}
