/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = var_9;
                        var_15 = (arr_3 [i_0] [i_0] [i_0]);
                    }
                }
            }
            arr_11 [i_1] = 3065746084;
        }
        arr_12 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_18 [i_5] [6] [i_5] = (((((max(-71, 1497302353))) && (((var_8 ? 2147483647 : (arr_13 [5] [5] [i_5])))))) ? (((((arr_17 [i_0] [9]) <= var_1)) ? (arr_13 [i_0] [i_0] [i_0]) : ((var_10 ? var_12 : (arr_17 [i_0] [i_5]))))) : ((max(19, 224))));

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_16 &= (arr_13 [i_0] [i_4] [i_0]);
                        arr_23 [i_0] [i_0] [i_5] = (max(var_11, (arr_4 [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_26 [i_0] [i_4] [i_0] [i_7] = ((((arr_16 [7] [10] [i_5] [i_7]) && (arr_16 [i_7] [i_4] [i_0] [i_0]))) ? 12836209406162498364 : ((((((var_1 ? -52 : var_0))) ? (arr_8 [i_0]) : var_1))));
                        var_17 = var_14;
                        var_18 = 295281086;
                        var_19 = (max(var_2, var_14));
                        var_20 += (((((236 ? (arr_2 [i_5] [i_4] [i_0]) : (arr_7 [i_0] [i_4] [i_5] [i_0])))) ? -1442652151 : (min((~var_3), var_5))));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_29 [i_0] [i_0] [6] [i_0] [12] = (((arr_28 [8]) ? ((((max(var_5, (arr_24 [i_8] [i_5] [i_4] [i_0])))) ? var_6 : (arr_28 [i_8]))) : ((max(1958354086, 3966871343)))));
                        var_21 = (~var_0);
                    }
                }
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
