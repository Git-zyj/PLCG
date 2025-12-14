/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = ((~((max((((!(arr_0 [i_0])))), (max(var_2, (arr_0 [i_0]))))))));
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_14 [i_3] [i_0] [4] [i_0] [4] = (min(((((!(arr_12 [i_0] [i_3] [i_2] [i_3]))))), ((((((arr_0 [i_0]) >= (arr_0 [i_0])))) & 195))));
                        var_18 = ((~(max((((arr_7 [i_0] [i_1] [i_0]) ? 21 : var_2)), (arr_0 [i_1 - 3])))));
                        var_19 -= arr_6 [2] [i_1 - 3] [8];
                        var_20 -= (max(((((max((arr_0 [i_3 + 1]), var_15))) / (arr_13 [3] [i_1 + 1] [i_2] [i_3] [i_3]))), (((!((max((arr_12 [i_0] [i_2] [i_2] [i_0]), (arr_8 [i_0] [i_2] [7])))))))));
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        var_21 ^= var_2;
                        var_22 = (min(var_22, var_7));
                        arr_19 [i_0] [i_2] [i_4] = (((arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1]) >> ((((+((max((arr_5 [i_4]), var_4))))) - 190))));
                    }
                    var_23 ^= var_16;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_22 [0] [i_5] = max((max(128, (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))), 251);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_24 = (!var_3);

            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_25 = (((arr_5 [i_5]) ? (arr_25 [i_5] [i_6] [i_7]) : (arr_13 [i_5] [1] [8] [7] [i_5])));
                var_26 = ((~(arr_1 [i_5])));
                var_27 = ((22 && (!14)));
                var_28 = ((~(~235)));
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                var_29 = (!var_13);
                var_30 -= (((~(arr_28 [i_5]))));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        {
                            var_31 |= ((~(arr_11 [i_10] [i_11] [i_11 + 1] [2] [i_10])));
                            arr_41 [i_6] = ((-var_3 ? (52 + 64) : var_2));
                            var_32 = (max(var_32, (((~(arr_39 [i_9] [i_9] [i_9] [i_5] [i_11 + 2] [i_9]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 8;i_13 += 1)
                    {
                        {
                            var_33 = (max(var_33, (arr_10 [7] [7] [i_9] [4] [i_12] [7])));
                            var_34 = ((~(((arr_40 [i_5] [i_6] [i_5] [i_12] [i_5]) ? var_1 : (arr_2 [2])))));
                        }
                    }
                }
            }
            var_35 = var_2;
            var_36 = (max(var_36, (((207 ? (~170) : 223)))));
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
        {
            arr_49 [7] [7] = 249;
            var_37 = (~51);
            var_38 = ((+((max((arr_17 [i_5] [7] [i_14] [i_14]), (arr_25 [i_5] [i_5] [i_14]))))));
            var_39 *= max((max((max(var_6, var_9)), (arr_40 [i_5] [i_14] [i_14] [i_14] [i_5]))), 176);
        }
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_16 = 3; i_16 < 9;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    {
                        arr_59 [i_15] [i_17] = arr_43 [i_18];
                        var_40 = (min(var_40, ((((arr_16 [i_17] [i_16 - 1] [1] [1]) ? (((((max((arr_56 [i_16] [9]), (arr_57 [i_17] [4] [i_17] [4])))) || ((!(arr_8 [1] [i_16] [i_16])))))) : ((((var_10 * (arr_13 [i_15] [i_15] [i_15] [i_18] [3]))) / 192)))))));
                    }
                }
            }
        }
        arr_60 [i_15] = max(119, 109);
    }
    var_41 = 172;
    var_42 = (var_8 * var_12);
    var_43 = (((!110) || var_0));
    var_44 = 255;
    #pragma endscop
}
