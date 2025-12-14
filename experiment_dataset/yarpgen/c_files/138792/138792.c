/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((0 && var_2) | var_13))))));
    var_21 = ((((~(max(var_5, 17710399421061221249))))) ? ((-(~var_16))) : ((((var_4 && var_14) && ((min(41, var_18)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (arr_2 [2])));
                arr_7 [0] |= (((-1132116272 & -1132116263) ? ((~(arr_6 [4] [i_1]))) : ((~(arr_5 [4] [4])))));
                arr_8 [i_0] = ((24430 & ((~(var_14 + var_11)))));
            }
        }
    }
    #pragma endscop
}
