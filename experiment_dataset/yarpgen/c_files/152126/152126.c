/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_16, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (max(var_0, -32759));
                var_21 = (((arr_4 [i_0]) == 32754));
                var_22 = (i_0 % 2 == 0) ? (((-(max((((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - 7751295159683917908)))), (((var_13 < (-127 - 1))))))))) : (((-(max((((arr_1 [i_0] [i_0]) << (((((arr_1 [i_0] [i_0]) - 7751295159683917908)) - 9014089595266745549)))), (((var_13 < (-127 - 1)))))))));
                var_23 = ((((var_17 ? -134217727 : (arr_2 [i_0])))) && (((-(arr_4 [i_0])))));
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
