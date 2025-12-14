/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= 970399430;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = ((2375981308735071028 ? 97 : 0));
                    var_17 = (min(var_17, ((max((arr_8 [2] [4] [i_2]), (((-127 - 1) ? (((arr_6 [i_1] [i_1] [i_1]) ? var_0 : 30286)) : (var_12 > 0))))))));
                }
            }
        }
    }
    #pragma endscop
}
