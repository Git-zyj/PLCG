/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((-((min((!53803), (var_12 >= var_18))))));
    var_20 ^= (min(var_9, (((var_17 | ((max(var_2, var_14))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = 30955;
                var_22 = ((((((arr_2 [i_1 - 1]) ? -var_10 : (arr_3 [i_0 + 1] [i_0] [i_1])))) ? ((-(arr_3 [i_0 - 1] [i_0 + 1] [i_1]))) : (~23586)));
                var_23 |= (arr_0 [i_1]);
                arr_5 [i_1] = (((arr_0 [21]) & (arr_1 [i_0] [i_0 - 2])));
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
