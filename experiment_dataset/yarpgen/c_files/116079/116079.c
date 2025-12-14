/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max(var_7, ((((var_6 == var_4) < (var_2 && var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((~(~3362725708495282374))) ^ (2319818751 ^ 2319818750));
                arr_5 [i_0] &= -3725343483601371766;
                var_12 = ((+(min((~2319818732), (var_4 > -21660)))));
                var_13 *= min(2319818759, 8307562668205823866);
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
