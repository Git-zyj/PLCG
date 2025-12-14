/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 += (max((min((arr_0 [i_1 - 1] [i_1 + 1]), var_10)), -3835326144122945333));
                arr_4 [i_0] = ((!(9223372036854775781 - 9223372036854775764)));
                arr_5 [i_0] = (((((131071 <= 1) ? (var_1 && 9223372036854775781) : var_1)) - ((-((-9223372036854775793 ? 4248588240545060981 : 9223372036854775785))))));
            }
        }
    }
    var_15 = (min(var_15, var_5));
    #pragma endscop
}
