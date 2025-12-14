/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = 1;
                    arr_6 [i_0] [i_0] [i_0] = ((8507 / (((arr_4 [i_0] [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [i_2] [i_0]) : (arr_4 [i_2] [i_1] [i_1] [i_0])))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] = ((~((((max((arr_0 [i_3]), (arr_7 [8] [i_1] [i_0] [i_1] [i_0] [i_1])))) - ((var_8 ? 19975 : (arr_2 [i_0])))))));
                        arr_11 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0] = 29;
                        var_12 *= (arr_7 [i_0] [1] [i_3] [i_3] [i_3] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            var_13 = (arr_0 [i_2]);
                            arr_19 [i_0] = arr_15 [i_0] [i_0] [i_0];
                        }
                        arr_20 [i_0] = (min((!var_6), var_0));
                        var_14 = min(7850190819232791938, (arr_3 [i_0]));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [4] [i_6] [i_0] = (arr_16 [i_0] [i_1] [i_0] [i_6] [14]);
                            arr_28 [i_0] [i_6] [i_0] [i_1] [i_0] = arr_13 [i_0] [i_6] [15] [i_0];
                            var_15 = 111692564537726159;
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_2] [i_6] [9] = ((var_5 ? ((~(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : var_0));
                            arr_34 [i_0] [i_0] [14] [i_0] [i_0] [i_0] [i_0] = (min((((~(!var_9)))), (arr_8 [i_6] [i_6] [i_6] [i_6])));
                            var_16 += arr_16 [i_8] [i_6] [i_6] [i_1] [i_0];
                            var_17 = ((~(arr_23 [i_2])));
                        }

                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            var_18 *= (max((arr_35 [i_6] [18] [i_1] [i_6] [i_6] [4]), ((21 ? 1 : (arr_35 [i_6] [i_6] [i_1] [i_2] [i_6] [i_9])))));
                            var_19 = -0;
                            var_20 = (max(((max((var_9 && 53), (((arr_32 [i_0] [18] [i_0] [i_0] [i_0] [i_0]) && var_8))))), 18335051509171825457));
                            var_21 = arr_32 [i_6] [i_1] [i_2] [i_6] [i_9] [i_6];
                        }
                    }
                    arr_38 [i_0] = var_8;
                }
            }
        }
    }
    var_22 = 1;
    #pragma endscop
}
