/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((0 ? 0 : 0))));
    var_11 = (max(var_11, (((~((((min(var_2, var_4))) ? 0 : 127)))))));
    var_12 -= ((((var_4 ? -5110682222803180311 : var_7))));
    var_13 += (((var_6 ? (min(var_5, var_7)) : var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 ^= 649941818;
                var_15 = (max(2456214053014860495, ((((var_4 ? var_8 : (arr_0 [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
