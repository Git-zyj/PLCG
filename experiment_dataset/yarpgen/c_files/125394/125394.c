/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((-11519 << (var_1 + 13375))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 *= (min(((!((!(arr_2 [i_0]))))), ((!(var_2 || var_13)))));
        arr_3 [i_0] = ((((-856293157 < (arr_1 [i_0]))) ? ((((max(var_10, var_4))))) : (arr_2 [i_0])));
        var_18 = (((((~var_0) ^ (arr_2 [i_0]))) / (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = var_1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = (min(var_20, (arr_7 [17])));
                        arr_14 [i_2] [11] [i_3] = ((((max(var_13, var_14)) * (arr_9 [i_4]))));
                        arr_15 [i_1] [i_2] [i_2] [i_3 - 2] [i_4] [i_4] = ((((min(2147483647, (arr_10 [i_2] [i_3 - 1] [i_3 - 1] [i_3 + 2])))) ? (arr_10 [i_2] [i_3 + 1] [i_3 - 2] [i_3 - 2]) : (((!(arr_12 [i_3 - 2] [i_3 + 2] [i_3 + 1] [i_3 + 1]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_21 = (arr_13 [i_3 - 2]);
                        var_22 = ((var_3 ? (arr_10 [i_2] [i_3 - 2] [i_3 + 1] [i_3 + 1]) : (arr_10 [i_2] [i_3 + 1] [i_3 + 1] [i_2])));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_23 = (14236001567695843066 ? 6696463525335710356 : (arr_22 [i_3 - 1] [i_3 + 1] [i_2]));
                            arr_23 [i_3] [i_2] = (arr_9 [i_3 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_24 = (((arr_6 [i_3 - 2]) ? (arr_22 [i_3 - 2] [i_3 + 1] [i_2]) : (((var_3 || (arr_11 [i_5] [i_3]))))));
                            var_25 = (min(var_25, (arr_26 [i_3 + 2] [2] [i_3 - 2] [i_3 + 2] [i_3] [i_3] [12])));
                        }
                        var_26 = (min(var_26, (arr_20 [i_3 + 1] [i_3] [16] [i_3] [i_3 + 2])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_27 = (((((((arr_27 [i_2] [i_2] [i_8]) == (arr_22 [i_1] [i_2] [i_2])))) == ((~(arr_27 [0] [8] [i_3]))))));
                            arr_33 [i_2] [15] [i_3] = (((((var_9 ? (arr_11 [i_3 + 1] [i_9]) : ((~(arr_22 [i_3] [i_8] [i_2])))))) ? (((arr_8 [i_1] [6] [i_3 - 2]) ? (arr_8 [i_3] [i_3 - 1] [i_3 + 1]) : (arr_8 [i_9] [i_2] [i_3 - 2]))) : ((~((var_7 ? var_0 : (arr_20 [i_1] [i_1] [3] [i_2] [i_9])))))));
                            var_28 = (arr_25 [i_3 + 1] [i_3 + 1] [i_3] [i_2] [i_3 + 1]);
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_29 = (((arr_22 [i_3 + 2] [i_3 + 2] [i_2]) ? ((var_1 ? -11500 : (arr_22 [i_3 + 2] [i_3 + 1] [i_2]))) : (((arr_22 [i_3 + 2] [i_3 + 1] [i_2]) ? (arr_22 [i_3 - 1] [i_3 + 2] [i_2]) : (arr_22 [i_3 - 1] [i_3 + 1] [i_2])))));
                            var_30 = var_11;
                            var_31 *= (((((arr_18 [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3]) < (arr_18 [17] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3] [i_3 + 1]))) ? 1072693248 : (arr_24 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1])));
                            arr_38 [i_1] [i_2] [i_3] [i_8] [i_10] = ((((!(arr_37 [0] [i_3 + 1] [0] [i_3 + 1] [i_3 + 1] [i_10] [i_10]))) ? (((arr_1 [i_1]) ? ((-(arr_16 [i_10] [i_2] [i_3 - 2] [i_2] [i_2] [i_1]))) : (min((arr_22 [i_1] [i_2] [i_2]), (arr_12 [11] [i_2] [i_2] [4]))))) : (((var_9 < 11519) ? var_8 : -var_11))));
                        }
                        var_32 = -988095397435379955;
                        arr_39 [i_8] [2] [i_2] [i_2] [12] [i_1] = (((arr_25 [i_2] [i_2] [i_2] [i_2] [i_3 + 1]) + (((((var_4 ? var_12 : (arr_13 [i_8])))) ? (arr_35 [i_1] [i_1]) : (arr_19 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3] [i_3])))));
                    }
                    arr_40 [i_2] [i_2] [i_2] = (((arr_24 [i_3] [i_3 - 2] [i_3 - 2] [i_2] [i_3 - 1]) != (arr_35 [i_3 - 1] [i_1])));
                }
            }
        }
        var_33 = ((+(((arr_35 [i_1] [i_1]) ? -104 : (var_10 || var_7)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
    {
        var_34 |= (((~-99) ? 6988730051845509872 : (arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
        var_35 -= (((arr_31 [12] [i_11]) <= (arr_8 [i_11] [4] [17])));
        var_36 = (((arr_34 [i_11] [i_11] [i_11] [i_11] [i_11]) % ((114 ? (arr_30 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : 15))));
    }
    var_37 = var_6;
    #pragma endscop
}
