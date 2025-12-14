/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((~(var_13 & var_3)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_16 = (min(((max(((~(arr_1 [i_0]))), ((min((arr_5 [i_1]), (arr_3 [i_0] [i_1]))))))), (min((arr_3 [11] [i_1]), (arr_4 [i_0] [i_1] [i_1])))));
            var_17 |= ((-((-(arr_2 [i_0])))));
            var_18 = (min(var_18, (~0)));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_19 = (min(var_19, -0));
            var_20 *= (((((((arr_2 [i_0]) ? (arr_0 [i_2]) : (arr_3 [i_2] [i_2]))) == (((!(arr_0 [i_0])))))) ? ((((!((((arr_2 [i_0]) / (arr_3 [i_0] [i_2])))))))) : (min((((~(arr_5 [i_0])))), (arr_2 [i_0])))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_21 = -8583488510582627221;
            var_22 = ((((((((-(arr_2 [15])))) ? (arr_8 [11] [i_0] [i_0]) : ((~(arr_1 [i_3])))))) ? (min(((min((arr_3 [i_3] [i_0]), (arr_4 [8] [i_3] [i_3])))), ((~(arr_4 [i_0] [i_0] [i_0]))))) : ((-(((!(arr_9 [i_0] [i_0]))))))));
            var_23 -= (~(min((min((arr_6 [i_0] [i_0] [i_3]), (arr_6 [i_0] [i_3] [i_3]))), (arr_0 [i_3]))));
        }
        var_24 = (((((-(min((arr_7 [i_0]), (arr_10 [i_0])))))) ? (((((((min((arr_5 [i_0]), (arr_3 [i_0] [i_0]))))) == ((-(arr_9 [i_0] [12]))))))) : (min((((-(arr_0 [i_0])))), (arr_2 [i_0])))));
        var_25 = ((+(((((arr_3 [i_0] [i_0]) && (arr_10 [i_0])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_26 = (min(((min((arr_6 [13] [i_5] [i_5]), (arr_11 [i_0] [i_0])))), (min((min((arr_7 [i_4]), (arr_8 [i_5] [0] [5]))), ((((arr_15 [i_4]) + (arr_0 [i_0]))))))));
                    var_27 = (((((max((arr_3 [i_0] [i_4]), (arr_0 [i_0])))) ? (min((arr_6 [i_4] [i_4] [i_4]), (arr_4 [18] [i_4] [i_0]))) : (min((arr_13 [i_0] [i_4] [i_5]), (arr_14 [i_0] [i_4] [1]))))));
                    var_28 = ((max((arr_7 [i_0]), (arr_7 [i_0]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_29 *= (((arr_13 [i_6] [i_6] [i_6]) ? (arr_5 [i_6]) : (arr_5 [i_6])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_30 = (arr_23 [i_6] [i_7] [i_9]);
                        var_31 = ((arr_22 [i_6] [i_6]) ? (arr_1 [i_6]) : (arr_1 [i_6]));
                        var_32 = (arr_7 [i_6]);
                    }
                }
            }
        }
        var_33 = (((arr_24 [i_6] [i_6] [i_6] [i_6]) ? (arr_5 [i_6]) : (arr_12 [i_6])));
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_34 = (arr_31 [i_10]);
        var_35 = -1;
        var_36 = ((-(min(((~(arr_10 [i_10]))), (((arr_10 [i_10]) ? (arr_5 [i_10]) : (arr_4 [i_10] [i_10] [i_10])))))));
        var_37 = (min(((((max((arr_12 [i_10]), (arr_10 [i_10])))) ? (((arr_6 [i_10] [15] [i_10]) ? (arr_9 [i_10] [i_10]) : (arr_31 [i_10]))) : 255)), (min((arr_30 [i_10] [i_10]), ((min((arr_4 [i_10] [i_10] [i_10]), (arr_8 [i_10] [i_10] [i_10]))))))));
    }
    #pragma endscop
}
