/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = (((((max(var_2, -5534))) ^ ((~(-32767 - 1))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 = var_1;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_1] = (~var_5);
                        var_12 ^= var_9;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_1] [i_3] [i_2] [i_1] = (max((arr_3 [i_3] [i_2 + 2]), 1));
                            var_13 ^= var_9;
                            arr_15 [i_1] [i_3] [i_1] = var_3;
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_0] [i_5] = 40291;
                            arr_19 [i_0] [i_1] [i_2 - 2] [i_1] [i_5] = (max((((((min(24027, var_8))) || 40291))), (~1)));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_14 = (271709441898470535 && var_0);
                            var_15 = var_8;
                            arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] = arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0];
                            var_16 = (min(2, (((43 >= (arr_17 [i_2] [i_1] [i_2] [i_2 + 3] [i_3] [i_1]))))));
                            arr_23 [i_0] [i_1] [i_0] = var_6;
                        }
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_17 = var_6;
                        var_18 += (((((max(var_8, 8779937325551396089))) && (((3354812352 ? 4294967295 : 4268013629))))));
                    }
                }
            }
        }
        arr_26 [i_0] [i_0] = arr_21 [i_0] [6] [i_0] [6] [i_0];
        arr_27 [i_0] = var_5;
    }
    var_19 = var_5;
    var_20 = (((min(var_3, var_2))));
    #pragma endscop
}
