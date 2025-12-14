/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 | (((((var_10 ? var_11 : var_6))) ? var_1 : 60997))));
    var_21 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
            arr_9 [i_0] [i_0] = (!56515);
        }
        var_22 = ((+(((arr_7 [i_0]) ? (arr_3 [1] [i_0]) : 0))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_23 = (max(var_23, (arr_4 [i_0] [i_0] [i_0])));
                                var_24 = (arr_13 [1] [i_4 + 2] [1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_28 [1] [i_7] [1] [1] [4] = (((var_6 ^ var_18) ? (arr_2 [4] [4]) : (arr_2 [i_0] [0])));
                                var_25 = (arr_23 [i_0] [i_0] [i_0] [i_0]);
                                arr_29 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = 1;
                            }
                        }
                    }
                }
            }
        }
        var_26 = (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 123 : (((arr_1 [i_0]) | -987051004))));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 14;i_8 += 1)
    {
        var_27 |= ((~(((arr_30 [i_8]) ? (arr_31 [8]) : (arr_31 [4])))));

        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
        {
            arr_36 [i_8 + 2] [i_8] = (arr_33 [i_8 - 1] [i_8]);
            arr_37 [i_8] [14] [i_8] = 4536;
            var_28 = (max(var_28, (arr_33 [16] [6])));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
        {
            arr_41 [10] [i_8] [1] = (((arr_33 [i_8 - 3] [i_8]) ? (arr_40 [i_8] [i_8 + 3] [i_8 - 3]) : (arr_40 [i_8] [i_8 + 3] [i_8 - 3])));
            arr_42 [i_8] = ((arr_30 [i_8 - 1]) ? (arr_30 [i_8 + 2]) : (arr_30 [i_8 - 2]));
        }
    }
    var_29 = ((((var_5 >> (var_17 - 4277883727)))));
    var_30 = var_17;
    #pragma endscop
}
