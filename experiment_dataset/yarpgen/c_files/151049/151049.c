/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_0] [i_2] [i_0] [i_0] = (arr_6 [i_1 - 1] [i_3 + 1] [i_1 - 1] [i_1 - 1]);
                        var_12 = (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) ? -var_10 : (arr_8 [i_0 - 1] [i_0] [i_3])));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_14 [i_4] [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                        var_13 = (min(var_13, (((-80 % (-127 - 1))))));

                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_2] [6] = ((!(arr_10 [i_5 + 1])));
                            arr_18 [i_0] [i_0] [i_0] [i_4] [i_5] [i_5] = (arr_10 [i_1]);
                        }
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            arr_21 [i_0 - 1] [i_1 + 2] [i_2] [i_0] [i_2] = (arr_5 [i_0] [i_0]);
                            arr_22 [1] [i_1] [i_0] [i_4] [i_6 - 1] = -41;
                        }
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_14 = ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))));
                        arr_26 [i_0] = (arr_20 [i_2] [i_7]);
                    }
                    var_15 = (max(61440, 16));
                    var_16 = (max((((arr_11 [i_0 + 2] [i_0 + 1] [i_0]) ? (arr_11 [i_0 + 3] [i_0 + 2] [i_0]) : (arr_11 [i_0 - 1] [i_0 - 1] [i_0]))), ((var_0 % (arr_24 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2] [i_0])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                var_17 = (((((arr_28 [i_8 - 2] [i_8]) < (arr_31 [i_8] [i_8]))) ? (10403 - -2129269274) : (17 - var_4)));
                arr_32 [i_8] [i_8] [i_8] = (((((arr_28 [i_8 + 1] [i_8]) ? -13 : (arr_28 [i_8 + 1] [i_8]))) < ((((!(arr_28 [i_8 - 1] [i_8])))))));
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
