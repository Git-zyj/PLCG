/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_13 ? var_11 : var_18))) ? ((var_4 ? var_13 : var_1)) : (241 + 103))) - var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [11] [i_0] [i_0 - 3] = (((((var_15 && (arr_5 [i_0] [i_0]))) || ((((arr_2 [i_0]) ? (arr_0 [i_0]) : var_6))))));
                arr_7 [i_0] [i_0] [i_0] = (((((+(((arr_2 [1]) + 241))))) ? -657847410 : (max((31 & -105), 0))));
            }
        }
    }
    #pragma endscop
}
