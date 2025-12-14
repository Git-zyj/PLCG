/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((arr_3 [i_0]), ((1819160729 ? 16673857365978059247 : 91))));
                var_19 = (((arr_3 [i_0]) ? ((((!((max((arr_2 [i_1]), -64))))))) : 8887836658123084548));
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
