/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 -= arr_1 [8];
                    var_19 = arr_7 [i_0];

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            var_20 = var_7;
                            var_21 = (((((!var_1) ? 1 : (arr_14 [13] [1])))) || ((min(((0 ? 562949953421311 : 1023)), 780046471800286644))));
                            var_22 = ((-18005 ? (-32767 - 1) : 24635));
                            var_23 -= (-((max(2130225116542975176, (arr_6 [i_0] [i_0])))));
                            var_24 = ((!((!(arr_0 [i_0 - 1])))));
                        }
                        var_25 += (arr_4 [i_0 + 2] [i_0]);

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_26 = 1;
                            var_27 -= ((1 > ((-20898 ? (arr_5 [i_3]) : (((arr_4 [i_2] [1]) ? 4503599627370496 : var_15))))));
                            var_28 ^= (((!((!(-32767 - 1))))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_29 = (arr_19 [i_0] [i_1] [i_2] [i_3] [i_3]);
                            var_30 = (arr_12 [i_0 + 2]);
                            var_31 = arr_0 [i_0 - 2];
                            var_32 = (((((~(arr_6 [18] [i_0 - 1])))) ? var_14 : 1));
                            var_33 = -13949826565651596845;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_34 -= ((((arr_0 [i_7]) < -576458553280167936)) ? 1152921504598458368 : ((~((var_9 ? var_8 : (arr_6 [i_0] [i_0 + 2]))))));
                            var_35 = (min((arr_13 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 2]), ((-((max(-23624, 1)))))));
                            var_36 = max(0, (!545460846592));
                            var_37 = (arr_4 [i_1] [2]);
                        }
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_38 = (15726885756203612448 ? (((arr_4 [i_0 - 1] [i_0 + 2]) ? (min(1, 18013298997854208)) : (max(var_3, 2719858317505939167)))) : (((max((arr_12 [i_0 - 2]), 20898)))));
                        var_39 += -2411;
                    }
                }
            }
        }
        var_40 = (((arr_21 [i_0] [1] [i_0] [i_0] [i_0] [1]) ? (((arr_5 [1]) ? (((0 ? (arr_4 [i_0] [i_0]) : 1))) : (((arr_0 [i_0 - 1]) * (arr_16 [i_0] [i_0 - 1] [i_0] [i_0]))))) : (arr_11 [i_0 + 2] [i_0 + 1] [i_0])));
        var_41 = (arr_2 [i_0]);
    }
    var_42 = (min(((var_2 ? var_5 : (((var_17 ? var_9 : 1))))), ((1 ? (((min(var_13, var_15)))) : var_14))));

    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        var_43 = (((-(min((arr_27 [i_9] [i_9]), -1)))));
        var_44 = var_6;
        var_45 = var_15;
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_46 = (arr_27 [i_10] [i_10]);
        var_47 = ((var_5 * (arr_14 [i_10] [i_10])));
        var_48 = (arr_11 [1] [i_10] [i_10]);
    }
    #pragma endscop
}
