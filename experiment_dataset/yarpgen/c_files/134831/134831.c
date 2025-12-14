/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134831
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
                arr_5 [i_0] = ((-(arr_3 [i_0] [i_0] [i_0])));
                arr_6 [i_0] = (((-15853 ? 36028797018963968 : 1)));
                arr_7 [i_0] = var_5;
            }
        }
    }
    var_11 = (((((((max(var_5, var_1)) == 1)))) <= (((~var_5) ? (var_9 | var_10) : ((var_1 ? var_1 : var_9))))));
    var_12 = var_3;
    #pragma endscop
}
