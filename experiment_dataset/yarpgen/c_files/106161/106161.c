/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = (min(var_16, var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_17 *= 0;
                var_18 += ((((min(-534226243089939391, (arr_1 [i_0 + 2])))) ? (((((((((arr_4 [16]) < (arr_5 [i_0] [8]))))) >= (arr_2 [i_0 + 2]))))) : (max((!var_5), (-27937966520881106 / -534226243089939393)))));
            }
        }
    }
    #pragma endscop
}
