/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_1, var_12))) ? var_9 : var_11));
    var_17 -= var_5;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 += arr_2 [i_0];
        var_19 &= (arr_0 [4] [i_0]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] [1] = (arr_4 [4]);
            var_20 = ((~((536862720 + (((arr_6 [i_1] [i_2]) ? 1325378887 : -536862720))))));
            var_21 = (((arr_4 [i_1]) ? (arr_3 [i_2]) : (arr_5 [i_1] [i_1] [i_1])));
            var_22 = (max(((-(arr_3 [i_1 + 1]))), (arr_4 [i_1 + 2])));
            var_23 = (max(var_23, 7497818079546865198));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_24 += (arr_5 [i_1] [i_1] [i_1]);
            var_25 = (((arr_4 [i_3]) ? ((~((~(arr_4 [12]))))) : (((arr_3 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : 536862717))));
            var_26 = (min(var_26, var_4));
            var_27 = (arr_7 [i_3]);
        }
        arr_11 [i_1] = ((((((arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2]) ? (arr_9 [i_1 + 2]) : (arr_9 [i_1 - 1])))) ? (arr_9 [i_1 - 1]) : (arr_9 [i_1 + 3])));
        var_28 = (max(var_28, ((((((-(((arr_10 [22] [22]) ? -4891687325355752800 : (arr_6 [11] [i_1])))))) ? var_5 : ((min((arr_10 [i_1 - 1] [i_1]), (arr_6 [13] [16])))))))));
        var_29 = (arr_9 [i_1 + 1]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_30 = (max(var_30, (arr_9 [11])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_31 = var_3;

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_32 = (((arr_14 [i_7] [i_6] [17]) ? (arr_14 [i_8] [10] [1]) : var_3));
                            var_33 = (min(var_33, var_11));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_34 -= var_4;
                            arr_28 [11] [6] [6] [6] [18] = (((arr_17 [i_5 + 1] [i_5 + 1] [i_4 + 1] [i_4]) && (arr_17 [i_5 + 1] [i_5 + 1] [i_4 + 1] [i_4])));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_35 = ((-(arr_30 [i_10] [i_6] [1] [i_4 + 1])));
                            var_36 = (min(var_36, (arr_5 [i_4] [i_4] [i_4])));
                        }
                        var_37 ^= var_9;
                        var_38 = arr_1 [i_7];
                    }
                }
            }
        }
        var_39 = (arr_19 [i_4] [i_4] [14] [i_4] [i_4]);
    }
    var_40 = (min(var_40, (((var_2 ? var_14 : var_9)))));
    #pragma endscop
}
