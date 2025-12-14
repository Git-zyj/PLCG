/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 = (((((-(1 || 19)))) ? (min((((var_3 ? (arr_2 [i_0]) : var_9))), (((arr_1 [i_0]) ? (arr_5 [i_0]) : (arr_1 [i_0]))))) : (arr_6 [i_0] [i_0] [i_1] [i_2])));
                    var_11 = (max(var_11, ((((!5704316652777680546) ? ((((!(!69169680403487178))))) : 9223372036854775807)))));
                }
            }
        }
    }
    var_12 = 0;
    var_13 = var_7;
    #pragma endscop
}
