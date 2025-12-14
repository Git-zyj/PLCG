/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 9223372036854775807;
    var_17 += ((var_10 / (~var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = max((~9223372036854775807), (((~(-9223372036854775807 - 1)))));
                var_19 = max((((max((arr_3 [i_1]), (arr_5 [i_0] [i_0]))) * (arr_2 [i_0] [i_1 - 1]))), (arr_5 [i_0] [9]));
            }
        }
    }
    var_20 = ((((128 ^ 9223372036854775807) ^ var_3)));
    #pragma endscop
}
