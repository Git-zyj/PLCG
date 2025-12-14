/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 |= (min((-3927882780862826453 & var_2), var_2));
                arr_7 [10] [i_1] [10] = ((((~(((arr_2 [i_0]) | var_5)))) | 173));
            }
        }
    }
    var_17 = ((((((((-119268773 ? 7281 : 31467))) ? ((var_2 ? -8652829488362318510 : var_13)) : var_3))) - 5692201117930879936));
    var_18 = (max(var_18, 114688));
    #pragma endscop
}
