/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (var_8 % var_10)));
    var_13 = 562949953413120;
    var_14 = (min((((((min((-2147483647 - 1), var_11))) || (-62 / 2910194937339410290)))), (max(1023, -62))));
    var_15 |= 2910194937339410290;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_16 -= 0;
                arr_5 [i_1] [i_1] [i_1] = (((((min(var_1, var_10)))) * (max(-2910194937339410290, 562949953413131))));
                var_17 = ((+(((0 && var_10) ? (~35182224605184) : 0))));
            }
        }
    }
    #pragma endscop
}
