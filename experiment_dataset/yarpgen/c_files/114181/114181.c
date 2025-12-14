/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((((((var_8 ? 63897 : var_4))) ? ((var_10 ? 7975017756128142564 : 10671369341877835293)) : (((var_11 ? 5 : -1445849027)))))) ? var_4 : ((((-39 ? 11 : var_2)) / -10))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = ((((max(4194303, -4469))) ? ((23580 ? 10671369341877835293 : 2557836598201136024)) : var_5));
                    arr_9 [i_0] [i_1 - 2] [i_0] [i_1 - 2] = ((var_9 ? (6575088096974701264 != 32569) : ((((max(var_0, var_11))) ? ((-4469 ? 15888907475508415594 : -15901)) : (-16628 | 36136)))));
                }
            }
        }
    }
    var_14 = var_2;
    var_15 = 2671916921;
    #pragma endscop
}
