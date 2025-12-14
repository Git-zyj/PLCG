/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((max(var_9, var_6)) ? var_9 : var_12)), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [1] [1] [i_0 + 1] = (1 ^ var_3);
                arr_5 [i_1] = (((arr_1 [i_0 + 1]) - ((max((!1), (max(var_11, 0)))))));
            }
        }
    }
    #pragma endscop
}
