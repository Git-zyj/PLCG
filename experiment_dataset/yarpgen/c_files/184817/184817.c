/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (((((var_6 - (min(var_6, var_13))))) ? (min((arr_0 [i_0 - 1]), (arr_0 [i_1 - 1]))) : ((-3 | (10 || var_9)))));
                arr_4 [i_0] = ((((((arr_0 [i_0 + 1]) ? var_8 : var_1))) ? ((min((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((arr_0 [i_0]) ? var_2 : -2099983351))))) : (((((3709868340 ? 2099983350 : var_8))) ? (~var_4) : (arr_3 [10] [i_1 + 2] [i_0 + 1])))));
                var_18 = (arr_2 [3]);
            }
        }
    }
    var_19 = ((min(var_1, (var_12 + var_6))));
    #pragma endscop
}
