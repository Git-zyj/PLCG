/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(3752361687135694219, ((((var_9 ? var_10 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = (min(1, ((((arr_2 [i_0] [i_2]) != -1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((min(((4565030414030067692 ? -4565030414030067704 : 19)), 4565030414030067718)) - 1)))));
                                arr_14 [i_0] [i_3] [i_0] [i_3] [i_1] [i_1] [i_0] = ((-((((((min((arr_3 [i_3] [12] [i_0]), 30714)))) <= 14694382386573857410)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [11] [i_0] [i_2] [5] [i_0] [i_0] = (max((arr_7 [i_0 - 1]), 2147483640));
                                var_14 = var_4;
                            }
                        }
                    }
                    arr_21 [9] [9] [i_2] [i_0] = (arr_4 [i_0]);
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_15 = var_5;
                            arr_26 [i_0] [3] [i_0] [i_0] = (~3752361687135694241);
                            var_16 = (max(var_16, ((((-4565030414030067680 + (((min(var_9, (arr_25 [i_0] [i_8] [i_8] [i_8]))))))) | (arr_7 [i_0 - 1])))));
                        }
                    }
                }
                arr_27 [4] [i_1] [i_0] = var_5;
            }
        }
    }
    var_17 = (max(var_17, (((var_10 ? (max(var_3, var_2)) : (((min(var_7, (max(17155, var_6)))))))))));
    #pragma endscop
}
