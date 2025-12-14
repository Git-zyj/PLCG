/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max(var_1, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] = (((((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_2]) : 31850)) & ((((arr_0 [i_0]) <= ((29 ? 2097024 : var_3)))))));
                                var_16 = ((var_12 * (((((var_7 ? 4292870272 : var_11))) ? (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (-1 / 836616732)))));
                                var_17 &= 63;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_6 | 4292870272) + (((max(116, 3)))));
    var_19 &= var_5;
    #pragma endscop
}
