/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = 24168;
                arr_5 [i_1] [i_1] = (min(((((((min((arr_3 [i_1]), -73))) + 2147483647)) >> (4094 - 4071))), (((!((min((arr_0 [i_0]), (arr_3 [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
