/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((max(var_7, 27038))))));
                        var_17 = ((var_12 && ((((arr_5 [i_0] [i_1 - 1] [i_1 + 2]) ? 0 : var_11)))));
                        var_18 *= 0;
                    }
                    arr_13 [i_0] [i_0] = (min(27043, (((112 ? var_8 : var_15)))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((-(min((arr_18 [i_0 + 1] [i_1 + 1] [i_5] [i_1 + 1] [i_4 - 3] [i_1 + 1]), (((var_1 ? (arr_11 [i_0] [i_5] [i_4] [i_0] [i_1] [i_0]) : var_7))))))))));
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_0] [14] = (max((-110 * 123), ((~(arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4])))));
                                arr_21 [i_5] [i_5] [i_0] [i_5] [i_0] |= (max((!123), (max(((17992051771954177985 ? 24 : 17)), ((686971480 >> (var_15 + 237057530)))))));
                                arr_22 [i_0] [i_1] [i_0] [i_5] = 6;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_26 [i_0] = ((-(arr_3 [i_1 + 2] [i_0])));
                        arr_27 [i_1] [i_1 + 2] [i_2] [6] [0] |= (((((211 ? (arr_0 [14]) : 373337998183609082))) ? 22737 : (arr_24 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1])));
                        var_20 = var_13;
                        var_21 *= (((((var_11 ? (arr_25 [i_0 + 2] [i_1]) : var_5))) ? (~var_6) : var_4));
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        arr_31 [i_1] [i_0] = (min(var_3, (min(var_1, (arr_25 [i_1 + 2] [i_0 - 1])))));
                        arr_32 [14] [4] [4] [i_0] |= (max(((-(arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_1 + 2] [i_7 - 1] [i_7 - 1]))), ((~((-(arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [14] [i_0] [i_0])))))));
                        var_22 = var_2;
                        arr_33 [i_0] [i_0] [i_0] [i_2] [i_7] [i_0] = (((max(var_13, var_15)) * (((!(arr_4 [i_0] [i_0]))))));
                        var_23 = ((max(1993628986, (arr_29 [i_7] [i_2] [9] [9] [9]))));
                    }
                }
            }
        }
    }
    var_24 = (((((((454692301755373630 ? var_11 : 454692301755373631))))) != (var_2 | 1379248047)));
    #pragma endscop
}
