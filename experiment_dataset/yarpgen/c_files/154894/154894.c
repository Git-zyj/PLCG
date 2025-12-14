/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max(((var_10 - (arr_0 [i_0]))), (((var_0 == (arr_2 [i_0] [i_0]))))))) ? (((((var_2 < var_1) >= (min(var_2, var_2)))))) : (min(((var_3 | (arr_0 [i_0]))), var_7))));
        var_12 = (min(var_12, ((min((9 && 17320392904876409972), (~255))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (min((((((var_10 << (((arr_8 [i_0] [i_1 + 2] [i_0]) - 16995))))) ? ((var_10 << (var_2 - 3269146779))) : -9)), (((var_1 <= (min((arr_5 [i_1] [i_0]), var_11)))))));
                    var_13 = (min(var_13, (9 & 2502358310)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1 + 2] [10] [7] [i_0] |= ((((max((max(var_5, (arr_4 [i_2] [i_3] [0]))), (((255 ? 246 : 6)))))) || var_4));
                                var_14 = (min(((!(arr_15 [i_1 - 2]))), ((!(((var_6 << (var_1 - 90))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_4] = (((arr_16 [i_2]) % (min((arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 1]), (var_7 + var_8)))));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_0] &= (((((var_2 > var_5) + (arr_2 [i_0] [i_0])))) || (((var_11 ^ (min(var_2, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (int i_5 = 4; i_5 < 6;i_5 += 1)
    {
        var_15 |= (((((((arr_24 [i_5]) ? (arr_1 [i_5 + 3] [i_5]) : (arr_23 [i_5]))) - ((((var_9 <= (arr_10 [i_5] [i_5]))))))) + -var_5));
        var_16 *= (((((arr_22 [i_5 - 1]) ? var_9 : (arr_22 [i_5 - 2]))) | ((max((arr_15 [i_5 - 4]), (arr_24 [i_5 - 3]))))));
        var_17 = (((((arr_10 [i_5] [i_5]) ? (((10 ? 1001962831 : -7216757346444723248))) : 3530671818821018463)) >= ((min(1813678432, 11)))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_32 [i_6] [13] [i_8] [i_8] = (min(((max((min(var_7, (arr_16 [i_8]))), (arr_25 [i_6])))), (min((((arr_0 [i_6]) << var_6)), var_7))));
                    var_18 = (((((var_11 ? (((var_6 == (arr_5 [i_6] [i_6])))) : (var_0 ^ var_6)))) && (((-(((arr_15 [i_6]) ? (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : var_7)))))));
                }
            }
        }
        var_19 = (min(var_19, (arr_10 [i_6] [0])));
    }

    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        var_20 = (((((!((min(var_0, var_6)))))) << (min((max((arr_33 [i_9 - 1]), (arr_33 [i_9 + 1]))), ((((arr_34 [i_9 + 1] [i_9 + 1]) >= (arr_34 [i_9] [i_9 + 1]))))))));
        var_21 = ((!(((64338 ? 3530671818821018461 : 17800)))));
    }
    for (int i_10 = 3; i_10 < 12;i_10 += 1)
    {
        var_22 = (((((((((arr_4 [i_10] [i_10 - 3] [i_10]) / var_9))) ? ((((arr_6 [i_10] [i_10 - 3] [i_10 + 1]) != (arr_8 [12] [1] [i_10])))) : ((min(var_10, (arr_15 [i_10]))))))) <= (max(((((arr_5 [i_10] [i_10]) ? (arr_25 [0]) : (arr_0 [i_10 - 1])))), ((var_1 ? (arr_16 [i_10]) : (arr_27 [0])))))));
        var_23 = (min(var_23, ((((max((((arr_2 [i_10] [12]) ? (arr_27 [i_10 - 1]) : (arr_1 [i_10 - 2] [i_10 - 2]))), ((((arr_35 [i_10 - 1] [i_10 - 1]) ? (arr_0 [i_10 - 3]) : (arr_17 [i_10] [i_10])))))) ^ (((arr_33 [i_10 + 1]) * (((arr_27 [i_10]) / var_0)))))))));
        var_24 -= (((((((arr_33 [i_10]) + var_7)) - (var_11 - var_5))) - ((min(var_11, (arr_29 [i_10 - 1]))))));
        arr_37 [i_10] = ((((((var_0 + (arr_36 [i_10]))) - ((min(var_6, (arr_15 [6])))))) * (((((((arr_7 [i_10 - 2] [i_10] [i_10]) ? var_2 : (arr_10 [i_10] [i_10])))) && (((var_5 / (arr_7 [i_10 - 2] [i_10 - 2] [i_10])))))))));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_25 &= (arr_38 [i_11] [i_11]);
        arr_41 [i_11] = (max(((((arr_38 [i_11] [i_11]) - var_8))), (16133198498542573862 ^ 1177)));
    }
    var_26 &= ((((min((var_1 >= var_11), (min(var_6, var_7))))) ? (((12 * 3289045085) ? (var_9 != var_7) : ((246 ? 18014398509219840 : -1)))) : (((((((var_11 ? var_2 : var_3))) || ((min(var_4, var_10)))))))));
    var_27 = ((~(max(((var_10 ? var_2 : var_9)), (var_1 < var_7)))));
    #pragma endscop
}
