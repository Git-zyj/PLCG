/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_10, (~43)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_0;
                arr_7 [i_0] [i_0] |= ((((((var_8 ? var_8 : -8610455065750146034))) ? ((var_5 | (arr_3 [9] [i_0] [i_1 + 2]))) : ((min((arr_4 [i_0] [i_0] [0]), (arr_5 [i_0])))))) + 5541);
            }
        }
    }
    #pragma endscop
}
