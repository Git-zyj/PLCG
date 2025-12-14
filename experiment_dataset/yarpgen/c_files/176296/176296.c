/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 228;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = var_13;
                    var_16 ^= (((((var_0 != (min(var_1, var_13))))) | var_4));
                    var_17 = ((!((((((-498 ? 0 : 2))) ? var_14 : (arr_6 [i_2 + 1] [i_2 + 1] [i_2]))))));
                    var_18 = (min(var_18, (max((arr_8 [i_0] [i_1] [i_0]), var_4))));
                    var_19 = (max(var_19, var_7));
                }
            }
        }
    }
    var_20 = ((6104925258436717233 ? -var_2 : var_11));
    #pragma endscop
}
