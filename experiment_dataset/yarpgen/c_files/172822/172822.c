/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (((((var_3 | 42) ? (((arr_0 [i_0] [i_0]) ? var_0 : var_3)) : var_9)) < ((24 ? ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : 65))));
        var_13 |= (min(((((min(29, (arr_1 [i_0] [4])))) ? var_0 : var_7)), (!61)));
        var_14 = min((arr_0 [5] [i_0]), ((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 253))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        var_15 = arr_4 [i_2 - 1] [i_2];
                        var_16 = ((-(var_6 / var_0)));
                        var_17 = arr_0 [i_1] [i_2];
                        arr_11 [i_1] [i_3] [i_1] = ((((~(arr_7 [i_3] [i_4 + 1] [i_1]))) % ((((arr_1 [i_3] [i_2]) && ((min(3, (arr_6 [i_1] [i_2] [i_2])))))))));
                    }
                }
            }
        }
        var_18 += ((!(arr_2 [i_1])));
        var_19 = (max((~77), (max(((var_6 & (arr_6 [i_1] [i_1] [i_1]))), ((min((arr_9 [2] [2] [i_1] [i_1]), (arr_3 [5]))))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_20 ^= ((80 ? 146 : 168));

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            arr_19 [i_5] [i_6] = (((((10 >> ((((max(81, 1))) - 80))))) || (arr_14 [i_6 + 1] [10])));
            var_21 = ((156 ? ((((((6 ? 124 : 251))) || ((min(99, 123)))))) : (((~229) | 232))));
        }
        arr_20 [i_5] [i_5] = (!var_1);
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_22 = ((((((arr_22 [i_7 - 1]) == var_3))) / (78 - 13)));
        arr_23 [i_7] [i_7 + 1] = var_2;

        for (int i_8 = 4; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_23 |= ((29 || ((((max((arr_24 [4]), 165))) || ((var_11 || (arr_26 [i_8] [i_7])))))));

            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {

                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    arr_34 [i_9] [i_8] [i_8] [i_7] = (max((((arr_30 [i_7] [9] [i_9 + 1] [i_9]) << (((arr_29 [i_7 - 1] [i_8 - 4] [i_9]) - 226)))), ((((244 ? var_11 : 205)) % (arr_24 [i_8 - 2])))));
                    var_24 = ((254 ? 255 : 106));
                }
                arr_35 [i_9] [i_9] = (min(((((min((arr_28 [i_9]), 11))) ? (arr_22 [i_8 + 1]) : (arr_28 [i_9]))), (max(((122 ? (arr_33 [i_9 + 2] [i_7] [i_8 + 1] [i_7]) : (arr_28 [i_9]))), 24))));
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_25 = max((max((((111 > (arr_31 [i_8] [i_8] [i_8])))), 234)), (arr_29 [i_7] [i_8] [i_11]));
                var_26 = (min(var_26, ((max(var_2, (((((252 + (arr_28 [i_7])))) ? 255 : var_9)))))));
            }
            var_27 = ((~(((!((min(0, var_6))))))));
        }
        for (int i_12 = 4; i_12 < 21;i_12 += 1) /* same iter space */
        {
            var_28 -= ((~((var_11 << (arr_26 [i_12 + 2] [i_7 + 1])))));
            arr_41 [i_7] [i_7] [i_7] = ((((!(arr_22 [i_7 + 1]))) ? var_9 : (((arr_26 [i_7 - 2] [i_7 + 1]) ? ((var_6 ? var_4 : 5)) : (((arr_24 [i_7]) ? 237 : var_4))))));
        }
        for (int i_13 = 4; i_13 < 21;i_13 += 1) /* same iter space */
        {
            var_29 = var_6;
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_30 += (101 / 6);
                        arr_49 [i_7] [i_13] [i_14 + 1] [i_14 + 1] = (max(((var_2 ? ((min(var_11, 78))) : (var_3 ^ var_2))), var_4));
                        arr_50 [i_7] [i_7] [i_14] [i_15] = (((((var_8 >> ((((arr_36 [i_7] [i_7] [i_7] [i_15]) > 203)))))) ? (max(((max(0, var_8))), (var_9 | var_6))) : (~var_6)));
                    }
                }
            }
        }
        for (int i_16 = 2; i_16 < 20;i_16 += 1)
        {
            arr_53 [i_7] &= ((((max((arr_51 [i_7 - 1] [i_7]), (arr_27 [i_7 - 2])))) ? (((max(107, (arr_47 [9] [9] [i_16] [i_16]))))) : var_7));
            arr_54 [i_7 - 2] &= (arr_36 [i_7] [i_7] [i_7] [i_16 + 1]);
            arr_55 [i_7] = ((((((((arr_43 [i_7 - 2] [i_16]) < (arr_51 [i_16] [i_7]))) && (247 == 46)))) % ((-(arr_52 [i_16 + 1] [i_16 + 2] [i_16 + 3])))));
            var_31 -= (((arr_37 [i_16 + 1] [i_7 - 2] [i_7]) || (arr_22 [i_7 - 2])));
        }
        var_32 = ((((((((arr_45 [21] [i_7]) ? 36 : (arr_40 [i_7])))) ? 87 : 68)) != ((255 ? 234 : 255))));
        var_33 = (((max(((78 ? (arr_40 [i_7 - 2]) : 234)), (var_0 >= var_2))) ^ (max(136, ((0 % (arr_40 [i_7])))))));
    }
    var_34 = var_1;
    #pragma endscop
}
