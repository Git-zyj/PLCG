/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((1016631559 == -1016631560) ? 34 : (min(-1016631560, 1016631559))))), var_3));
    var_12 = (min(var_12, (var_5 & var_0)));
    var_13 = ((((-var_7 ? (((var_1 ? var_0 : var_1))) : (var_3 + var_2))) <= 2147483647));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (2147475456 ? 33 : 96);
                var_15 = (~1016631542);
                arr_6 [i_0] = (arr_1 [i_0]);
                arr_7 [4] [i_1] = (((2147483646 / (min(13010678169146941348, 8796093022207)))));
            }
        }
    }
    #pragma endscop
}
