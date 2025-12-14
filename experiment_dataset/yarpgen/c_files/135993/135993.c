/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 ? (min(var_4, (~var_10))) : (((((min(-110, 136))) >> 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (max((max(((((arr_2 [i_0]) & 1))), ((-5822 ? 2871351238 : var_2)))), (arr_0 [i_0])));
                arr_7 [i_1] [i_0] = (arr_4 [i_0] [i_0] [i_1]);
                var_15 = (!224);
                arr_8 [i_0] [i_1] = min((((!(var_4 & 1)))), (max(((140737354137600 ? 1 : -1)), 1)));
            }
        }
    }
    #pragma endscop
}
