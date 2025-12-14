/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (((((var_2 * var_15) * 47311031)) % (var_0 > var_3)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((max(((max(var_9, var_16))), (min(var_15, var_18)))) << ((((arr_2 [2] [i_1] [i_1 + 1]) > 2055830004)))));
                arr_4 [8] [8] = ((!((((arr_2 [i_0 + 1] [i_1 + 2] [i_1]) ? (arr_2 [i_0 + 1] [i_1 - 1] [i_1]) : var_1)))));
                var_21 = (max(var_21, (((~(max((min(4294967285, (arr_3 [i_0 + 1] [i_1 + 2] [i_1 + 2]))), 4294967285)))))));
            }
        }
    }
    #pragma endscop
}
