/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (max(((((min((arr_0 [i_0] [5]), (arr_3 [i_0])))) ? (((var_1 ? (arr_3 [i_0]) : var_13))) : (min(var_10, -899)))), var_9));
                arr_5 [i_0] = (arr_0 [i_0] [i_0]);
                var_21 += ((min(var_13, var_2)));
            }
        }
    }
    var_22 = (min((((var_2 > ((var_2 ? var_15 : var_11))))), (~var_9)));
    #pragma endscop
}
