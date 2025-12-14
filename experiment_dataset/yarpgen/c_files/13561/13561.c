/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 |= ((-(((arr_0 [i_0]) >> (arr_0 [i_0])))));
        var_21 = (((((arr_1 [i_0]) > (arr_1 [i_0]))) ? ((min((arr_2 [i_0] [i_0]), 1))) : (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_6 [17] = var_11;
        var_22 = 70;
        arr_7 [i_1] = (((((arr_5 [i_1 - 2] [i_1 - 1]) ? (arr_5 [i_1 - 3] [i_1 - 3]) : (arr_5 [i_1 + 1] [i_1]))) * ((max((arr_5 [i_1 + 1] [17]), (arr_5 [i_1 - 2] [i_1 - 2]))))));
        var_23 = (min(var_23, ((((((-1 ? ((var_18 ? var_18 : 38818)) : -1643727532))) ? 21224 : 44294)))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_2] [i_3] [i_2] = (((arr_8 [i_2 - 2]) ? (arr_8 [i_2 - 3]) : (arr_8 [i_2 - 2])));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_21 [i_5] [i_3] [12] [i_5] &= var_5;
                        var_24 = (arr_16 [14] [i_2] [1] [i_5]);
                        arr_22 [i_4] [i_4] [i_4] &= (((arr_13 [i_4 - 1] [i_2]) ^ (arr_13 [i_4 + 3] [i_2 + 3])));
                    }
                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 = (min(var_25, (var_19 > -1698232530)));
                            arr_29 [i_2] [i_6 - 3] [i_3] [i_3] [i_3] [i_2 + 1] [i_2] = ((-9 ? 18014398509481976 : 186418347));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_34 [i_3] [i_6 - 2] [i_4] [11] [i_3] = (~112);
                            arr_35 [i_2 + 1] [i_2] [i_3] [i_3] [12] [i_8] [i_2 + 1] = (-97 ? (((89 ? var_17 : (arr_30 [i_2] [i_3] [i_4] [i_4] [0] [i_4] [i_8])))) : ((var_17 ? (arr_15 [i_4]) : var_11)));
                            var_26 = ((((((arr_0 [i_3]) ? 2221640034 : 124))) ? (arr_24 [i_2] [i_2] [i_2]) : var_12));
                            arr_36 [i_2] [i_3] [i_3] [i_6 - 4] [i_8] = (arr_32 [i_3]);
                            var_27 = var_3;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_40 [i_2] [i_3] [i_2] [i_6] [i_9] [i_2] [i_3] = 42;
                            arr_41 [i_6] &= (((arr_25 [i_4 + 3] [i_2 - 1] [i_2] [i_2] [i_2]) ? var_7 : 65504));
                            arr_42 [i_4] &= ((((!(arr_38 [1] [i_4 + 2] [1] [i_4] [i_4]))) ? (((!(arr_12 [i_2] [i_3])))) : var_16));
                        }
                        arr_43 [i_2] [5] [i_3] [i_6] = 776259801;
                    }
                    arr_44 [i_3] [i_3] [i_4] = var_2;
                    var_28 *= ((21243 ? 21243 : 929467480));
                }
            }
        }
        arr_45 [i_2] = ((+((232 ? (arr_1 [i_2]) : 12629717025822338332))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_50 [12] = 3747895541;
        arr_51 [i_10] = (max((max(var_3, 1)), 55587));
    }
    var_29 = (min(-var_16, ((((((-2147483647 - 1) ? var_1 : var_18))) ? 549755813887 : var_10))));
    var_30 = (((((((min(var_19, 1))) ? (min(-1034813177, 5971636243230926636)) : -var_2))) ? (var_5 < var_3) : (((min(28, 17))))));
    #pragma endscop
}
