/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_12 = (min((arr_1 [i_0 - 1]), (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 2]) : 2289259956353267987))));
        var_13 = ((16157484117356283629 / ((var_0 * (arr_1 [i_0 - 1])))));
        arr_2 [i_0] [i_0] = (((545256218553588255 && 545256218553588255) || (((-(25091 * -15514))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (arr_0 [9])));
        var_15 = (((((((max(var_8, var_1))) ? -36 : (((!(arr_5 [i_1 - 1] [i_1]))))))) || (!4117444980682267597)));
        arr_7 [i_1 - 1] = (arr_1 [i_1 - 1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_16 = 15260;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_2] [i_2] = (96 == var_5);
                    var_17 = (max(var_17, -var_8));
                    var_18 = ((var_5 ? (~var_7) : (arr_10 [i_2] [i_3] [i_4 + 1])));
                    var_19 = (min(var_19, 59894));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_19 [i_5] = (!64);

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_20 = min(((((arr_16 [i_5]) ? 43319 : (!var_1)))), ((((min(var_10, var_1))) ? 607792284 : var_10)));
            var_21 = ((+(min((arr_18 [i_5]), (arr_20 [i_5] [i_6] [i_6])))));
            var_22 = (max(var_22, ((max((min(((((arr_18 [i_6]) || var_11))), var_9)), (var_9 / var_1))))));
        }
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            var_23 &= ((arr_22 [0] [i_7 + 3] [0]) / (arr_22 [4] [i_7 + 1] [4]));
            arr_26 [i_5] [i_7] = (((((((var_11 | (arr_16 [i_5]))) ^ var_4))) ? (var_7 & var_6) : (min(32505856, (arr_22 [i_5] [i_7 + 1] [i_7 - 1])))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_35 [i_5] [i_7 + 1] [i_5] [i_9] [i_9 + 3] [2] = (((((var_5 ? (arr_32 [i_7 - 1] [i_9 + 1] [i_8] [i_10 + 1] [13]) : (arr_32 [i_7 + 2] [i_9 + 1] [i_5] [i_10 + 1] [i_10 + 2])))) & (min(545256218553588255, (arr_32 [i_7 + 3] [i_9 + 1] [i_8] [i_10 + 2] [i_10 + 2])))));
                            arr_36 [i_5] [i_7] [i_8] [i_5] = ((!(arr_34 [i_5] [i_7 - 1] [i_8] [i_9 + 3] [i_10])));
                            var_24 = (max(var_24, var_1));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_25 = (min(var_25, (!2289259956353267987)));
            arr_40 [i_5] = (((((var_4 ? (arr_18 [i_5]) : ((var_6 ? 106 : (arr_25 [i_5])))))) ? (((max(0, var_9)) << (((arr_39 [i_11] [i_5]) + 63)))) : (arr_30 [i_5] [i_5] [i_11])));
            arr_41 [i_5] [i_11] = (max(((~(244 * -3))), (-32767 - 1)));
            var_26 &= -var_6;
            arr_42 [i_5] = ((((((((5 | (arr_23 [i_5] [i_11])))) ? var_9 : (var_10 | var_6)))) ? (2155436570 ^ 31726) : ((((~(arr_23 [i_5] [i_11]))) << (var_10 - 1900950674)))));
        }
    }
    var_27 = (max(var_27, var_3));
    var_28 = (min(var_28, ((min((14329299093027284019 == 4117444980682267577), 65511)))));
    #pragma endscop
}
