/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min((~var_17), ((((var_14 >> (var_6 + 7854616358990693394)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        arr_4 [i_0] = (arr_2 [i_0]);
        var_21 = ((+(((arr_3 [i_0] [i_0]) * var_13))));
        var_22 = (arr_1 [13]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_23 = ((((min(var_11, (arr_5 [i_1])))) ? (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))) : (arr_5 [i_1])));
        arr_8 [i_1] = (((max(var_7, var_9))));
        var_24 = (-var_12 < (arr_1 [i_1]));
        var_25 ^= (arr_2 [i_1]);
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2 - 1] = ((((arr_10 [i_2] [i_2 + 1]) * (arr_10 [i_2] [i_2]))) / ((~(arr_10 [i_2 - 1] [i_2 + 1]))));
        var_26 = var_0;
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    {
                        var_27 = (arr_19 [i_3] [i_6 + 1]);
                        var_28 = var_14;

                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            var_29 = (max(var_29, (arr_19 [6] [i_3 - 1])));
                            arr_29 [i_3 + 1] [18] [i_5] [i_6] [i_7] &= var_8;
                            var_30 = (((arr_22 [i_3 + 1] [i_6 + 1] [i_5]) % (arr_21 [i_3] [13] [i_3 - 1] [13])));
                        }
                        var_31 = var_8;
                    }
                }
            }
            var_32 = (((arr_28 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3 + 1]) - (arr_28 [i_3] [i_3] [i_4] [i_3 + 1] [i_4] [i_3 + 1])));
            var_33 = var_13;
            var_34 = (((arr_21 [i_3] [i_4] [i_4] [i_4]) & (arr_13 [i_3 - 1] [18])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_35 = (arr_14 [i_3] [i_3]);
            var_36 = (arr_26 [0] [i_3] [15] [1] [i_8] [i_8] [i_8]);
            arr_33 [i_3 + 1] [i_3] [i_3] = (((arr_18 [i_3 + 1] [i_3 + 1]) / (arr_23 [i_3 - 1] [i_3 - 1] [i_3] [i_3])));
            arr_34 [i_8] [4] [i_3] = ((~(arr_14 [0] [i_3])));
        }
        var_37 = ((!(arr_18 [i_3] [i_3])));
    }
    #pragma endscop
}
