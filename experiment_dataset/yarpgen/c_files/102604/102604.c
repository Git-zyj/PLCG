/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max(((var_16 + ((var_17 ? var_7 : var_3)))), ((min(var_13, var_2)))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] [i_0] = (var_1 < var_13);
                    var_19 = (((((var_9 << (var_4 - 115)))) ? var_14 : var_5));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_5] [i_4] [i_4] = (var_11 / var_13);
                                arr_17 [i_0] [i_5] [i_3 - 1] [i_4] [i_5] [i_3] = ((4294967274 ? 1 : 1));
                                var_20 ^= ((var_6 ? var_2 : var_16));
                            }
                        }
                    }
                    var_21 ^= var_17;
                    var_22 ^= (var_9 | var_6);
                    var_23 = (var_14 == var_3);
                }
            }
        }
    }
    var_24 = var_12;
    var_25 = var_13;
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                {
                    var_26 = ((((max((min(var_0, var_3)), ((min(var_11, var_10)))))) ? ((min(var_0, var_13))) : ((var_13 ? var_1 : (min(var_1, var_6))))));
                    var_27 = (((min(var_12, var_2)) / ((min(1, -49)))));
                }
            }
        }
    }
    #pragma endscop
}
