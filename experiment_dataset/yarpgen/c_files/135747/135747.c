/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 *= -8555;
                var_16 = (max(var_16, ((min((!5958568895310721171), (min((arr_2 [i_1] [i_0]), var_3)))))));
                arr_4 [i_1] &= (arr_2 [i_0] [i_0]);
                var_17 -= ((((min(8554, (arr_1 [i_0])))) ? (min(var_7, (arr_2 [i_1] [11]))) : (((1391864488257512200 ? 8550 : 60)))));
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
