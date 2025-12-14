/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-(min((min(var_13, var_2)), (var_16 || var_16))));
    var_20 = ((((min((min(-17, 12900341034021616178)), var_18))) ? var_10 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (1 > var_17)));
                arr_5 [i_0] [i_0] = (1 + 2962016152114411905);
            }
        }
    }
    #pragma endscop
}
