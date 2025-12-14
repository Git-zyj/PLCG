/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max((min(var_12, var_16)), (max(4189267039, var_18)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [16] [5] [i_1] = ((((min(62, (arr_2 [i_0] [i_1 + 1])))) >> (((arr_2 [i_0] [i_0]) + 88))));
                var_21 += arr_3 [i_0];
            }
        }
    }
    var_22 = (max(var_22, 105700257));
    var_23 |= var_14;
    #pragma endscop
}
