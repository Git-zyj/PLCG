/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = (max(var_16, var_2));
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (((((max(3291597471, 219)))) ? ((var_10 ? var_9 : -16)) : (((((var_9 ? (arr_2 [i_1]) : 3097))) ? 15692 : var_3))));
                arr_4 [5] [5] = (((max((max(1, (arr_3 [10] [i_1] [i_1]))), ((max(var_11, (arr_2 [i_0]))))))) <= (max((120 > 176), 3062811211)));
                arr_5 [13] [13] = -123;
            }
        }
    }
    #pragma endscop
}
