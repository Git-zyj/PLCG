/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = var_13;
        arr_4 [i_0] = ((min(var_5, ((9223372036854775807 & (arr_0 [i_0]))))) <= ((-593044442 ? ((min(var_2, 1406148291))) : (min(var_16, var_3)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = min((((-24 + 2147483647) >> (2326852466282484564 - 2326852466282484551))), (((((max(593044442, 20030))) || ((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_5 [i_1]))))))));
                    var_20 = ((~46385) == ((max((arr_10 [i_1] [i_2]), (arr_3 [i_0])))));
                    arr_11 [i_1] [i_1] = 1002783096;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_14 [i_3] = ((((!var_6) ? 52 : (!-546502505156515778))));
        arr_15 [i_3] = (((arr_5 [i_3]) ? ((min((((arr_3 [i_3]) ? 6676 : (arr_13 [i_3]))), ((((arr_3 [i_3]) > var_14)))))) : ((var_14 >> (arr_5 [i_3])))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 24;i_6 += 1)
            {
                {
                    arr_24 [17] [i_5] = (min((var_10 > 100), (!var_1)));

                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        arr_27 [i_5] [i_6 - 1] [i_5] [i_5] = (((var_5 ? 50557 : (arr_21 [1] [i_6] [i_5] [i_7 + 1]))));

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_30 [i_4] [i_5] [i_5] [i_6 - 4] [i_7] [i_5] = -53;
                            var_21 = ((~((max((arr_18 [i_5]), 1)))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] = var_1;
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 24;i_9 += 1)
                        {
                            var_22 = var_7;
                            var_23 = ((~(arr_16 [i_7 - 1])));
                            var_24 *= (4617333830329185504 <= 546502505156515778);
                        }
                        arr_35 [i_7] [i_7 + 1] [i_5] [i_5] [i_4] [i_4] = (max(var_17, ((min(((2418728870 ? 0 : (arr_25 [8]))), (arr_19 [i_7 + 1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
