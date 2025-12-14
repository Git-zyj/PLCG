/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(13812197692261732276, 1))) ? (-2147483647 - 1) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((+(((((arr_5 [i_1] [i_0]) ? 9223372036720558080 : 0)) ^ (max((arr_2 [i_1]), var_0))))));
                var_13 = (max(var_13, ((((max((~var_3), (~1499588070))) % (arr_2 [6]))))));
            }
        }
    }
    #pragma endscop
}
