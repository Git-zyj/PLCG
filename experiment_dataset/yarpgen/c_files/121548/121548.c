/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (max(-var_1, (max(29, 1547445862))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 = var_15;

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_0] = var_0;
                                var_19 ^= (max(1547445863, (-9223372036854775807 - 1)));
                                var_20 = (min(-64, 4294967283));
                                arr_17 [i_0] [i_0] [i_2] [3] [i_4] = ((var_6 + (~-2528243476480152281)));
                                var_21 = (((54149 ? -70 : (-9223372036854775807 - 1))));
                            }
                            var_22 = (min((arr_8 [i_0] [i_1] [i_0]), var_7));
                            arr_18 [i_0] = ((30 - (((arr_4 [i_0] [i_1] [i_0]) ? var_6 : (~12)))));
                        }
                    }
                }
                var_23 = (max(var_23, var_3));
                arr_19 [i_0] [i_0] [14] = ((max(4294967292, -61)));
                var_24 -= (var_3 < var_0);
            }
        }
    }
    var_25 = ((((((-1547445845 & -639472727971393253) + 9223372036854775807)) >> 62)) & -1);
    var_26 = var_17;
    #pragma endscop
}
