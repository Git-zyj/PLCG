/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max((max(var_8, var_10)), ((min(var_5, var_7))))), (max((max(var_10, 1)), (max(0, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((min(((min(((max(8701, 1))), (max(105, 2931516545))))), (min(((min(1266605994, var_5))), (min((arr_2 [i_0] [i_0] [i_0]), var_11)))))))));
                var_18 |= (max(((max(((min(1, 17))), (max((arr_1 [i_1]), -6534273029389802220))))), (max((min(var_1, 10197406533850088120)), ((min((arr_1 [i_1]), (arr_1 [i_1]))))))));
            }
        }
    }
    var_19 *= (min((min((max((-127 - 1), var_2)), (min(var_9, 6881168489683875162)))), ((min(((min(9466, 106))), (min(var_6, var_8)))))));
    #pragma endscop
}
