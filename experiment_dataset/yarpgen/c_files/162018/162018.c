/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_11));
    var_21 = (((var_2 || var_3) ? var_0 : var_3));
    var_22 = -var_8;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_23 = (min(var_23, ((((((5847041501522068337 <= (var_17 - -1)))) - (!16743))))));
        var_24 = (arr_1 [i_0 + 2]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_25 = ((((var_6 ? (arr_8 [i_1] [i_2]) : (arr_8 [i_1] [i_1]))) / var_12));
            arr_9 [i_1] = (min(((((min(3275809025, 1))) % (arr_6 [i_2 - 2]))), (((((min(var_15, var_10))) <= (((arr_2 [i_2 + 1]) ? 255312934473209125 : -6147962405004476983)))))));
            arr_10 [i_2 - 2] [i_1] = (max(1236669138933454288, -1236669138933454285));
        }
        arr_11 [i_1] = ((((arr_6 [i_1]) ? (arr_4 [i_1]) : (((arr_6 [i_1]) - var_17)))));
        var_26 = (var_9 & var_17);
        var_27 = arr_6 [i_1];
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            arr_19 [i_3] [13] = (arr_7 [i_3]);
            var_28 = ((((((arr_7 [i_3]) + (arr_13 [i_3])))) ^ var_11));
            arr_20 [i_3] = (arr_6 [i_3]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_29 -= var_18;
            var_30 ^= (((min((arr_22 [i_3]), (arr_22 [i_3]))) >= ((((arr_18 [i_3] [i_5]) / var_18)))));
            arr_24 [i_3] [i_5] = max(var_1, (arr_23 [i_3] [i_3] [i_3]));
        }
        arr_25 [i_3] [i_3] = ((((var_5 ? var_2 : (arr_0 [i_3]))) - ((0 ? 3275809025 : -8693124576466581148))));
    }
    #pragma endscop
}
