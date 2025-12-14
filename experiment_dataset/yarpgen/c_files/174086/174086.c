/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (~6905);
    var_21 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_4 [8] [i_1 + 1]);
                var_22 = (min(var_22, ((((min(-var_6, -2110159535))) ? ((((var_14 <= var_7) != ((var_3 ? var_10 : var_0))))) : (arr_4 [i_1 + 1] [i_1 - 1])))));
                var_23 = var_8;
            }
        }
    }
    var_24 = ((((min(-var_2, -115))) ? (((((min(var_0, -6902))) == (!var_17)))) : var_13));
    #pragma endscop
}
