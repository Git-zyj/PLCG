/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(1282291167, var_0);

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = (max(((((arr_0 [i_0 + 1]) != (arr_0 [i_0 - 1])))), var_4));
        var_18 ^= min((min(var_1, var_0)), (((-(((!(arr_1 [0]))))))));
        var_19 = (min(var_4, ((((arr_0 [i_0 - 1]) ? var_8 : (((-831189839680658112 + 9223372036854775807) >> 1)))))));
        arr_2 [i_0 + 1] [i_0] = (i_0 % 2 == zero) ? (((~var_11) ? (((((min(var_6, (arr_1 [i_0])))) >> ((((4033466662 >> (arr_1 [i_0]))) - 4033466633))))) : 0)) : (((~var_11) ? (((((min(var_6, (arr_1 [i_0])))) >> ((((((4033466662 >> (arr_1 [i_0]))) - 4033466633)) - 2278233964))))) : 0));
        arr_3 [i_0] = 5681883801336579207;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_20 = (((arr_10 [i_1] [i_2] [i_1] [i_4]) ? (arr_14 [i_4] [i_2] [i_2] [6] [i_5] [i_5] [i_2]) : (((-831189839680658112 + 9223372036854775807) >> (((arr_12 [4] [i_1] [i_4] [i_3]) - 3641253582))))));
                            var_21 = ((!((min((max(var_12, var_14)), (((2573659004 >> (21544 - 21538)))))))));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_22 = var_8;
                            arr_17 [18] [i_2] [i_3] [20] [i_4] &= (!1282291167);
                            var_23 = (max((max((((arr_8 [i_3]) ? var_0 : (arr_15 [i_3]))), (arr_13 [i_1] [i_1] [i_4] [22]))), (((((max(-1282291168, -1861919220))) != 14311432164681603384)))));
                        }
                        var_24 = (max(var_24, var_1));
                        var_25 = (arr_11 [i_2] [i_2]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 23;i_8 += 1)
            {
                {
                    var_26 ^= (((((arr_0 [i_7 + 2]) != (arr_12 [i_1 + 1] [i_7 + 1] [i_8] [20]))) ? ((~(arr_12 [i_1 - 1] [i_7 + 1] [i_8] [14]))) : (arr_12 [i_1 + 1] [i_7 - 1] [i_8] [4])));
                    var_27 &= ((!(((var_5 ? (!var_1) : (arr_18 [i_1] [22]))))));
                }
            }
        }
        var_28 = ((1014181596 ? var_0 : (arr_6 [i_1] [18])));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_29 = ((((((var_9 ? (arr_14 [4] [4] [4] [i_9] [i_10] [i_10] [i_11]) : (arr_10 [4] [7] [18] [1]))))) != -1282291168));
                        var_30 = (max((((!(arr_9 [2] [i_10] [i_10] [i_10])))), 0));
                        arr_30 [i_1] [i_9] [i_10] [9] = ((((max(var_13, (arr_1 [i_9])))) ? 1023 : ((var_15 ? (arr_11 [i_1 - 1] [i_1 + 1]) : var_3))));
                        var_31 = (~-1086152660868095019);
                        var_32 = (min((((arr_4 [i_10] [0]) >> (arr_1 [i_9]))), (~var_1)));
                    }
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_33 = 21662;
            var_34 = (((1 ? (arr_14 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 1]) : var_13)));
        }
        arr_37 [i_12] [i_12] = ((((((!var_0) ? (((((arr_18 [i_12 + 1] [14]) != 3280785700)))) : 9189))) ? (arr_20 [i_12 + 1] [i_12]) : (!0)));
        var_35 = (min(var_35, 1282291167));

        for (int i_14 = 2; i_14 < 23;i_14 += 1)
        {
            arr_40 [i_12] [i_12] = (((~(arr_27 [i_14] [i_12 - 1] [i_12] [i_12] [i_14 - 1]))));
            var_36 = (max(1, (max((arr_38 [i_12]), (((7712 ? var_6 : (arr_39 [23] [i_12] [17]))))))));
        }
    }
    #pragma endscop
}
