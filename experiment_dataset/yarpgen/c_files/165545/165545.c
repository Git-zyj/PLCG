/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(127, 65404));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = var_1;
                arr_4 [i_0] = -64088;
                var_20 = ((235 ? ((min((min((arr_0 [i_0]), var_0)), ((min(127, 229)))))) : ((min(var_7, (arr_0 [i_0]))))));
                var_21 -= 127;
            }
        }
    }
    #pragma endscop
}
