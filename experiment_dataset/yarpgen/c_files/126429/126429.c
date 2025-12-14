/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max((480 == 30518), (max(var_0, var_8)))));
    var_11 = ((!((max(var_3, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (arr_0 [i_0] [i_0 - 2]);
                var_12 = (arr_1 [i_0 - 2]);
                arr_8 [i_0] [1] [i_0] = (arr_3 [i_0]);
            }
        }
    }
    var_13 = var_4;
    var_14 = (min(var_14, var_5));
    #pragma endscop
}
