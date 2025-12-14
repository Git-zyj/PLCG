/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (var_4 * -1);
    var_13 -= ((+(max((~35184371040256), var_3))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 &= (max(((min(-32130, 40969))), (max(-1244877145, ((-8053 ? (arr_2 [i_1]) : (arr_0 [i_1] [i_1])))))));
                var_15 = (-(((!1) ? (((arr_0 [i_0] [i_1]) ? -32130 : (arr_0 [i_0] [i_1]))) : (!11))));
            }
        }
    }
    var_16 = var_5;
    var_17 = ((((((~var_5) | var_9))) ? (!6163445049359490076) : (~14795)));
    #pragma endscop
}
