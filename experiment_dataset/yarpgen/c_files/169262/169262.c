/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (arr_1 [i_1]);
                var_11 = ((!((-31398 != (arr_3 [i_0])))));
                arr_7 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                arr_8 [i_1] [i_0] = ((-((min(31398, var_2)))));
                arr_9 [i_0] = -20;
            }
        }
    }
    var_12 = ((-31398 & (min((var_3 & -9194851504922227389), var_7))));
    var_13 = -var_5;
    #pragma endscop
}
