/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 > (((~394411313) ^ (max(3, 90))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((max((arr_0 [i_0 - 1]), 16114782893398255844)));
                var_19 = (arr_1 [i_0 - 1]);
                var_20 = 3737684570055041631;
                var_21 = (arr_4 [i_1] [i_0] [i_0]);
                var_22 *= 14709059503654509982;
            }
        }
    }
    #pragma endscop
}
