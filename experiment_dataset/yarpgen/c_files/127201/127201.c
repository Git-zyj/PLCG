/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min((-9223372036854775807 - 1), ((max(var_17, 15)))));
                arr_7 [i_1] = (max((((max((arr_6 [i_0] [i_1]), var_9)) * (arr_5 [i_1]))), (((var_14 / (arr_4 [i_1]))))));
            }
        }
    }
    var_19 = (var_11 ^ var_11);
    var_20 = ((4762469974451227294 >> (((~var_13) + 1018156290))));
    #pragma endscop
}
