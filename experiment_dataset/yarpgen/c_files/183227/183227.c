/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~-4558803425371208646) > (var_5 + var_3)));
    var_17 = (((0 < 14493508399808686481) || (((var_9 ? (9 && 25) : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (((max((arr_1 [i_0 + 1]), (arr_3 [i_0] [i_1] [i_0 - 2]))) >= (~65510)));
                arr_4 [i_0 - 3] = var_9;
                var_19 = (max(var_19, (((9071295059643348377 ? (((arr_0 [i_0] [i_0]) & (min(-98, var_10)))) : ((max(var_13, (65510 / 1410966743)))))))));
            }
        }
    }
    var_20 ^= 245;
    #pragma endscop
}
