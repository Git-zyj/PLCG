/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_10 *= ((((arr_12 [i_0] [i_1] [i_3] [i_3] [i_4 - 2] [i_3] [i_4]) ? (arr_11 [i_3] [i_3] [i_3] [i_2] [i_4 - 2] [i_3]) : (arr_12 [10] [10] [i_1] [10] [i_4 + 2] [i_2] [10]))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = (((((var_3 / (arr_4 [i_4] [i_4] [i_4 + 2]))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = min((((min(var_2, (arr_1 [i_3]))))), (arr_10 [i_0] [i_0] [i_0] [i_0]));
                        }
                    }
                }
            }
            var_11 *= (43274 | 1749085685);
            var_12 = (arr_7 [i_1] [i_1] [i_1] [i_1] [13] [i_1]);
        }
        arr_15 [0] |= var_5;
        var_13 |= min(((var_7 ? (arr_9 [i_0]) : (arr_1 [i_0]))), (max(var_7, var_2)));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_14 = (((var_1 - var_1) * (((((max((arr_12 [i_5] [12] [i_5] [i_5] [12] [3] [i_5 - 1]), var_9))) * ((2093525694 ? 2047 : 31)))))));
        arr_19 [i_5] = var_5;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_6] [i_7] [i_8] [12] |= ((-(arr_21 [i_5] [i_6])));
                        arr_28 [i_5] [i_6] [i_7] [i_7] = (((arr_7 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_8 + 2]) - (((arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_8 - 1]) ? 63934 : (arr_7 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_8 + 2])))));
                        var_15 = (((arr_10 [i_5] [i_5 - 1] [i_5] [i_5 + 1]) >> (((min((arr_6 [i_8 + 1] [i_8 - 1] [i_5 - 1] [i_5]), 4294967295)) - 4294956913))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_33 [i_9] = (((arr_22 [i_9] [i_9] [i_9]) ? var_1 : (arr_4 [i_9] [i_9] [i_9])));
        arr_34 [i_9] [i_9] = (arr_22 [i_9] [i_9] [i_9]);
    }
    var_16 = (max(var_16, (~var_1)));
    var_17 = -var_3;
    var_18 = ((!(!var_6)));
    #pragma endscop
}
