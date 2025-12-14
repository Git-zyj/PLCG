/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 ^= (min((max(-var_8, var_1)), var_8));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (min(var_13, 65526));
                var_14 = (min(var_14, ((((((((max(1, 3917154358))) ? var_5 : 377812926))) ? ((var_5 ? (min(var_2, (arr_4 [i_0] [i_1]))) : var_8)) : var_4)))));
            }
        }
    }
    #pragma endscop
}
