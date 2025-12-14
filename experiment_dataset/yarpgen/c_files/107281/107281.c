/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 &= (arr_2 [i_0] [i_0]);
                    var_17 = var_13;
                    arr_7 [i_0] [12] = (((arr_4 [i_0] [i_0] [i_2]) ? (arr_1 [i_1]) : -1));
                }
            }
        }
        var_18 = min(((((arr_2 [i_0] [i_0]) ? (arr_4 [9] [9] [i_0]) : (((var_3 && (arr_2 [i_0] [i_0]))))))), (min(0, ((var_9 ? (arr_5 [i_0] [i_0] [i_0]) : var_4)))));
        arr_8 [i_0] = ((((((arr_3 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))) * (~-781503983)));
        var_19 = (((((arr_5 [i_0] [i_0] [i_0]) ? ((((arr_1 [i_0]) != 781503983))) : ((max(255, (arr_2 [i_0] [i_0]))))))) ? ((((((~(arr_4 [i_0] [7] [i_0])))) ? ((var_3 ^ (arr_4 [i_0] [6] [i_0]))) : (var_0 | var_12)))) : (arr_0 [i_0] [i_0]));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((((((arr_10 [i_3]) ? 1 : (arr_10 [i_3])))) ? (max((arr_10 [i_3]), (arr_10 [i_3]))) : (arr_10 [i_3]))))));
        var_21 = (max(var_21, (((1 << ((-781503983 ? ((max(0, var_2))) : var_3)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = (((((arr_10 [i_4]) + (arr_0 [i_4] [i_4]))) + (arr_0 [i_4] [i_4])));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 &= var_0;
            var_23 = ((((((arr_1 [i_4]) ? (arr_10 [i_5]) : (arr_2 [i_4] [i_4])))) * (((arr_9 [i_4] [i_5]) / (arr_9 [i_4] [1])))));
            var_24 -= (arr_13 [i_4]);
            var_25 = ((!((((arr_12 [i_4]) ? -9 : -1911260271)))));
            var_26 &= ((!(((~(arr_5 [i_4] [i_4] [i_4]))))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 7;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_27 -= ((var_10 ? var_4 : (arr_4 [i_7] [i_7] [i_7])));
                            var_28 = 5436447976051995293;
                            arr_27 [i_7] [i_9] [8] [2] [i_6] [i_4] [i_7] &= (((arr_24 [i_7 + 2] [i_7] [i_7] [i_7]) ? (arr_3 [i_4] [i_4] [i_4]) : (((arr_20 [9] [i_6] [i_7 - 1] [i_8]) ? 0 : 32256))));
                        }
                    }
                }
                arr_28 [i_4] [i_6] = (arr_17 [i_6] [i_6]);
            }

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                arr_32 [i_10] [i_10] [i_6] [i_4] = (((((arr_25 [i_4] [3] [i_10] [i_6] [i_4]) << (arr_25 [i_4] [7] [i_4] [i_4] [7]))) << (var_9 + 59)));
                var_29 &= 1414729614;
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                arr_36 [i_4] [i_4] [i_11] [i_11] = 1176658193;
                arr_37 [i_4] [i_4] = (~11135);
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_30 = 1;
                var_31 = (min(var_31, (((-((var_11 - (arr_38 [i_12] [i_6] [i_4]))))))));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                arr_46 [i_13] [9] = (((2880237682 / 63) / (arr_33 [i_4] [i_4] [i_4] [i_4])));
                var_32 = -59;
            }
        }
        var_33 = 15;
    }
    var_34 -= var_14;
    var_35 = (~var_15);
    #pragma endscop
}
