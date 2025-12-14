/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 = (max(var_21, (((-(((((var_0 ? var_19 : 131071))) ? var_16 : (max(3136656234, var_3)))))))));
    var_22 = ((131072 ? (((((var_2 ? var_16 : var_18))))) : (~var_18)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_23 = ((+(((arr_2 [i_1 + 2] [i_1] [i_1]) ? (arr_2 [i_1 + 1] [i_1] [i_1]) : -32744))));
                var_24 += ((((max(131087, -131071))) ? (((((-1686497994 ? (arr_0 [i_0]) : var_12))))) : (3645669682 | 4092823856994820025)));
            }
        }
    }
    #pragma endscop
}
