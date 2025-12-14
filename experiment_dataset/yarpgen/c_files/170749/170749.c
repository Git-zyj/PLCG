/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = var_5;
    var_14 = var_4;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 -= var_7;
        arr_3 [i_0 - 1] [i_0] = ((((arr_1 [i_0] [i_0]) ? var_4 : ((var_2 ? -868735476 : 1)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = (arr_0 [i_1 - 1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_17 = (max(var_17, var_9));

                        for (int i_5 = 4; i_5 < 8;i_5 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, (arr_1 [2] [i_5])));
                            var_19 = (((1 == (arr_14 [i_1 - 1] [i_2] [i_2] [i_2] [i_3]))) ? (arr_16 [i_1] [i_4]) : (arr_7 [i_1] [i_1] [i_1]));
                            var_20 -= var_5;
                            var_21 = (max(var_21, (((~(arr_4 [i_3 - 2]))))));
                            var_22 = (min(var_22, ((((arr_9 [i_1 - 1] [i_3 - 1] [i_5 - 4] [i_5 + 3]) ? 3 : (arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]))))));
                        }
                        for (int i_6 = 4; i_6 < 8;i_6 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, ((~(arr_11 [i_3 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 3])))));
                            var_24 = (max(var_24, (arr_12 [i_6] [i_3 + 3] [i_2] [i_6])));
                        }
                        arr_20 [i_1] [i_2] [i_3 + 2] [i_4] = (((arr_19 [i_1 - 1] [i_3 - 2] [9] [i_4]) ? var_5 : var_6));
                    }
                }
            }
        }
        var_25 = (((var_0 + 2147483647) << (((arr_18 [i_1] [i_1] [i_1] [1] [i_1 - 1] [i_1]) - 551950115))));
        var_26 = (max(var_26, 222851337));
    }
    var_27 = (((max(((var_6 ? var_1 : var_8)), var_4))) ? var_3 : (max(((var_1 ? var_6 : var_5)), ((var_11 ? var_8 : -868735476)))));
    #pragma endscop
}
