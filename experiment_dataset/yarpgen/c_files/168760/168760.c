/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((~(arr_1 [i_0])));
        arr_5 [1] = (arr_1 [i_0]);
        arr_6 [i_0] = (((arr_0 [i_0] [i_0]) ? (((!(arr_0 [i_0] [i_0])))) : (arr_2 [i_0] [11])));
        arr_7 [i_0] [i_0] = ((~(((!(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((~((~(arr_2 [i_1] [i_1])))));
        arr_11 [i_1] = ((-((-(arr_2 [i_1] [i_1])))));
        arr_12 [i_1] = (((min((((!(arr_1 [2]))), (arr_0 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_17 |= ((-(arr_9 [9] [i_3])));
                            arr_23 [i_1] [i_1] |= ((~(arr_18 [i_2] [i_4] [i_3] [i_2])));
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_18 = ((!(arr_27 [i_1] [i_2] [i_1] [i_6 - 1] [i_6 - 1])));
                            var_19 = (arr_1 [i_1]);
                        }
                        var_20 &= (arr_18 [i_1] [i_2] [i_3] [i_4]);
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_21 = (min(var_21, (arr_14 [i_7 - 1] [i_7 - 1] [i_7])));
                        arr_30 [4] [i_2] [i_2] = arr_0 [i_7 - 1] [i_7 - 1];
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_34 [i_8] [i_8] [i_3] [i_1] [i_1] [i_1] = (!(arr_19 [i_1] [i_2] [i_2] [i_3] [i_2]));

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_22 += ((~((-((~(arr_38 [i_9])))))));
                            var_23 = (((arr_20 [i_1] [i_1] [i_1] [i_1] [i_3] [i_8] [i_9]) ? (min((arr_15 [i_3] [i_3] [i_3]), (arr_15 [i_3] [i_3] [i_9]))) : ((-(arr_26 [i_3])))));
                            arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_28 [i_1] [i_1]);
                            var_24 *= arr_14 [i_9] [i_8] [i_3];
                            var_25 = ((((!(arr_0 [i_1] [i_1])))));
                        }
                        var_26 = ((!((((-(arr_24 [i_1] [i_2] [i_3] [i_8] [i_2])))))));
                    }
                    var_27 = (max(var_27, ((min((min(((min((arr_0 [i_2] [i_3]), (arr_33 [i_1] [i_2] [i_3] [i_2])))), ((-(arr_32 [i_3] [i_1]))))), (max((((arr_27 [i_1] [i_1] [i_1] [i_2] [i_3]) ? (arr_17 [i_1] [i_2] [i_2]) : (arr_26 [i_2]))), ((((arr_18 [i_3] [i_2] [3] [9]) ? (arr_13 [i_1] [i_2] [i_3]) : (arr_18 [i_1] [i_1] [i_1] [i_2])))))))))));
                    arr_40 [i_1] [i_1] [i_2] [i_3] = (min((((!(((~(arr_20 [i_2] [i_1] [i_1] [i_3] [i_2] [i_1] [i_1]))))))), ((min((arr_24 [i_1] [i_1] [i_1] [i_2] [i_3]), (arr_17 [i_1] [i_1] [i_1]))))));
                    var_28 = (min(var_28, (arr_28 [i_1] [i_1])));
                }
            }
        }
    }
    var_29 = (min(var_29, var_0));
    #pragma endscop
}
