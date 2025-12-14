/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((min((((arr_2 [i_0] [11]) ? var_5 : 1)), (min((arr_0 [i_0] [i_1]), 254)))) + 1534761780);
                var_17 = (((((~16857) ? ((var_6 ? (arr_3 [i_0] [i_0] [12]) : var_5)) : ((min(var_14, (arr_2 [i_1] [i_0])))))) | (((34426 ? var_12 : 8585740288)))));
            }
        }
    }
    var_18 = (max(var_18, ((((((((var_4 ? 9223372036854775807 : var_13))) + 2147483647)) >> (var_15 - 3252562932514612130))))));
    var_19 = (max(var_19, ((((((var_9 ? var_12 : ((var_10 ? var_7 : var_4))))) ? ((var_4 ? ((0 ? var_13 : var_8)) : var_9)) : var_5)))));
    #pragma endscop
}
