/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(((min(var_5, var_2))), var_11))) ? var_15 : (!var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 1;
        arr_4 [i_0] [2] = var_6;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((((((arr_0 [i_1] [i_1]) ? ((max(1, 1))) : (arr_7 [i_1] [i_1])))) == (((max(1, 3)) * (max(18446744073709551615, var_3)))))))));
        var_21 ^= (max((((((max((arr_7 [0] [i_1]), var_15))) && (13435904765851267073 | 59808)))), (max((((arr_7 [i_1] [i_1]) - (arr_5 [i_1]))), ((((arr_1 [i_1]) ? 4294967295 : 65535)))))));
    }
    var_22 = (((((1 ? var_9 : ((var_18 ? var_15 : 5010839307858284541))))) ? ((~(((((-127 - 1) + 2147483647)) >> (var_10 - 13808616923800028645))))) : var_18));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_23 = (1 && ((min(-21, (arr_12 [1] [19])))));
                arr_14 [i_2] [i_2] [i_3] = (~0);
            }
        }
    }
    #pragma endscop
}
