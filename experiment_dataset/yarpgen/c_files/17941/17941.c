/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = -8192;
                var_12 = (arr_2 [i_1]);
            }
        }
    }
    var_13 = max(var_7, ((((max(var_8, -4913523910365665912)) <= (max(var_3, var_8))))));
    var_14 = var_2;
    #pragma endscop
}
