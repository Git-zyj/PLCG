/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-1 ? var_6 : var_3));
    var_14 = (min(var_7, ((min(1, 6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((var_11 ? (((max(1, 1)))) : ((((var_9 ? var_2 : var_6)) - (((var_0 ? 119 : var_3)))))))));
                var_16 = ((((max(((var_6 ? var_1 : (arr_0 [18]))), (min(var_3, (arr_0 [i_1])))))) ? (min(((1221418114 ? 1 : var_10)), (arr_1 [i_0] [i_1]))) : ((max(((4294967275 ? 1 : var_1)), (arr_3 [i_0]))))));
            }
        }
    }
    var_17 = (min(var_17, ((((max(25, var_5))) / var_8))));
    #pragma endscop
}
