/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 *= (max(1, 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((-(((max(var_11, -1)) % 240))));
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] = ((((((max(var_0, (arr_8 [7] [i_1] [i_1] [16])))) ? (~var_3) : (((-(arr_7 [i_4] [i_3] [i_2 - 1])))))) & (((((((var_3 ? (arr_10 [i_0] [i_1] [i_2] [17] [i_4]) : var_4))) != (max((arr_9 [i_0] [i_0] [i_1] [i_3]), 14))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, (((((((var_12 ? 1 : var_1))) + (max(1, 14))))))));
    var_17 = (max((max(241, (((18446744073709551596 ? var_13 : var_6))))), var_5));
    #pragma endscop
}
