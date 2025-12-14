/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((((((max((arr_2 [i_0] [i_1]), (arr_1 [1] [i_0]))) | (((arr_3 [i_0]) & -8716784293228892122))))) ? (~14905) : (arr_1 [i_1 + 2] [i_1 + 1]))))));
                var_18 = (((-2365220404846766370 * -1) ? var_14 : (((var_12 ^ var_4) ? ((var_3 ? -8716784293228892124 : var_14)) : (arr_0 [i_0])))));
            }
        }
    }
    var_19 = ((((-var_13 ? var_12 : (var_6 || var_7))) / (~-8716784293228892122)));
    #pragma endscop
}
