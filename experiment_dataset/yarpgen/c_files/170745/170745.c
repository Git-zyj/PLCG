/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (arr_8 [i_2] [i_2 + 1] [i_2]);
                    var_16 = ((var_3 <= (arr_4 [i_2 - 2] [i_2 - 2])));
                }
            }
        }
        arr_9 [i_0] = var_6;
        var_17 = var_1;
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_18 &= var_0;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                {
                    var_19 = (((((arr_7 [i_5 - 2] [8] [8]) ? var_14 : var_10))) ? (min(var_13, var_8)) : ((((arr_7 [i_5 + 3] [1] [i_5]) | (arr_7 [i_5 - 2] [14] [i_5])))));
                    var_20 |= -1022332041810723625;
                    arr_18 [i_3] [i_4] [i_3] [i_3] = (var_0 ? ((var_7 ? ((var_6 ? var_5 : 1022332041810723624)) : var_12)) : ((((arr_15 [i_5 - 2] [i_5 - 1] [i_5 + 3]) ? var_2 : (arr_7 [i_5 + 3] [i_3] [i_5 - 2])))));
                }
            }
        }

        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_21 = (min(var_21, (min((((arr_16 [i_6 + 1]) - var_2)), ((max(var_1, (arr_16 [i_6 - 1]))))))));
            var_22 = var_3;
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_23 = (((var_1 ? var_0 : var_9)));
            arr_23 [i_3] = (((((arr_2 [i_3]) - var_4))) ? (min(var_4, var_3)) : (((min(var_11, var_2)))));
            arr_24 [i_3] = ((var_14 ? (var_7 != var_13) : ((((var_5 ? var_9 : (arr_7 [i_3] [i_3] [i_3])))))));
            var_24 = ((((var_5 ? -1022332041810723641 : var_2)) ^ (arr_7 [i_3] [i_3] [i_7])));
        }
        arr_25 [i_3] = var_6;
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        var_25 = ((1 << (((min((arr_33 [i_9] [i_8 + 1] [i_8]), (arr_33 [i_11] [i_8 - 1] [i_8 - 1]))) + 8458045939536819427))));
                        var_26 = var_10;
                        var_27 = (((((arr_5 [i_8 + 2] [i_8] [i_8]) ? (arr_5 [i_8 + 3] [i_8] [i_8 + 3]) : (arr_5 [i_8 + 3] [i_8] [4]))) & var_6));
                        arr_36 [i_8] [i_8] [i_8] [i_8] = var_3;
                        arr_37 [i_8] = (-1022332041810723635 % 40);
                    }
                }
            }
        }
        var_28 = var_9;
        var_29 = (var_1 || var_12);
        arr_38 [i_8] = ((var_4 ? ((((var_4 ? var_0 : (arr_29 [i_8]))) + ((var_12 ? (arr_32 [i_8] [i_8] [i_8]) : var_6)))) : var_11));
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 23;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        var_30 = (min(var_30, 2880378765));
                        var_31 = ((((var_5 ? -9041 : 495967794906619932))));
                        var_32 = (arr_42 [i_14 + 1] [i_13]);
                        arr_49 [i_12] [i_14] [i_12] [i_12] [i_12] = ((((((arr_45 [i_12 - 1] [i_12 - 1] [i_14 - 1] [i_14 - 2]) ? var_14 : var_2))) ? (((max(var_1, 46)))) : var_13));
                        arr_50 [i_13] [i_14] [3] [i_15] = (((min(var_11, var_3)) + (arr_44 [i_12 + 1])));
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_33 = (((max(var_9, ((var_12 ? (arr_40 [i_16]) : var_11))))) > (((arr_46 [i_12 - 1] [i_12 - 1] [i_14 - 3] [i_14 - 3]) ? var_12 : var_3)));
                        arr_54 [i_14] [i_14] [i_14] [i_12] = ((arr_41 [i_14 - 1]) ? (((var_14 ? (arr_40 [i_12]) : var_0))) : ((var_12 ? (arr_48 [7] [i_13] [i_14] [i_16]) : var_1)));
                        var_34 = (max(var_34, 495967794906619926));
                        var_35 = ((var_5 * (max(-18, var_5))));
                        arr_55 [i_12] [i_14] [i_14] [i_16] = (min(((var_8 ? var_11 : var_12)), (arr_46 [20] [i_13] [i_13] [i_13])));
                    }
                    arr_56 [i_14] [i_13] [i_13] = ((((max(var_11, var_12))) | var_5));
                }
            }
        }
    }
    #pragma endscop
}
