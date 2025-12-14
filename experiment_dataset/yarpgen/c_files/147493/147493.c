/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (((arr_2 [i_0] [i_1] [i_0]) ? ((max((arr_2 [i_0] [i_0] [i_1]), (arr_2 [i_0] [i_1] [i_0])))) : ((1 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_1 [i_0])))));
                arr_5 [i_0] [i_1] [i_0] = (max(17334, (!-1)));
                var_20 = ((((-(arr_4 [i_1])))));
            }
        }
    }
    var_21 = var_8;
    var_22 = (-1818514369 | 51638);
    #pragma endscop
}
