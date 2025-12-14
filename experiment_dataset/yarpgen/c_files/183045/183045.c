/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 757505133;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_3] [2] = ((arr_4 [i_3 + 2]) ? (arr_6 [i_3 + 3]) : var_4);
                            arr_15 [i_0] [i_3] [i_0] [i_3] [i_3] [i_3] [i_4] = ((-(arr_9 [12] [i_2] [i_2])));
                        }
                    }
                }
            }
            arr_16 [i_0] [i_0] = var_14;
        }

        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            var_19 = 6567882553735379162;
            arr_19 [6] [i_5] = (((var_17 ? 926177333 : var_0)));
            var_20 = 4207;
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_21 = (!var_12);
            var_22 = (max(var_22, var_7));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_23 = (((~56495) ? var_11 : var_9));
                            arr_29 [i_7] [i_6] [i_7 - 1] = (((arr_26 [i_6 + 2]) ? var_1 : var_2));
                        }
                    }
                }
            }
            var_24 = (min(var_24, (arr_9 [i_0] [i_0] [i_6 + 2])));
        }
        arr_30 [i_0] [4] = ((var_2 ? (((1 ? 1194981097 : 926177334))) : ((var_4 ? var_10 : 7422119215564199439))));
    }
    for (int i_10 = 2; i_10 < 16;i_10 += 1)
    {
        var_25 = (min(((max(var_5, (arr_32 [i_10 - 1] [i_10])))), (min(47744, 2895368685765195876))));
        var_26 = (max(var_26, -0));
        var_27 = (min(var_27, ((min(((56495 ? var_4 : ((56479 ? 1 : 18014398241046528)))), 18428729675468505094)))));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_28 -= var_12;
        arr_37 [i_11] = var_16;
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                {
                    var_29 = (arr_17 [i_11] [i_11] [i_13]);
                    var_30 = (var_6 <= var_12);
                }
            }
        }
    }
    var_31 = (min(((min((!var_13), (var_4 != 2656148682)))), var_2));
    var_32 = ((var_15 ? 1 : var_8));
    #pragma endscop
}
