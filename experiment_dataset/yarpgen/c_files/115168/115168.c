/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_10 &= ((var_4 ? ((((arr_0 [i_0 - 1]) && var_5))) : (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]));
        var_11 = (!0);
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] = 1;
                            var_12 = (((((~(min(0, 3881486886))))) ? (((~var_5) ? var_1 : (!var_4))) : (arr_4 [i_1] [i_4 + 3])));
                            var_13 = (((max(((max(var_5, var_4))), ((var_5 ? (arr_12 [i_1] [i_1] [i_4]) : var_8)))) < var_0));
                            var_14 = (((-((var_4 ? 1 : (arr_10 [i_1] [16] [i_4 - 1]))))));
                            arr_18 [i_5] [4] [19] [19] = (arr_8 [i_2] [i_4]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            arr_27 [i_1] [i_1] [15] [16] [9] = ((((max(85, (max(var_2, (arr_11 [i_6] [16])))))) ? (arr_10 [i_7] [i_7] [i_1 + 1]) : (((arr_19 [i_1] [i_1]) ? (arr_13 [1] [i_1] [i_1] [i_1 - 1] [i_1] [i_8 + 1]) : (arr_20 [i_1])))));
                            var_15 = ((((max((max((arr_19 [i_8] [i_6]), (arr_5 [i_1 + 1]))), (arr_10 [i_1 + 1] [i_8 - 1] [i_6])))) ? ((((!(((var_6 ? (arr_26 [6] [i_2] [i_2] [i_2] [i_2]) : 1))))))) : (arr_12 [i_1] [i_1] [i_1])));
                        }
                        arr_28 [i_1] [i_1] [i_1] [13] [i_1] [i_1] = 15;
                    }
                }
            }
            arr_29 [1] [i_2] [1] = ((~(((arr_20 [i_1 + 1]) ? (arr_26 [4] [i_2] [i_2] [4] [i_1 + 1]) : (arr_26 [i_1] [i_1] [i_1] [i_2] [i_2])))));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_16 = (min(var_8, (((3842212809 && (arr_14 [i_1 + 1] [i_1 - 1]))))));
            var_17 = (arr_21 [5] [i_9] [i_9] [i_9]);
        }
        var_18 = ((~(arr_30 [i_1])));
        var_19 ^= (((arr_25 [i_1] [21] [i_1 - 2]) < (((arr_19 [i_1 + 1] [i_1]) ? (arr_19 [i_1 + 1] [i_1]) : (arr_19 [i_1 + 1] [i_1])))));
        arr_32 [i_1] = (((((-(arr_22 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 2])))) ? (((1 ? 1 : 237))) : (min(var_0, (arr_23 [i_1 - 1] [i_1 + 1] [17] [i_1])))));

        for (int i_10 = 2; i_10 < 24;i_10 += 1)
        {
            var_20 &= var_3;
            var_21 &= ((((min(var_1, (max(var_2, (arr_31 [i_10])))))) ? ((((min(var_6, 0))) ? (var_3 >= var_8) : ((var_9 ? (arr_33 [i_1]) : var_0)))) : (arr_15 [i_1] [i_1] [i_1] [i_1] [2] [i_10] [i_1])));
            var_22 += (!var_3);

            for (int i_11 = 2; i_11 < 24;i_11 += 1)
            {
                var_23 = (arr_35 [i_1] [i_10] [i_11 + 1]);
                arr_38 [i_1] [i_10] [i_11] [i_1] = arr_6 [i_10];
                arr_39 [i_1] [i_1] [i_1] [i_1] = var_1;
                var_24 = ((((!(arr_9 [i_10 + 1] [i_11 - 2]))) ? ((~(arr_30 [i_11 + 1]))) : (((((var_4 && (arr_31 [i_11 - 2]))) ? var_0 : (arr_21 [i_11] [i_11] [i_11 + 1] [i_1 - 2]))))));
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
            {
                arr_43 [i_1] [i_10] [i_1] = (max((arr_36 [i_12] [i_12] [7] [i_12]), ((-(arr_36 [3] [i_12] [i_1] [i_1])))));
                var_25 = (((arr_23 [9] [i_10] [i_10] [i_10]) ? 3232154241 : ((var_6 - (arr_31 [i_1])))));
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
            {
                var_26 &= 124;
                arr_47 [17] = (min((((!(arr_25 [i_10 - 1] [i_1 - 1] [i_1 + 1])))), (max((arr_25 [i_10 - 1] [i_10] [i_1 - 2]), (arr_25 [i_10 - 2] [i_1] [i_1 + 1])))));
                arr_48 [i_1] [i_1] [i_10] [i_13] = (((((arr_35 [i_10 + 1] [i_1 - 1] [i_1 - 2]) && 1)) ? (!0) : (min(var_6, ((((arr_19 [i_1] [i_10]) > var_2)))))));
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
            {
                var_27 = min(1, -13);
                var_28 = (arr_7 [i_1 - 2] [i_10 - 2] [i_1 - 2]);
                var_29 *= ((!(arr_42 [i_1 - 1])));
            }
        }
    }
    var_30 = var_2;
    var_31 = (max(var_31, (((max((((var_1 ? var_9 : -1275553213)), var_8)))))));
    #pragma endscop
}
