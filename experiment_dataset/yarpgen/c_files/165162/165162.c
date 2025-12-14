/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min(((max((max(-7079277655844579306, var_13)), (min(var_13, var_6))))), (max((max(var_5, var_8)), (min(var_14, var_16))))));
    var_18 = (max((max((max(156, 0)), ((min(var_1, var_1))))), (max(((min(var_5, -2016205218))), (min(var_7, var_2))))));
    var_19 = (max(((max((max(var_12, 180)), ((max(1152782439, -79)))))), (min(((max(var_3, var_6))), (min(var_16, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] |= (max(((min((min(163, (arr_1 [i_0]))), (max((arr_0 [i_0]), var_9))))), (min(((max((arr_2 [i_0] [i_0]), (arr_1 [i_0])))), (max(-5926209072345676079, var_14))))));
                var_20 &= (min((max((min(var_14, var_11)), ((max(var_6, var_3))))), (max((max((arr_1 [i_0]), 15197224525381395495)), ((max(-1152782440, var_15)))))));
            }
        }
    }
    #pragma endscop
}
