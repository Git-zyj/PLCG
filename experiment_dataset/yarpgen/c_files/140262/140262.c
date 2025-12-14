/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((((!((min(var_4, (arr_2 [8] [23])))))) ? ((-(min(1, 469762048)))) : ((1 ? 1 : 1)))))));
                var_22 = (arr_0 [i_0] [19]);
            }
        }
    }
    var_23 = var_19;
    #pragma endscop
}
