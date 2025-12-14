/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 *= (arr_2 [i_0]);
        var_13 = (max(var_13, (arr_1 [17] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_14 = (max(var_14, var_4));
            var_15 = (min(var_15, (arr_4 [i_2 - 1])));
            var_16 = (min((-93 >= 24), (max((arr_1 [i_1] [i_2 + 3]), (((arr_7 [i_1] [i_1]) ? (arr_9 [i_1] [i_1] [i_1]) : 16949))))));

            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    arr_15 [i_1] [i_1] [i_1] &= (arr_5 [i_3]);
                    arr_16 [i_1] [i_1] [i_3] [i_4 - 1] |= ((-((-(arr_11 [i_2 + 2] [i_3 - 2] [i_4 - 1] [i_4 + 1])))));
                    var_17 = (max(var_17, ((((min(255, (arr_0 [i_1]))) != (((((max((arr_1 [i_2] [i_4 - 1]), (arr_14 [i_1] [i_2] [i_3] [i_4 + 1])))) ? (95 < var_3) : (arr_3 [i_1])))))))));
                }
                arr_17 [i_2 + 2] [i_1] = (arr_5 [i_1]);
                arr_18 [i_3] [i_2] = ((25458 ? (405754674905115668 + 244) : (min(1, (arr_2 [i_2 + 4])))));
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_21 [i_5] [i_5] [i_5] = ((-((min((arr_6 [i_1] [i_1]), 83)))));

            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_18 = (min(-255, (((!(arr_25 [i_6] [i_6] [i_6 + 1] [i_5]))))));
                    var_19 *= ((-((min((arr_13 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 2]), (arr_13 [i_6 - 2] [i_6 + 2] [i_6] [i_6 + 1] [i_6 + 1]))))));
                    var_20 *= (((arr_20 [i_7]) ? (((((var_7 ? 134201344 : -61))) & (min(var_11, var_2)))) : (arr_4 [i_1])));
                    arr_26 [i_1] [i_5] = 4294967274;
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_21 = (max(var_21, var_0));
                            var_22 = (493789149 ^ 246);
                            var_23 = 23748;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_24 |= ((var_4 ? ((var_8 >> (((arr_11 [i_1] [i_1] [i_1] [i_1]) + 111)))) : (((-(arr_25 [i_1] [i_1] [i_1] [i_10]))))));
            arr_36 [i_1] [i_10] = ((!(((19 ? var_6 : (arr_34 [i_1] [i_1] [i_10]))))));
            var_25 = ((111 < (min(4294967295, (arr_24 [i_1] [i_1] [i_1] [i_1])))));
        }
        var_26 = (min(var_8, (arr_22 [i_1] [i_1] [i_1] [i_1])));
        var_27 = (((arr_28 [i_1]) ? 93 : (((arr_28 [i_1]) ? (arr_9 [i_1] [i_1] [i_1]) : var_6))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 19;i_11 += 1)
    {
        var_28 = ((((((arr_1 [i_11] [i_11]) ? (arr_1 [i_11] [i_11 + 1]) : (arr_38 [i_11] [i_11 - 1])))) ? 4294967289 : ((var_10 ? 3591605087 : var_1))));
        arr_40 [i_11] = ((var_9 ? (arr_1 [i_11 + 2] [i_11 - 1]) : (arr_38 [i_11 - 1] [i_11 + 1])));
    }
    var_29 = (!var_2);
    var_30 = (!var_8);
    var_31 = min(var_5, var_9);
    #pragma endscop
}
