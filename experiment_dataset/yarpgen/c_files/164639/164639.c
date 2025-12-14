/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 &= 9;

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_20 = (min((arr_0 [i_0]), -12));
            var_21 ^= (((var_3 & 6420269963747722735) ? (((-(arr_3 [i_0] [6])))) : ((((-27 ? 84 : var_5)) - (arr_0 [i_0])))));
            var_22 = (min(((~(arr_0 [i_0]))), ((((arr_1 [7]) <= (arr_1 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_10 [i_0] [i_2] [i_3] &= var_13;
                arr_11 [i_0] [i_0] [i_3] [i_3] = (~1395292116);
                var_23 = (((((var_17 ? (arr_3 [i_2] [i_3]) : (arr_3 [i_2] [i_2])))) ? 10243 : -1395292113));
            }
            arr_12 [i_0] = (((((-(arr_1 [i_2])))) ? ((((((var_4 ? var_10 : 13845))) < 1124978028148965589))) : (((!(arr_4 [0] [0] [i_2]))))));
            var_24 = (((((-(arr_2 [i_0] [i_0] [i_0])))) ? var_16 : (((arr_9 [i_2] [i_2] [i_0]) / 1395292116))));
        }
        var_25 = var_12;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_17 [i_0] [i_4] [i_5] = (!3998903595);
                    arr_18 [i_0] [i_0] = ((((var_5 ? (arr_6 [i_0] [i_5]) : var_5))) ? ((192 ? 524287 : var_11)) : (!1));
                    var_26 ^= ((min((min(47396, (arr_5 [i_4] [i_4]))), (32571 != 1))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_27 = 1783585217212113321;
        var_28 = (((255 ? 89 : (arr_6 [i_6] [i_6]))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_33 [i_6] [i_6] [i_7] [i_7] [i_9] [i_9] = ((((arr_20 [i_8]) ? ((((arr_30 [i_6] [8] [i_7] [i_8] [i_8] [i_9]) / (arr_20 [i_6])))) : -1124978028148965581)));
                        var_29 = (arr_29 [i_6] [i_6] [i_7] [i_6]);
                    }
                }
            }
        }
        var_30 = (max(var_30, 1395292115));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] = (((((~(~var_10)))) ? (arr_3 [i_10] [i_10]) : var_6));
        arr_38 [i_10] [i_10] = (((min((arr_3 [i_10] [i_10]), (arr_3 [i_10] [i_10]))) - (arr_32 [i_10] [i_10] [22] [i_10] [i_10])));
    }
    var_31 = ((810500898 / ((max(var_3, var_10)))));
    var_32 = ((var_0 ? var_0 : var_7));
    #pragma endscop
}
