/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = (var_0 - var_0);
    var_14 = var_2;
    var_15 = (((((35036 + var_3) << (var_2 - 62))) % var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_2;
                arr_6 [i_0] = (max(((((arr_1 [i_0 - 2]) & var_1))), (((arr_1 [14]) & var_0))));
                arr_7 [i_0] [i_0] [i_1] = (((0 != 110) ? -var_3 : (arr_4 [i_0] [i_0] [i_0 - 1])));
            }
        }
    }
    #pragma endscop
}
