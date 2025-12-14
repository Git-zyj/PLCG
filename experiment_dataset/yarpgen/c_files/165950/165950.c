/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_11));
    var_14 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = arr_2 [i_0] [i_0];
        arr_5 [i_0] = (arr_1 [i_0]);
        var_15 = (((((arr_1 [i_0]) >= var_0)) || (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = ((((~(arr_6 [i_1]))) >> (((arr_6 [i_1]) - 43))));
        var_17 = (min(var_17, (((+(((arr_6 [i_1]) | (arr_8 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_18 = (arr_3 [i_2]);

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_19 = 520675966;
                            var_20 = (((arr_17 [i_2] [i_3] [i_4 + 2] [i_2] [i_6 + 1]) > (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 8;i_8 += 1)
                {
                    {
                        var_21 = ((-((var_5 ? (arr_2 [i_2] [i_2]) : (arr_14 [i_2] [i_3])))));
                        arr_29 [i_2] [i_3] [i_2] [i_2] [i_3] [i_3] = arr_27 [i_2] [i_2] [10] [i_2] [i_2] [10];
                        arr_30 [i_2] [i_7] [i_3] [i_2] = -3708411944;
                        arr_31 [i_2] [i_3] [i_7] [i_2] = (((arr_28 [i_2] [i_2] [i_7] [i_8]) & (arr_28 [i_2] [i_3] [8] [i_8])));
                    }
                }
            }
            var_22 = var_1;
            var_23 = (((arr_9 [6]) || ((((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_19 [i_2] [i_2] [i_3] [3] [i_3]) : 15)))));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_34 [i_2] [i_9] [0] = (arr_3 [i_2]);
            arr_35 [i_2] [i_2] = (((arr_33 [i_2] [i_2]) ? (arr_33 [i_2] [i_9]) : (arr_33 [i_2] [i_2])));
        }
        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            var_24 ^= (arr_16 [i_2]);
            var_25 &= arr_20 [i_2] [i_2] [i_2] [i_2] [i_2];
        }
        arr_39 [i_2] = var_7;
        var_26 = (arr_25 [i_2] [i_2] [i_2]);
        var_27 = ((!(((arr_36 [i_2] [i_2] [i_2]) > (arr_21 [i_2])))));
    }
    #pragma endscop
}
