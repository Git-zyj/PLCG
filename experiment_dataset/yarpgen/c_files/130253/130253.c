/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = -59;
                arr_6 [i_0] [6] = -73;
                var_21 = ((((min(((59 ? 1 : 157359372)), 72))) ? 11 : ((0 ? 1 : 4137607923))));
            }
        }
    }
    #pragma endscop
}
