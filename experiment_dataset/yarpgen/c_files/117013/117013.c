/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_17));
    var_21 = ((var_17 ? (min(((var_8 ? var_6 : var_3)), ((min(0, 0))))) : var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((((var_12 ? (arr_3 [i_1]) : (arr_0 [i_0])))), -65535));
                var_22 = ((-79 ? 1255001878 : 78));
            }
        }
    }
    #pragma endscop
}
