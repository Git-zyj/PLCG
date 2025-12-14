/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (~249);
                var_11 = ((var_1 < (((((min((arr_3 [i_1] [i_1]), 1)) != 7))))));
            }
        }
    }
    var_12 = (((((((var_2 ? 255 : var_7))))) >= var_1));
    var_13 = var_8;
    #pragma endscop
}
