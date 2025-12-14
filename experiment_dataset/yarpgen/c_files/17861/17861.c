/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(((((max(2178168951, var_0))) ? var_0 : var_5)), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((((min(0, var_5))) / (min(((max(55839, 64439))), ((0 ? 18346 : 50706))))));
                arr_8 [i_1] [i_1] = ((65528 ? (arr_5 [i_1]) : (((-918351697 ? var_6 : 64439)))));
            }
        }
    }
    #pragma endscop
}
