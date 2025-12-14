/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_0] = (((!0) ? (max(6480, (~18446744073709551615))) : ((min(((max(var_9, var_14))), (var_14 - var_15))))));
                            var_17 = max((-819571539 | var_9), ((var_3 ? var_7 : var_7)));
                        }
                    }
                }
                var_18 -= ((-(((((arr_7 [i_1]) <= var_11)) ? ((max((arr_10 [i_0] [i_0] [i_0] [i_1]), var_1))) : ((-1633731331 ? var_16 : var_0))))));
                arr_12 [i_1] [i_1] |= ((((max(var_6, 9860278842254038188))) ? (((2578 & (!6487)))) : (min(-var_16, var_4))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 22;i_5 += 1)
        {
            {
                var_19 = ((((var_5 ? (0 | var_15) : 18446744073709551613)) >= -7122875607941577710));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_20 *= var_13;
                            var_21 &= (((min((arr_19 [i_4] [i_4] [i_4]), -11426)) == 63));
                            arr_24 [i_4] [i_5] [i_6] [i_6] [i_7] |= ((!(arr_18 [i_4] [i_5 + 1])));
                            var_22 = var_15;
                        }
                    }
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
