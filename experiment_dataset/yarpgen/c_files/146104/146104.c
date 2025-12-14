/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (!var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [3] [i_0] = -106;
                        var_14 = (min(var_14, (~-1382174120)));

                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_1] [5] [i_4 - 3] = ((min(var_8, (((-106 ? -88 : var_1))))));
                            arr_17 [i_0] [i_0] = ((((((arr_10 [i_0] [i_0] [i_0]) > (arr_6 [i_1] [i_1 + 3])))) / (((arr_14 [i_0] [i_1 + 3] [i_0] [i_3]) | (arr_8 [i_1 + 2] [i_1 - 3] [i_4 - 1] [i_4 - 4])))));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_3] = (((~(arr_4 [3] [i_1 + 3]))));
                            var_15 -= (((((-7824145181828325631 != (!4023981360)))) < (((arr_15 [i_0] [i_0] [i_2] [i_3] [i_5] [i_3] [i_1 - 3]) & ((max(91, 255)))))));
                            var_16 = ((((((arr_14 [i_0] [15] [15] [i_0]) + (arr_18 [i_0] [i_0])))) ? (((arr_6 [i_1 + 1] [i_2]) ? (min(-1944628317977556410, -1)) : ((var_11 ? var_7 : var_3)))) : (((min(4294967295, 1))))));
                            var_17 = (max(-var_4, ((min(var_1, (arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [1]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_0] [i_0] [i_2]) ? (((var_2 ? 5821 : var_5))) : (((arr_0 [i_0]) * (arr_19 [i_0])))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                    }

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            var_18 += ((((255 ? (arr_23 [i_7] [i_0] [i_1] [i_8 + 3] [i_8 - 1]) : (arr_23 [i_7] [i_0] [i_7] [i_8 + 3] [i_0]))) * (((arr_23 [i_7] [i_2] [i_7] [i_8 + 3] [i_7]) / var_11))));
                            var_19 -= ((((arr_4 [i_8 + 2] [i_1 - 1]) | (arr_20 [i_7] [i_1] [i_7] [i_7] [i_7] [i_7] [i_1]))) == -174);
                            arr_33 [i_0] = (min(((~(var_11 | 192))), (((min(var_4, 73))))));
                            arr_34 [i_0] = ((-((-((var_7 ? var_0 : var_0))))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_20 = (max((max(((max(var_5, 4163967708))), (var_4 / var_11))), (((((((arr_18 [i_0] [2]) << (9544065878985563698 - 9544065878985563682)))) ? (((-3 ? (arr_1 [i_0]) : var_4))) : (((arr_5 [i_2] [i_0] [i_2]) ? 106 : 1542135035)))))));
                            arr_39 [i_0] [i_0] [i_2] = ((((var_5 & (arr_4 [i_1] [i_1 + 1]))) + (((-107 ? (arr_29 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 3]) : var_9)))));
                        }
                        arr_40 [i_0] [i_0] [15] [15] = ((+((8902678194723987917 * (((511 ? (arr_13 [i_0] [i_1 + 3] [i_1 + 3] [i_1] [i_1 + 3]) : 6294650245564188604)))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_21 = ((4294967293 ? (arr_42 [i_0] [i_1] [i_0] [i_1 - 2]) : 1836532099));
                        arr_45 [i_10] [i_0] [i_0] [i_0] = (~5837);
                        var_22 = (max(var_22, ((((arr_4 [i_1 - 2] [i_1 - 2]) ? 32736 : (!8902678194723987913))))));
                    }
                    var_23 -= (min((((arr_30 [10] [i_1 - 2] [i_0]) - (arr_30 [1] [i_1 - 2] [1]))), (arr_22 [4] [i_1 + 3] [i_1 + 3] [i_2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
