/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 &= ((((((arr_0 [i_0] [2]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : ((((arr_1 [2] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 = (((arr_1 [i_1] [i_0]) ? (arr_0 [i_1] [i_0]) : (((3 ? -30723 : -3)))));
            arr_4 [i_0] [i_0] [i_1] = (arr_0 [24] [i_0]);
            arr_5 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_3 [i_1]) : (((arr_1 [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : (arr_2 [i_0] [i_1] [3])))));
            var_22 -= (arr_0 [11] [i_0]);
            arr_6 [i_0] [i_1] = (((arr_3 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_23 = (arr_7 [i_2] [24] [i_0]);
            var_24 = (((arr_8 [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])));
            var_25 *= ((((((arr_3 [3]) ? (arr_0 [i_0] [21]) : (arr_3 [i_0])))) ? (arr_3 [0]) : (arr_3 [5])));
            var_26 = (arr_8 [i_2]);
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_3] = (((arr_10 [i_0] [i_3] [i_0]) ? (arr_1 [i_0] [i_0]) : (((arr_10 [i_0] [20] [10]) ? (arr_8 [i_0]) : (arr_3 [i_0])))));
            arr_13 [i_0] = ((arr_11 [24] [21] [20]) ? (arr_0 [11] [i_0]) : (arr_11 [i_0] [24] [14]));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_27 = ((((((arr_9 [i_0] [i_4] [23]) ? (arr_1 [i_5] [i_0]) : (arr_17 [6])))) ? (((arr_7 [i_0] [i_4] [i_5]) ? (arr_17 [i_4]) : (arr_0 [i_0] [i_5]))) : (((arr_0 [i_5] [i_4]) ? (arr_0 [i_5] [i_0]) : (arr_18 [i_5] [i_5])))));
                var_28 = arr_19 [i_0] [i_0];
                var_29 = (((arr_17 [i_5]) ? (((arr_17 [i_0]) ? (arr_14 [i_0] [i_0]) : (arr_1 [i_0] [i_4]))) : (arr_7 [i_0] [i_0] [24])));
            }
            arr_20 [i_4] = (arr_9 [6] [6] [6]);
        }
        var_30 ^= (arr_2 [6] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_24 [i_6] = (arr_18 [10] [10]);
        arr_25 [i_6] = (((arr_16 [i_6] [17] [9]) ? (arr_17 [i_6]) : (arr_15 [i_6] [i_6])));
    }
    var_31 = var_8;
    #pragma endscop
}
