/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_1);
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 *= (-((18446744073709551615 / ((var_2 ? 18446744073709551615 : 18446744073709551604)))));
                    var_16 &= 1;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = 2011262506;
                                var_18 = ((var_8 ? (max(52, (arr_10 [i_4] [i_3] [i_2 + 2] [i_1 + 3] [i_0]))) : ((((min(var_11, (arr_4 [i_1] [7]))))))));
                                arr_12 [i_1] [i_1] [i_2] [i_3 + 2] [i_4 + 2] = var_5;
                                var_19 = var_1;
                                var_20 = (min(var_20, ((((((var_10 ? var_1 : var_0))) && (((~((-29948 ? (arr_11 [i_0] [i_0] [5] [5] [i_4 - 1]) : var_1))))))))));
                            }
                        }
                    }
                    arr_13 [i_1] [10] [i_1] [i_1] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
