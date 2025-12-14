/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0 - 1]) ? (arr_1 [i_0] [i_0]) : ((-(arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] = (arr_4 [i_0]);
            arr_6 [i_0] [i_0] = ((1 ? 8521848404494695543 : (arr_0 [i_0 - 1])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_14 = (((((2002180676 ? var_4 : 225))) ? (arr_8 [i_0] [i_0 + 1] [i_3 - 1]) : ((~(arr_4 [i_0])))));
                        var_15 = ((-(147 % var_10)));
                    }
                }
            }
            arr_16 [i_0] [i_0] [i_2] = ((((((arr_3 [i_0 + 1] [i_2] [i_2]) ? 2 : var_4))) ? 16383 : (arr_12 [i_0 + 1] [i_0 - 1] [i_2] [i_2])));
        }
        var_16 = ((-(arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_0])));

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_19 [i_0] = ((~(arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 23;i_7 += 1)
                {
                    {
                        var_17 += (((arr_17 [i_6] [i_0 - 1] [1]) ? (arr_22 [i_7] [i_5] [i_7 - 2] [i_5] [i_7 + 1]) : (arr_14 [i_0] [i_5] [i_6] [i_7])));
                        var_18 = (arr_22 [i_0 - 1] [i_0 + 1] [i_5] [i_7 - 2] [i_7 + 1]);
                        arr_26 [i_0] [i_5] [i_5] [i_5] [i_5] = (arr_17 [i_0] [i_0 + 1] [i_0]);
                        var_19 = (arr_22 [i_0 + 1] [i_5] [i_6] [i_6] [i_7]);
                    }
                }
            }
            arr_27 [i_0] [i_0] [6] = 147;
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_20 -= (arr_24 [8] [i_8] [i_8] [i_8] [i_8] [i_8]);
            var_21 ^= (((arr_10 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]) | (arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])));
            var_22 = (max(var_22, (arr_23 [i_0 + 1] [i_8] [i_8] [i_0 - 1])));
            arr_32 [i_0] [i_0] [i_0 - 1] = ((!((((arr_30 [i_0]) ? (arr_10 [i_0] [i_8] [i_8] [i_0 - 1]) : (arr_0 [i_8]))))));
            arr_33 [i_0] = (arr_24 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]);
        }
    }
    var_23 = (max(408732615, 2617159829));
    var_24 = (max(var_24, (((var_8 ? ((min(var_9, 227))) : var_9)))));
    var_25 = var_2;
    var_26 = max(var_3, (max((!var_5), var_1)));
    #pragma endscop
}
