/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = ((-(min((~30811), -1))));
                                arr_15 [i_0] [i_3 - 1] [i_2] [i_1] [i_0] = (-((var_6 ? (arr_8 [i_0] [i_3 - 1] [i_3 - 1] [i_4]) : var_3)));
                                arr_16 [1] [i_1] [1] [i_1] [i_0] [i_1] [i_1] = (arr_13 [i_0] [i_1] [i_0] [i_3] [1] [i_3] [i_4]);
                                var_16 = (12161374993750056712 < 6285369079959494892);
                                arr_17 [i_0] [i_0] [i_0] [i_3 - 1] [i_4] [i_3] [i_0] = (((!(arr_3 [i_0]))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] = ((!(((((((((arr_2 [i_0]) + 2147483647)) << (6285369079959494866 - 6285369079959494866)))) ? ((var_3 ? var_2 : 6285369079959494892)) : (arr_6 [i_1] [i_2 + 2] [i_0]))))));
                    arr_19 [i_0] [i_0] [i_1] [9] = arr_3 [i_0];
                    var_17 = (min(var_2, 12161374993750056748));
                    var_18 = (max(var_18, ((((arr_2 [i_2]) - (var_13 * var_13))))));
                }
                arr_20 [i_0] [i_0] = (((((!31492) ? (min((arr_12 [i_0]), var_8)) : (arr_10 [i_0] [i_0] [i_1] [i_1]))) % (((-((~(arr_1 [i_0] [i_0]))))))));
                var_19 = (max(var_19, ((((max((arr_5 [i_0] [i_1]), (((arr_14 [1] [i_1] [i_1] [14]) == var_3)))) ? (((0 < 1) ? (arr_12 [i_0]) : (arr_7 [i_1]))) : (((min((arr_8 [i_0] [i_0] [i_1] [i_1]), (arr_8 [i_0] [i_0] [i_0] [i_0]))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_20 = var_1;
                arr_26 [i_5] [i_6] [i_6] = (!((((arr_12 [i_6]) ? (((arr_2 [6]) ? 12161374993750056685 : var_8)) : var_2))));
                var_21 = (min(var_21, ((((((var_11 + (arr_5 [1] [i_6]))) ? 6036594478118081554 : ((((!(arr_0 [i_5])))))))))));
            }
        }
    }
    var_22 = (min(var_22, var_1));

    for (int i_7 = 4; i_7 < 24;i_7 += 1)
    {
        var_23 = ((-(arr_28 [i_7 + 1])));
        var_24 = (min(var_24, var_6));
        var_25 *= -0;
        arr_29 [i_7] = 7933868310922692851;
        var_26 = ((((((34044 ? 27484 : 1)) * var_7))) ? ((((((arr_27 [i_7]) * (arr_27 [i_7])))) ? 6285369079959494866 : (arr_27 [i_7 - 4]))) : (max(var_7, ((6285369079959494866 % (arr_27 [i_7 - 4]))))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_27 = (max(var_27, ((((max(var_9, 6036594478118081555))) ? (((-(arr_27 [i_8])))) : (((arr_28 [i_8]) ? (arr_30 [i_8] [i_8]) : (arr_30 [i_8] [i_8])))))));

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_28 = ((((((((1 ? 1 : 6285369079959494868))) ? (max(6285369079959494892, var_13)) : (min(var_14, (arr_30 [i_8] [i_8])))))) ? 968400659477218978 : (((arr_33 [i_8] [i_9]) ? var_6 : (arr_33 [i_8] [i_9])))));
            arr_34 [i_8] [i_9] = (((34044 & 31473) | 1));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        arr_44 [i_8] [i_10] [i_11] [i_8] = min(1, (!var_8));
                        var_29 &= (min((min(((0 ? (arr_43 [i_8] [13] [i_11] [13]) : 1)), var_8)), (~1)));
                        arr_45 [i_8] [i_8] [i_11] [i_8] [i_11] [i_10] = ((+(((arr_43 [i_8] [i_10] [i_11] [i_12]) ? 1 : 1))));

                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_30 |= arr_31 [1];
                            arr_49 [i_8] [i_8] [i_8] [14] [i_12] [i_12] [18] = var_2;
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, (arr_37 [i_8] [4] [i_12])));
                            arr_52 [i_14] [i_8] [i_11] [i_8] [i_8] = 1;
                            var_32 *= (max(1, (12161374993750056747 > var_5)));
                            var_33 = (max(var_33, ((max((-var_9 == var_2), ((var_9 << ((min((arr_32 [i_11]), 31494))))))))));
                        }
                    }
                }
            }
            var_34 = ((max((arr_31 [i_8]), var_3)) ^ (((((arr_31 [i_8]) > (arr_31 [i_8]))))));
        }
        for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
        {
            arr_57 [i_8] = (((arr_38 [i_8] [i_15] [i_15] [i_8]) ? 0 : var_4));
            var_35 = arr_27 [i_8];
            var_36 = (max(var_36, (~1)));
            arr_58 [i_8] [i_15] [i_15] = min(((((1 ? var_14 : var_0)) + (arr_37 [i_8] [i_8] [i_15]))), (((6285369079959494892 ? var_14 : 3264))));
        }
        for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
        {
            var_37 = -21699;
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            arr_71 [i_19] [i_16] |= ((((((arr_28 [i_17]) ? var_0 : (var_12 / 1)))) ? -var_0 : -var_14));
                            arr_72 [i_8] [i_8] [i_19] |= ((1 ? 0 : 31492));
                        }
                    }
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
    {
        arr_76 [i_20] [i_20] = ((~((min(((((arr_47 [i_20] [1] [i_20] [i_20] [1] [i_20]) <= (arr_33 [20] [i_20])))), var_10)))));
        arr_77 [i_20] [i_20] = (max((!0), (arr_30 [i_20] [i_20])));
    }
    #pragma endscop
}
