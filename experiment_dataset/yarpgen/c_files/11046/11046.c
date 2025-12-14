/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 64813));
    var_21 = (max(1022, 6714));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = ((-(arr_3 [i_0])));
                arr_4 [i_0] = (((1 ? 1 : 1)) + (1 && 7));
                arr_5 [3] [i_0] = ((((((min(1754920901, var_19)) * (arr_0 [i_1 + 1] [12])))) / (min((min(var_11, var_16)), ((min(-5120982988948228200, var_12)))))));
            }
        }
    }
    #pragma endscop
}
