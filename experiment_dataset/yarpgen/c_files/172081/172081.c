/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_11;
    var_18 = (max(var_18, ((max(((max((var_3 && 3583033623), (var_11 && var_10)))), var_11)))));
    var_19 -= 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (min((((((var_6 ? var_16 : 209))) ? var_14 : (arr_1 [i_1]))), ((min(var_0, var_12)))));
                arr_6 [i_0] [1] = var_10;
                var_21 = ((((((arr_3 [i_0]) ? var_2 : (arr_3 [i_1])))) ? (((var_10 << (((arr_1 [i_0]) ? 1 : var_1))))) : (((arr_0 [i_0 - 1]) ? var_11 : (arr_2 [i_1])))));
            }
        }
    }
    #pragma endscop
}
