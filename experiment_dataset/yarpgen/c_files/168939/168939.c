/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_6));
    var_21 = (min((((((((((-127 - 1) + 2147483647)) >> (var_11 + 6817933872081035768)))) ? (~21982) : ((1 ? var_9 : var_16))))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((!((!(arr_0 [i_0] [i_1])))));
                var_22 = (arr_3 [i_0]);
                arr_7 [i_0] = -1087176107;
                arr_8 [i_0] = (max((arr_2 [i_0] [i_0]), var_13));
            }
        }
    }
    var_23 = var_16;
    var_24 = (max(var_24, var_13));
    #pragma endscop
}
