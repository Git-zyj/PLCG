/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (max(((var_3 ? (~-1) : -4)), ((((arr_0 [i_0]) || (arr_5 [i_0]))))));
                var_19 = (min(var_19, ((((((min(var_11, (arr_3 [i_0] [i_1] [i_0]))))) ? (arr_1 [9]) : var_5)))));
                var_20 += ((-((~(arr_0 [i_0 - 2])))));
            }
        }
    }
    #pragma endscop
}
