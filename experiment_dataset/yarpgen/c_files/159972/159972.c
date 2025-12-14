/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = 44805;
        var_12 = ((-(min((var_2 % var_8), var_1))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_13 = ((arr_5 [i_1]) ? -18446744073709551611 : (arr_4 [i_1 + 2]));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_14 = (arr_4 [i_2]);
            var_15 = 11943387771123578297;
            var_16 = (min(var_16, ((var_4 ? (arr_4 [i_1 + 2]) : var_11))));
        }
        arr_9 [i_1 + 1] = var_0;

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_17 = -118;

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_18 = ((((min(1, (arr_6 [i_1 + 1] [i_3 - 1])))) <= (max((max(var_9, 4294967289)), 17212465899090669076))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_19 = (((((arr_10 [i_1 + 2]) || (arr_10 [i_1])))) - -134217728);
                            var_20 = ((!(max(1, 1))));
                            var_21 = (((((18367573849477758006 ? (~1) : (((18367573849477758033 >= (arr_17 [i_1] [i_3 + 3] [i_4] [i_5] [i_5] [i_4] [i_1 - 1]))))))) ? (((arr_12 [i_5 + 1] [i_1 + 2] [i_6 - 1]) ^ (!var_0))) : (arr_11 [i_1 - 1] [i_3] [i_1 - 1])));
                            var_22 = ((-((((11 < var_0) == ((min(var_7, (arr_16 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_5] [i_6])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_23 = (min(var_23, 851182562));
                            var_24 = (10452202264305115982 >= (var_6 || -531582420));
                            arr_23 [i_1 + 1] [i_1] [i_3] [i_3] [i_4] [i_7] [i_8] = min(((var_9 & (max(var_9, 8348628127684908916)))), ((max((!var_5), (((arr_5 [i_7]) ? (arr_4 [i_7]) : 223))))));
                        }
                    }
                }
            }
            arr_24 [i_3] [i_3] = (max((max(var_8, 127)), (((arr_22 [i_1 - 1] [i_1 - 1] [i_3 + 3] [i_1 - 1] [i_3 + 1]) ^ (arr_22 [i_1 - 1] [i_1 - 1] [i_3 + 3] [i_1 - 1] [i_3 + 3])))));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_28 [5] [5] [i_9] = (min(((((((1 ? 486743442 : 8882006848226894796))) ? -var_8 : (arr_12 [i_1] [i_1 - 1] [i_9])))), var_9));
            arr_29 [i_1] [i_9] = var_8;

            /* vectorizable */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_25 = 0;
                var_26 = (!var_1);
            }
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                arr_36 [12] [i_9] [i_11] = ((((min((!48), var_11))) ? (((65535 || (arr_30 [i_9] [i_1 + 2])))) : (((!(((var_11 ? var_0 : -531582400))))))));
                var_27 = ((~(!var_9)));
            }
        }
        arr_37 [i_1] = var_5;
    }
    var_28 = var_11;
    var_29 = (min((((var_0 ? var_1 : ((var_6 ? var_3 : var_3))))), var_9));
    #pragma endscop
}
