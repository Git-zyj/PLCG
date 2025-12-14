/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_2;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_13 = max(-var_0, -1157826778);
        arr_4 [i_0] = -1157826778;
        arr_5 [i_0] = ((-(min((arr_1 [i_0] [i_0 - 2]), (min((arr_0 [8] [1]), (arr_1 [i_0 + 2] [i_0 + 1])))))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = (max((((-1157826778 > ((2036293867 ? 2036293867 : -1334297903))))), var_5));
        var_14 = (((arr_2 [i_1]) + ((var_3 ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_7 [i_1 - 1] [i_1 - 1])))));
        var_15 = ((((arr_9 [i_1]) ? (((var_10 < (arr_1 [i_1] [i_1])))) : var_5)) + ((((min(100, (arr_1 [i_1] [i_1])))) ? (arr_7 [i_1] [i_1]) : 90)));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_16 = ((-39485 ? (((arr_2 [i_2]) << (2258673428 - 2258673425))) : (243600505 == var_2)));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_17 [i_2] [i_3] = ((!(arr_3 [i_2 + 2])));
            arr_18 [i_3] [i_2] [i_2] = (arr_16 [i_2] [i_2]);
        }
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            arr_22 [i_2] [i_4] [i_4 - 1] = 668647174;

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_17 = ((((((arr_12 [i_2]) < var_10))) != ((100 ? (arr_2 [i_2]) : var_9))));
                arr_25 [i_2] [i_4] [6] [i_2] = ((!(((3049017302 ? (arr_24 [i_5] [i_4] [i_4] [i_5]) : -602921245)))));
                arr_26 [i_2] = (arr_20 [i_2 + 2]);
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_18 = (arr_14 [i_2]);
                    var_19 = (((1425078045 >> (1975284230 - 1975284211))));
                    arr_31 [i_2 - 2] [i_2] [i_2] [i_2] = var_5;
                    arr_32 [i_2] [i_4 - 3] [i_2] [i_4 - 3] = (var_5 == 1432278820);
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_35 [i_2] [i_2] [i_2] = var_4;
                    var_20 = (((arr_1 [i_6] [i_8]) ? var_8 : (arr_15 [i_2] [i_2])));
                    var_21 = (+((((arr_24 [i_2] [i_4] [i_6] [i_8]) <= var_8))));
                    var_22 = (max(var_22, ((((arr_21 [i_4] [i_8]) << (((arr_13 [i_2] [i_2 + 2] [9]) - 27128598)))))));
                }
                arr_36 [i_2] [i_4 - 3] [i_2] = 1048898205;
                var_23 = (((~(arr_13 [11] [i_4] [i_6]))));
            }
        }
    }
    for (int i_9 = 3; i_9 < 14;i_9 += 1) /* same iter space */
    {
        arr_39 [12] &= (((arr_38 [i_9]) ? var_1 : (min((((!(arr_27 [i_9])))), ((90 % (arr_21 [i_9 + 2] [i_9 + 1])))))));
        var_24 -= (((arr_21 [i_9] [i_9]) ? (arr_16 [10] [i_9]) : ((-((-(arr_23 [i_9] [i_9] [i_9 + 1] [i_9])))))));
        arr_40 [i_9] = arr_14 [i_9];
    }
    var_25 = var_3;
    var_26 = ((((((max(var_10, 668647174)) <= (240 == var_3)))) ^ var_6));
    #pragma endscop
}
