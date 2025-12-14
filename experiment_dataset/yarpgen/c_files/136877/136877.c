/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((var_7 + 2147483647) >> (var_13 - 61064))), ((min((var_3 >= var_11), var_14)))));
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((((min(var_11, (arr_0 [i_0])))) & (((var_7 + 2147483647) >> (var_11 + 122)))));
                arr_5 [i_0] [i_1] [i_0] = ((var_7 <= (min((var_2 * var_6), ((min(var_9, var_10)))))));
            }
        }
    }
    #pragma endscop
}
