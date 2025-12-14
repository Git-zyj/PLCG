/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_2] [2] [i_1] [i_0] = ((31 * (!var_15)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [2] [i_2] [i_3] [i_4] [i_4] = ((((max(-521020028858156074, (-9223372036854775807 - 1)))) ? (-9223372036854775807 - 1) : (max(8962461927621913826, 1))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((3482 ? 1 : 4294967295));
                                arr_18 [i_3] [i_2] = (~0);
                                var_20 *= (((arr_6 [7]) == var_4));
                            }
                        }
                    }
                    var_21 = (arr_7 [i_0] [i_0]);
                    var_22 = (max(((((max(1, var_1)) <= ((var_5 << (((arr_12 [15] [i_1]) + 27597))))))), (max((max((-9223372036854775807 - 1), var_7)), ((((arr_3 [i_0] [i_2]) ? var_1 : var_2)))))));
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
