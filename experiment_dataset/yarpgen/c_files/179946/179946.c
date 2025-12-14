/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((((max(12268458851176558844, 6178285222532992790))) || (~2041093014)))), 1602703386));
    var_12 = (min(var_9, var_9));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((max((arr_1 [i_0 - 1] [16]), (arr_1 [i_0 - 1] [i_0 - 1]))));
        arr_3 [i_0 - 1] [i_0] = (((~((var_2 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_13 = var_0;
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 = (max((((min(6178285222532992749, 12268458851176558867)))), (arr_11 [i_1] [i_3])));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_18 [i_1 + 1] [i_2] [i_1] = (((((((max(9973318545710895032, 2364785526))) ? (arr_15 [i_1] [i_1] [i_3] [i_3] [i_3 + 2]) : ((max((arr_5 [i_4]), 95118774)))))) ? (max((arr_8 [i_3 + 1] [i_3] [i_3 + 1]), (arr_15 [i_1] [i_1] [i_3] [i_2] [i_3]))) : (min(-566263758, 12268458851176558855))));
                        var_15 = (arr_8 [i_2] [i_3] [i_3]);

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_16 = (((min(6178285222532992749, -13599)) ^ (((min(8473425527998656583, 59)) >> (((arr_5 [i_1]) + 1469123173))))));
                            arr_22 [i_1] [i_2] [i_1] [i_4] [i_5] [i_1] = (max(((max((arr_1 [i_3 + 1] [i_1 + 1]), (arr_1 [i_3 - 1] [i_2])))), (max(2147483647, 124))));
                        }
                        var_17 += (max(((((arr_12 [i_1] [i_1] [i_1 - 1] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1])))), (max((arr_6 [i_2]), (arr_6 [i_2])))));
                        var_18 = (209 ? 25319 : (arr_1 [i_1 + 1] [i_1 + 1]));
                    }
                    var_19 = (((arr_15 [0] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) ? (((max(184, 56)))) : (arr_6 [i_1])));
                    var_20 = ((max((arr_5 [i_1 + 1]), (arr_5 [i_1 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}
