/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((((((max(var_2, var_2))) ? (min((arr_3 [i_0] [i_1 - 1] [20]), var_10)) : (((max(var_11, var_2))))))) ? (~58938) : (((1 ? 5523 : 60035))));
                arr_6 [i_1] = (((~var_4) ? ((max(60035, var_12))) : 30));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 = (((((((60011 ? 0 : -412756163))) ? (63201 > 15559) : ((var_13 ? var_9 : -1475158043)))) << (((max(((1 ? var_9 : 165)), (arr_8 [i_4]))) - 52254))));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_16 = (((((~(arr_13 [i_2])))) ? ((1 ? (!12582912) : ((-1797469606 ? 313894289 : 2229285022)))) : (((4282384383 ? ((0 ? var_0 : 412756163)) : (165 | 152))))));
                        arr_18 [i_2] [i_2] [i_4] [i_2] = ((((2615140102 * 60018) ? 103 : (arr_11 [i_2] [i_2] [i_2]))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_21 [i_6] [i_2] [i_6] = (arr_15 [1] [i_2] [i_2]);
                        arr_22 [i_2] = (((((((((((~(arr_3 [i_2] [i_3] [i_3])))) ? (min(-8903364684375309942, (-9223372036854775807 - 1))) : ((5518 | (-9223372036854775807 - 1))))) + 9223372036854775807)) + 9223372036854775807)) << (((((arr_20 [i_2] [i_2] [i_2] [i_6]) ? (~var_12) : (arr_0 [i_2] [i_2]))) - 4294914936))));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        arr_25 [13] [i_3] [i_2] [i_7 + 1] = (arr_24 [i_7 - 2] [i_2] [i_7 - 3] [10]);
                        arr_26 [i_2] [i_2] = (((~1) + 9223372036854775807));
                        var_17 = var_3;
                        arr_27 [i_2] [i_7] = ((5511 ? (~var_13) : var_6));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_18 = 4282384384;
                        var_19 = (arr_5 [i_8] [i_8]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
