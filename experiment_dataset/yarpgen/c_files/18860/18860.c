/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (((39373142901695632 <= 16232541495758587754) >> ((((+(min((arr_1 [i_0]), var_8)))) + 1397584495))));
                arr_5 [i_0] [i_0] [2] = 1;
                arr_6 [i_1] [i_0] = (min(39373142901695628, 3316125644));
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
