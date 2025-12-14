/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = 57;
                var_20 = (arr_0 [i_1 - 3]);
                var_21 = var_17;
            }
        }
    }
    var_22 &= var_2;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_23 = (arr_8 [i_2]);
                var_24 = ((8046 ? (198 & 6635) : (arr_8 [i_2])));
                arr_12 [i_2] = ((+(((arr_9 [i_2] [i_3]) ? 137431079 : ((-8 ? 63 : 55))))));
                var_25 = var_17;
                arr_13 [i_2] [9] [i_2] = (((((((221 ? 17285985683861411957 : 24))) ? 3192 : (((arr_11 [i_2] [i_3]) ? var_9 : var_18))))) ? ((((((arr_11 [i_2] [i_3]) ? -22 : var_8))))) : (~7748680938526226563));
            }
        }
    }
    #pragma endscop
}
