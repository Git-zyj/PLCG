/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((max((0 ^ var_12), ((min((arr_2 [i_2]), (arr_2 [i_0])))))))));
                    var_15 *= ((((((((arr_1 [i_2]) >= (arr_1 [2]))))) >= var_4)));
                }
            }
        }
    }
    var_16 = 16382;
    var_17 = (min((~var_0), var_2));
    #pragma endscop
}
