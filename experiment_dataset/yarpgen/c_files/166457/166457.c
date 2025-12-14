/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min((min(1711749574, var_7)), ((((!var_17) ? ((min(var_5, var_11))) : (!var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_20 *= (~var_2);
                arr_5 [i_0] = max((((var_11 | ((min(12335, (arr_0 [i_0 + 3] [i_0]))))))), var_7);
                var_21 = (min((((9679228620095962274 ? ((14 ? (arr_0 [i_0] [i_0]) : var_4)) : var_0))), ((((min((arr_4 [i_0] [i_1 - 1]), var_2))) ? (arr_2 [i_0] [i_0]) : var_0))));
            }
        }
    }
    var_22 *= 0;
    #pragma endscop
}
