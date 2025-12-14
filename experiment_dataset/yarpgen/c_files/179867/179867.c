/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] |= 1;
        arr_5 [i_0] = ((var_13 ? (((((~3286033969) != (arr_0 [i_0]))))) : ((var_8 ? ((var_3 ? var_3 : 26838)) : 4278149231))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_4] [i_4] [i_2 - 2] [i_3] [i_2] [i_3] [i_2] = 18446744073709551609;
                            arr_16 [i_1] [i_0] [i_2] [19] [i_0] = (0 >> 0);
                        }
                        for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_5 + 1] = (max((((-1 - ((min(var_10, var_12)))))), var_6));
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = (((min((arr_7 [i_2 + 1]), 1)) + (((((arr_9 [i_5]) - 0)) | 38062))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            arr_25 [i_2] [i_1] [0] [14] [i_6 - 1] |= (arr_0 [i_3 + 2]);
                            arr_26 [i_6] [i_1] [i_1] [i_1] [i_1] = var_4;
                        }
                        arr_27 [1] [i_3] = ((((max(((var_2 * (arr_18 [i_2] [i_1] [i_3] [i_0] [i_0]))), (arr_0 [i_3])))) && ((((arr_7 [i_2]) ? ((5 ? (arr_13 [i_3 + 2] [i_3 - 1] [i_2] [i_2 - 1] [i_0] [i_0] [i_0]) : (arr_0 [i_1]))) : 2741880202)))));
                    }
                }
            }
            arr_28 [i_0] [i_0] = (max((((arr_11 [i_0] [i_1] [1] [i_1] [i_0] [i_1]) ? (arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0]) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))), (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) ? var_3 : (arr_6 [i_0] [i_1])))));
            arr_29 [i_0] [i_1] [i_0] = (((((((arr_0 [i_0]) ? 26836 : 1)) >> ((max(0, -25))))) >> (2076105316 - 55901)));
            arr_30 [i_0] = var_9;
        }
        for (int i_7 = 3; i_7 < 23;i_7 += 1)
        {
            arr_34 [i_0] [i_7] = ((4294967272 ? -7006040858485168289 : (((arr_18 [15] [i_7 - 3] [i_0] [i_7] [i_7 + 1]) - -19))));
            arr_35 [i_0] [1] [i_7] = ((((25190 | (arr_17 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 2] [i_7])))) ? ((~(arr_17 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 3] [i_7 + 1] [i_7 + 1] [i_7]))) : (arr_17 [i_7 - 2] [i_7] [i_7] [i_7 - 3] [i_7 - 2] [i_7 - 2] [i_7]));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_39 [i_8] [i_8] = (9 ? var_13 : var_2);

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            arr_44 [i_9] = ((-(((var_12 < (arr_11 [i_8] [i_9] [i_9] [i_8] [i_8] [i_8]))))));
            arr_45 [i_8] [i_8] [i_9] = ((0 ? -var_8 : (arr_36 [i_9] [i_8])));
        }
    }
    var_15 = var_2;
    #pragma endscop
}
