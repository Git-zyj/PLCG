/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_5 * ((max(var_1, (var_17 < var_17))))));
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = ((var_7 ? (((~(arr_1 [i_0])))) : (~2434006363)));
                var_22 = (min(((~(((arr_3 [i_1]) ? var_4 : var_2)))), (min((arr_3 [i_0 + 2]), var_12))));
                var_23 = ((~((var_13 ? 32767 : var_15))));
                var_24 = (min(var_24, var_3));
                arr_4 [i_0] [i_1] = (min(127, 8));
            }
        }
    }
    var_25 = (((((((!var_10) && var_5)))) % var_0));
    var_26 = (max(var_26, var_2));
    #pragma endscop
}
