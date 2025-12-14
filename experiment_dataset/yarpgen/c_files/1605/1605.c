/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 += ((((2038986966 ? 2038986972 : (arr_0 [i_0]))) + (min(34976, -2038986991))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((arr_8 [9] [i_2 - 3] [i_3 - 1] [i_3]) ? (arr_7 [i_1] [i_2 - 2] [i_3 + 2] [6]) : (arr_7 [1] [i_2 - 2] [i_3 - 1] [2]))))));
                        arr_10 [i_0] [i_0] [i_2 + 1] [i_3] = ((-((var_8 & (((arr_7 [i_0] [i_1] [i_2] [i_3]) ? var_16 : 2148719308))))));
                        arr_11 [i_0] [i_3] = var_1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_21 = ((56 ? (((var_12 ? var_0 : (arr_12 [i_4] [i_4])))) : -6958101861042906640));
        var_22 = (var_5 ? (~4096) : 1);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_23 = 31038;
        var_24 = (max(var_24, 2146248006));
        arr_18 [12] = ((!(((+((-2134051508 ? (arr_15 [i_5]) : (arr_12 [19] [19]))))))));
        arr_19 [10] = ((!(16 && -104)));
        var_25 = (max(var_25, (arr_12 [i_5] [0])));
    }
    var_26 = (((((var_11 ? var_15 : var_17)))) ? (min(var_0, 3546903414175419344)) : (var_18 / var_13));
    var_27 = (~var_12);
    var_28 = var_7;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_29 = (max(var_29, (((!(arr_30 [i_6] [i_6] [2] [11] [i_8 - 1]))))));
                        var_30 = (max(var_30, -8579));
                    }
                }
            }
        }
        arr_31 [7] = var_2;
        arr_32 [i_6] [11] = ((((1 ? var_13 : var_5))) ? (arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [16]) : (arr_17 [i_6]));
        arr_33 [i_6] = -6002122013168254609;
        arr_34 [1] = var_3;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_31 = (max(var_31, 57363));
        arr_37 [5] [11] = (((5 % var_8) ? (~47029) : (arr_24 [i_10] [i_10])));
    }
    for (int i_11 = 3; i_11 < 10;i_11 += 1)
    {
        var_32 = (max(var_32, ((max((((arr_35 [i_11 - 2]) ? (min(12070708951883364565, (arr_38 [2] [i_11]))) : 2147483647)), var_10)))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 10;i_13 += 1)
            {
                {
                    arr_46 [i_13] [2] [6] = (var_12 || 6283746);
                    var_33 = (max(var_33, (((((max(var_0, (arr_29 [12] [i_11 - 2] [12] [i_13 - 1] [i_13] [i_13 - 1])))) ? (max((arr_9 [i_13] [i_13] [6] [i_13 + 1]), (arr_9 [i_11 - 1] [i_11 - 1] [i_11] [i_13 - 1]))) : ((((!(arr_29 [0] [14] [i_13] [i_13 + 1] [i_13] [i_13]))))))))));
                    var_34 = (~(max((((-30868 ? -56 : 2038986966))), ((5 ? (arr_20 [i_11]) : (arr_25 [i_11] [i_11] [6]))))));
                    arr_47 [8] [i_13] = 31;
                }
            }
        }
    }
    #pragma endscop
}
