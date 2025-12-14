/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = ((((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
                var_19 ^= (-((365257139434563564 ? (arr_6 [5] [i_0]) : 2025427167)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = (arr_4 [i_0] [i_0]);
                            var_21 = (((arr_11 [11] [i_2] [i_1] [i_1] [i_0]) ? (max(-168350809, (arr_13 [i_0] [i_1] [i_1] [i_1]))) : ((min(1, var_14)))));
                            var_22 = ((((~(arr_4 [i_0] [i_0])))) ? ((1920 ? 2025427155 : 1)) : (~-2025427156));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((var_14 ? var_0 : (max(var_12, 2025427174))));
    var_24 = 2025427155;
    var_25 = var_5;
    var_26 -= (!-2025427179);
    #pragma endscop
}
