/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(var_10, (max(-2, -6793342210552072643)))));
    var_14 += 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = (arr_4 [i_0 - 1] [i_1 + 3]);
                var_16 = (max(var_16, ((min((arr_5 [i_0 + 1]), (arr_5 [i_0 - 2]))))));
                var_17 = ((((((((min(27250, 0)))) & (arr_1 [1] [i_1])))) ? (((var_10 && (~101)))) : var_8));
                var_18 = (max(var_18, (27250 + var_7)));
                var_19 = (min(var_19, ((((((~((31 ? 51 : (arr_1 [i_0] [i_1])))))) ? (max((~-70), ((min(60, var_8))))) : (((!1) ? (arr_3 [0] [i_1 + 3] [i_0 + 3]) : var_0)))))));
            }
        }
    }
    var_20 = (min(var_20, ((((((((min(3126, var_2))) ? var_2 : (~var_1)))) && ((((((4 ? var_11 : var_4))) ? (!var_5) : (~0)))))))));
    #pragma endscop
}
