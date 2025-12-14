/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (((arr_7 [i_0] [3]) ? ((4294967295 ? var_10 : 1)) : (var_5 && 64)));
                    var_16 = -64;
                    var_17 = (((arr_7 [i_0] [i_2]) ? (((arr_5 [i_0] [i_1 - 1] [i_1 - 1]) / 1915816910)) : 3127972433));
                    var_18 = var_13;
                }
            }
        }
        arr_9 [i_0] = (((arr_1 [i_0] [i_0]) ? var_8 : (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        var_19 = (min(4294967288, (~90)));
                        var_20 = (max(-93, (((((min((arr_18 [1] [i_4 - 1] [9] [i_4] [12] [i_4]), -52))) >= (arr_19 [i_3] [i_4 - 1] [i_4] [i_4]))))));
                        var_21 = (max(var_21, ((min(((62 ? (arr_14 [14] [i_6]) : (arr_14 [i_3] [1]))), (max(1, (arr_14 [1] [10]))))))));
                    }
                    var_22 = 2147483647;
                    var_23 = var_1;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_24 = (arr_15 [i_4] [i_7] [i_4]);
                                var_25 = (max(var_25, (max(((min((var_12 || 17081043574304884554), var_7))), ((0 / (arr_16 [i_4 - 1] [i_4 - 1] [i_7 - 1])))))));
                                var_26 = (min(var_26, ((((-2147483647 - 1) ? 109 : 52)))));
                                var_27 = (((-2147483647 - 1) / (arr_13 [i_4 - 1] [10])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
