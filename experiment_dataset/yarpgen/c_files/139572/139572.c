/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= 18446744073709551615;
    var_18 = (max(var_18, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (max((max((min((arr_1 [i_0]), (arr_2 [i_0] [i_0] [i_0]))), (min((arr_3 [i_0] [i_1]), 17365043596880569939)))), -18446744073709551613));
                var_20 = var_4;
                var_21 = (min(var_21, ((max(((-(min((arr_0 [16]), var_3)))), (min((arr_2 [i_0] [1] [i_1]), (min((arr_3 [i_0] [i_1]), var_11)))))))));
            }
        }
    }
    var_22 = var_8;
    var_23 = var_13;
    #pragma endscop
}
