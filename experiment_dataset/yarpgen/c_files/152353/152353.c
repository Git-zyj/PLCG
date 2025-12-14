/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_4 [i_0] [8] [6]);
                var_13 = ((0 ? -2927295503192267932 : -20689));
            }
        }
    }
    var_14 = (((((var_5 ? var_11 : (252 | var_10)))) ? (max(((var_0 ? 24483 : 0)), (!-98))) : 136));
    #pragma endscop
}
