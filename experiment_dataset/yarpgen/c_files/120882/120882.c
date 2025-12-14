/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((((var_2 >> (var_6 - 96)))) ? ((var_7 ? var_1 : ((min(var_2, 0))))) : var_0)))));
    var_14 = (min((((var_8 + 9) ? (min(var_8, var_7)) : (((var_10 ? var_9 : 0))))), (((((var_1 ? 248 : var_5))) ? ((252 ? var_5 : var_0)) : 1))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 -= 9223090561878065152;
            arr_4 [i_0] = (((arr_0 [i_1]) > (6465402538596653053 + var_5)));
        }
        var_16 = (((arr_2 [i_0]) != 4));
        var_17 = var_5;
        var_18 = (max(var_18, ((((arr_2 [i_0 + 2]) - (!var_8))))));
    }
    var_19 = (((((((min(var_5, 0))) ? 246 : ((14 ? var_11 : var_8))))) ? var_11 : (!var_1)));
    var_20 = var_12;
    #pragma endscop
}
