/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? (var_2 / 1024) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (var_4 <= 1);
                arr_6 [i_0] = ((((min(2649189540767874046, var_7)) / (arr_4 [i_0] [i_1] [i_1]))));
                arr_7 [i_0] [i_1] [i_0] = ((var_0 ? (((-(arr_2 [i_1] [i_1])))) : (((var_8 - var_2) ? ((max(1554299058, (arr_4 [i_0] [i_0] [16])))) : ((-32608 ? var_7 : 1443))))));
                arr_8 [16] = (max(7400840874094099177, (arr_2 [i_0] [i_1])));
            }
        }
    }
    var_12 = max(41346, -3671034927956461763);
    #pragma endscop
}
