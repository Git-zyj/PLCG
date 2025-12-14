/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (max(((min((arr_4 [i_0 - 1] [i_0 + 1]), (arr_4 [i_0 - 2] [i_0 + 1])))), -5930269042144656595));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = ((((min((max(-882181186831697861, (arr_4 [i_0 - 1] [17]))), var_7))) ? (arr_8 [i_3] [2] [i_1] [i_0]) : 882181186831697878));
                        var_15 = (min((arr_4 [i_1] [i_2]), ((~(arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 2])))));

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_16 = min((arr_5 [i_0 - 2] [i_4 - 1] [i_0 - 2]), var_6);
                            var_17 = arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2];
                            var_18 = (min(var_18, (min(-882181186831697861, (~-882181186831697861)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_19 = (min(var_19, ((((arr_1 [i_0 - 1] [i_3]) - (arr_1 [i_2] [i_5]))))));
                            var_20 &= (var_6 ? (arr_2 [i_0 + 1] [i_1] [7]) : (arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1] [15] [15]));
                            var_21 = ((-(arr_7 [i_0 - 1] [i_0] [i_0 - 1])));
                            var_22 = (min(var_22, ((((arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) >> (((arr_6 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1]) - 4189117236)))))));
                        }
                        var_23 = (min(var_23, (((((arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_6 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 2])))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_24 |= (((arr_1 [i_6] [i_8]) ? (min(var_1, (arr_26 [i_9] [i_8] [i_7] [6]))) : (arr_4 [i_7] [i_9])));
                            var_25 = (max(var_25, ((max(var_4, (arr_21 [i_9]))))));
                            var_26 = (((max((max(var_7, (arr_26 [i_6] [i_9] [i_6] [i_9]))), (((var_1 || (arr_8 [i_7] [i_6] [i_7] [i_6])))))) % ((((arr_17 [i_8] [0]) ? ((var_5 ^ (arr_20 [1] [5] [i_8]))) : 1)))));
                            var_27 &= ((-((var_2 ? (arr_0 [i_8]) : (arr_0 [i_7])))));
                        }
                    }
                }
                var_28 = max(((max((arr_23 [i_7] [i_7] [i_7] [i_7]), (arr_23 [i_6] [8] [i_6] [i_6])))), (((arr_3 [i_6] [i_7] [i_6]) ^ (arr_3 [i_6] [i_7] [i_7]))));
                var_29 = (((((arr_26 [i_6] [i_6] [i_6] [i_6]) && var_9)) ? ((min(38401, (arr_20 [i_7] [i_6] [i_6])))) : (arr_18 [i_6])));
                var_30 = var_6;
            }
        }
    }
    #pragma endscop
}
