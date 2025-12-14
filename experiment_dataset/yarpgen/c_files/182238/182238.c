/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((max(9978601773904947557, var_1)) / var_8))) ? (((!(!-1)))) : (var_1 - var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (-5456768833514401552 ? (((arr_1 [i_0] [i_0]) ? (arr_3 [i_1] [i_1]) : (var_2 + var_11))) : (((~((0 << (2965178454 - 2965178428)))))));
                arr_6 [i_1] [i_1 + 2] = ((73 != (((arr_3 [i_1] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_1 + 2] [i_1])))));
            }
        }
    }
    #pragma endscop
}
