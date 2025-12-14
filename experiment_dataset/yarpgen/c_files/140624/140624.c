/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((var_16 ? (var_18 && var_2) : (!var_9))))));
    var_20 = (min(var_20, (~0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (((arr_2 [i_0]) ? ((+((8388607 ? (arr_4 [i_0] [i_0] [0]) : (arr_6 [i_0] [i_1] [i_0] [i_0]))))) : (((arr_6 [i_0] [i_1] [i_2] [i_2]) ? ((var_4 ? (arr_0 [i_1] [i_2]) : (arr_3 [i_2] [i_0]))) : (arr_4 [i_0] [i_1] [i_2])))));
                    arr_7 [i_0] = var_2;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] = (((-(arr_3 [i_3] [9]))));
                        var_22 = ((!(arr_0 [i_0] [i_0])));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, ((max(((((max((arr_2 [i_0]), var_3))) % (arr_5 [i_1] [i_1] [i_1]))), ((((arr_8 [i_0] [i_0] [i_0] [i_0]) < (arr_4 [i_1] [i_1] [i_2])))))))));
                        arr_15 [i_0] [i_1] [i_0] [i_1] = ((((!(arr_13 [i_2] [i_1] [i_2] [i_4])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_24 = (((arr_13 [1] [i_2] [i_1] [i_0]) <= (arr_8 [i_0] [i_1] [i_0] [i_5])));
                        var_25 = (max(var_25, (((var_8 ? -8388608 : (arr_17 [1] [i_0] [i_1] [1] [i_2] [i_5]))))));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_20 [9] [i_1] [i_1] [i_1] [i_6] |= var_14;
                        var_26 = arr_6 [i_0] [i_1] [1] [i_1];
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_9 [i_0] [i_0] [i_2] [i_6]) ^ (arr_9 [i_0] [i_1] [i_2] [i_6])))) ? (((arr_9 [i_0] [i_1] [i_2] [i_2]) << (((arr_9 [i_0] [1] [i_2] [i_0]) - 28068)))) : (~var_3)));
                        var_27 = ((((((max((arr_5 [13] [i_1] [i_1]), 1073741312))) ? ((((!(arr_19 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6]))))) : (min((arr_6 [i_0] [i_2] [i_0] [i_0]), 3916732537930826948)))) >> 16));
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, (((var_13 >> (((-32767 - 1) - 4294934518)))))));
    var_29 = (var_5 <= 22027);
    #pragma endscop
}
