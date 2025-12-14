/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_15;
    var_21 = (((((((min(0, var_14))) > (max(var_8, 14114348096231232739))))) + (!var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((+(((arr_3 [i_0] [i_1 - 2]) ? -8121221587192197424 : 0))));
                var_22 = ((((((arr_2 [i_0]) || var_3))) ? 0 : ((-1934301743 ? (((arr_1 [i_0]) ? (arr_3 [i_1] [6]) : 0)) : (!var_17)))));
                var_23 = arr_2 [i_0];
                var_24 = (((18446744073709551615 > 173) > (((arr_2 [i_0]) ? 191 : var_8))));
            }
        }
    }
    #pragma endscop
}
