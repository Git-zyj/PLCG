/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max((max(7, var_8)), ((max(var_10, var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_16 = ((-(arr_10 [i_3] [i_3] [i_2] [i_3] [5] [i_1])));
                        arr_11 [i_1] [i_0] [i_2] = (147 == var_8);
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        var_17 = (arr_8 [i_4] [i_4] [i_0 + 1]);
                        var_18 = var_1;
                    }
                    var_19 = -2147483643;
                }
            }
        }
    }
    var_20 = 524032;
    var_21 = (max(((((var_7 | var_4) < ((max(var_12, var_14)))))), var_9));

    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_22 = (max(var_22, 11));
        arr_16 [i_5] = var_4;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_23 += var_3;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                {
                    arr_23 [i_6] [i_6] [i_6] [i_7] = (((min((arr_19 [i_8] [i_8] [i_8 + 2]), (~var_8))) < var_2));
                    var_24 = (min(var_24, ((((var_6 | var_12) ? -var_3 : ((30 ? 524036 : 117)))))));
                    arr_24 [i_6] [i_7] = (arr_17 [i_7] [i_7]);
                }
            }
        }
        arr_25 [i_6] = (max(2132960825, (((arr_12 [i_6] [i_6] [i_6] [i_6]) ? (arr_12 [i_6] [i_6] [i_6] [i_6]) : var_0))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_25 = var_4;
                        arr_35 [i_10] [i_10] [i_10] [i_11] [i_11] = var_8;
                        var_26 = var_9;
                        arr_36 [i_11] [i_11] = (max(((-1 ? var_12 : (max((arr_10 [i_6] [i_6] [1] [3] [i_6] [i_6]), var_7)))), 1));
                        arr_37 [i_6] [2] [i_11] [i_11] [i_11] = var_9;
                    }
                }
            }
        }
        var_27 += 35184371564544;
    }
    #pragma endscop
}
