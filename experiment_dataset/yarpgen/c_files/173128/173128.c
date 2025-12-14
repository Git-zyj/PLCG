/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min(-249131105, 249131104)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = (var_10 != var_10);
                    var_12 = ((((max(var_4, var_9))) ? ((min(var_4, (arr_1 [i_1 - 1])))) : (((5668575698850614696 == (arr_1 [i_1 + 1]))))));
                    var_13 = (arr_3 [i_0] [11] [i_2 - 3]);
                    var_14 = (710427862 / var_5);
                }
            }
        }
    }
    var_15 = var_6;
    var_16 = var_8;
    #pragma endscop
}
