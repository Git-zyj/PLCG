/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(4, 1);
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = ((((((min((arr_2 [i_0]), 1)) ? (((arr_5 [i_0]) ^ var_3)) : ((max(1, (arr_3 [i_0] [i_0] [i_0]))))))) ? (arr_4 [i_0]) : var_7));
                    arr_7 [i_1] = 118;
                }
            }
        }
    }
    var_18 = (min((min((((var_12 + 2147483647) << (var_14 - 1))), (var_4 - 56))), (((((0 ? var_7 : 1))) ? (1 || 1977691931) : ((var_9 ? 1 : var_8))))));
    #pragma endscop
}
