/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max(var_5, (max((max(var_1, var_0)), (((1074566032 ? 3220401263 : -2097152)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 ^= (arr_2 [i_0] [0] [i_0]);
                var_19 -= (((var_3 ? (-14267 - var_6) : var_1)));
            }
        }
    }
    var_20 |= (((((!12663726022024391426) ? (!var_7) : -14252)) > var_12));
    var_21 = (!var_4);
    #pragma endscop
}
