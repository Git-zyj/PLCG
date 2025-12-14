/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_0;
    var_21 = ((((((~var_11) == (((var_6 ? var_4 : var_9)))))) ^ ((~((max(var_5, var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 = (((((min(-368051577239551690, 137438953471))) ? var_12 : (var_8 == var_5))));
                    arr_9 [i_0] = var_12;
                    var_23 = ((((((max(var_12, var_9))) ? ((var_10 ? (arr_8 [i_0] [i_0] [i_2] [1]) : 21)) : ((-(arr_7 [14] [i_1] [i_1]))))) ^ ((max((arr_4 [12]), -1)))));
                    arr_10 [i_0 + 4] [i_0] [17] [22] = (arr_5 [i_2] [i_0] [i_0] [23]);
                    var_24 = var_7;
                }
            }
        }
    }
    #pragma endscop
}
