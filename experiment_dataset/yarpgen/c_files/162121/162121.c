/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((124 >= (45594 >= 16383)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((arr_1 [22] [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [2] [i_1] [i_0] [i_0] = (((((var_7 ^ -16371) + 2147483647)) << (((59 >> 0) - 59))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_14 [i_2] [i_1] [19] = ((((max((((arr_3 [i_3] [i_3]) && 1)), ((!(arr_1 [i_0] [i_0])))))) ^ ((max((1 != 0), 32754)))));
                            arr_15 [i_0] [i_0] [i_1] [1] [i_3] [i_4] [i_4] = var_8;
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] [i_5] [i_6] [i_6] = (arr_11 [i_0] [i_1] [i_5]);
                    arr_23 [i_0] [i_1] [i_6] [i_6] = ((((max(12, 16383))) * ((min(var_0, 1)))));
                    arr_24 [i_6] [i_1] [i_1] [i_1] = var_1;
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_29 [i_7] [i_7] [i_7] [i_7] = ((-(((arr_18 [i_0] [i_0] [7]) * (arr_18 [i_0] [i_1 - 2] [i_5])))));

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_32 [i_8] [i_8] [i_5] = min(var_3, -var_7);
                        arr_33 [i_8] [i_8] [17] [i_8] [i_8] [i_8] = (((((min(-32755, var_5)))) ? ((1 ? 1 : var_4)) : (max((1 - 1), var_2))));
                        arr_34 [i_8] [i_8] [i_8] [i_7] [i_8] [i_5] [i_7] = (max(-24152, (~var_3)));
                        arr_35 [i_8] [i_8] [i_8] [i_8] [i_1 - 1] [i_0] = ((-(((!(arr_28 [i_0] [i_0] [8] [i_7] [i_8] [i_5]))))));
                        arr_36 [i_5] [i_0] [i_1] [i_0] [i_5] [i_7] [18] &= var_5;
                    }
                    arr_37 [13] [i_1] [1] [i_5] [13] [i_1] = ((+((min((!1), var_3)))));
                    arr_38 [i_7] [i_5] [i_1] [i_0] &= (((((arr_4 [i_0] [i_1] [i_7]) ? -24145 : var_1)) ^ (((85 ^ 32754) << ((var_9 ? (arr_25 [6] [i_1 - 1] [i_1 - 1] [i_1]) : (arr_16 [i_5])))))));
                    arr_39 [i_0] [23] = (max((((var_6 ^ 18089) == ((max(var_0, (arr_6 [i_0] [i_0] [0])))))), (-var_0 == -19707)));
                }
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    arr_43 [i_0] [i_1] [i_5] [i_9] [i_0] = ((arr_31 [i_9] [13] [i_9 + 2] [i_9 + 1] [i_9]) >= (max(((var_6 ? var_2 : var_8)), ((-11557 ? -19707 : var_9)))));
                    arr_44 [i_1] = (((~((~(arr_40 [i_0] [i_0] [i_1] [i_1] [i_0]))))));
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_47 [i_0] [i_1 + 2] [i_5] [i_10] [i_10] = -48;
                    arr_48 [i_0] [22] [i_5] [i_10] [11] [i_0] = var_2;
                }
                arr_49 [i_0] |= var_2;
            }
            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            arr_59 [i_11] = 65529;
                            arr_60 [i_0] [i_1] [i_11] [i_11] [i_13] |= ((!((((1 ? var_3 : (arr_0 [i_1] [i_13]))) != ((1 ? var_5 : (arr_26 [i_0] [i_12] [i_0])))))));
                        }
                    }
                }
                arr_61 [i_0] [i_0] [i_1 - 2] [i_11] = var_7;
            }
            arr_62 [1] [i_1] = ((((min(var_2, (((arr_51 [i_0] [i_1] [i_0] [i_0]) % (arr_3 [i_0] [i_1])))))) ? ((min((arr_9 [1] [i_1 - 1] [i_1] [1]), -16383))) : (((1 | var_0) & var_8))));
            arr_63 [i_0] = ((((max((arr_45 [i_0] [i_1] [i_1 - 2] [12]), (arr_45 [i_0] [11] [i_1 - 1] [i_0])))) || (arr_45 [i_0] [i_0] [i_1 - 2] [i_1])));
        }
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        arr_68 [i_14] = var_0;
        arr_69 [i_14] = 1;
        arr_70 [i_14] = (1 ? var_2 : (((((arr_28 [i_14] [i_14] [14] [i_14] [i_14] [i_14]) + 2147483647)) << (1 - 1))));
    }
    var_11 |= (((max(-43, ((var_6 >> (var_1 + 61))))) & (((1 + 0) << 1))));
    #pragma endscop
}
