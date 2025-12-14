/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 |= (var_8 - 1016279677);
    var_12 = (!(((2129306285 ? var_3 : ((var_3 ? var_4 : 3882827038))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (arr_1 [i_1 + 1])));
                arr_6 [i_0] = (((arr_1 [i_0]) ? (((~(arr_5 [i_1 - 2] [i_1 - 1])))) : -1821161487281283302));
                arr_7 [i_1] [i_1] [i_0] = ((((((arr_5 [i_1] [i_0]) ? (arr_5 [i_1 - 3] [i_1 - 2]) : ((var_7 >> (var_2 - 3605809713)))))) <= (((min(1414406444, 0)) & (((1 ? 15 : var_9)))))));
            }
        }
    }
    #pragma endscop
}
