/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 598449897484207855;
    var_20 = ((!3424970467) ? ((max(3424970467, 21))) : ((-var_9 ? var_7 : 0)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (-(((3424970457 / (arr_2 [i_0])))));
                arr_7 [i_0] [i_0] = ((min((((arr_3 [i_0]) ? 3424970457 : 65533)), (var_10 && 3424970467))));
                var_21 = 2147483616;
                var_22 ^= ((-((-(((arr_0 [i_0]) / -22980))))));
            }
        }
    }
    var_23 = var_13;
    var_24 = (min(7, 3424970475));
    #pragma endscop
}
