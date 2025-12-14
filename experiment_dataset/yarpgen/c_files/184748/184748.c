/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : ((min((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                var_11 = min((((arr_2 [i_0 - 2]) >> (((arr_2 [i_0 - 2]) - 2825909037)))), ((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 3])))));
            }
        }
    }
    var_12 = ((var_1 < (((((var_6 ? var_2 : var_9))) ? var_9 : var_6))));
    var_13 |= ((((((~var_5) ? ((var_1 ? var_9 : var_9)) : var_4))) ? ((min(((var_7 ? var_7 : var_8)), ((var_7 ? var_1 : var_3))))) : ((var_8 ? (var_7 <= var_6) : var_2))));
    #pragma endscop
}
