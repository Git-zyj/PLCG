/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = var_11;

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_14 = (max((max(77, -20)), var_0));
                            var_15 = var_4;
                        }
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_15 [i_0] [i_3] [i_1] [i_2] [i_1] [i_0] = (((min(1159769013, 11825)) >= (((((min(11825, -11825))) >= -1768531246)))));
                            var_16 = (min((min(((((var_3 + 2147483647) >> (var_8 + 22)))), (min(var_7, var_3)))), ((max(-var_11, (var_1 < var_11))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_17 = var_4;
                            var_18 = var_4;
                            var_19 ^= (0 + 12268);
                        }
                        arr_18 [i_0] [i_0] [i_0] [4] [i_2] |= ((~(var_4 % var_7)));

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_0] = var_2;
                            arr_22 [i_0] = var_2;
                            arr_23 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0] [i_0] = (((var_1 > var_3) <= var_6));
                            var_20 = (max(var_20, (((-(var_10 || var_11))))));
                            var_21 = (~var_7);
                        }
                        var_22 = (max(((max((max(var_1, var_2)), (var_8 && var_8)))), (((var_6 * var_6) / ((min(var_11, var_8)))))));

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_23 = var_8;
                            var_24 = var_6;
                            arr_26 [i_0] = ((var_6 + ((((!(~var_5)))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_12, (max((min(var_6, var_2)), ((min(var_1, var_9)))))));
    var_26 = ((-(((var_10 < (!var_9))))));
    #pragma endscop
}
