/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_8, var_9));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [4] &= (((arr_4 [i_1] [i_1 - 2] [i_0]) ? (max((~-3786213491632666591), (10062046233871872467 | -6539346069525153245))) : var_9));
                var_17 = ((~(min(0, 1074362341))));
                var_18 = (min(var_18, var_8));
            }
        }
    }
    #pragma endscop
}
