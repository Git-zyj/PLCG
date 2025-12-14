/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_5));
    var_16 *= (min(var_2, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_0]);
                arr_5 [i_0] = (min(1, ((~(((arr_2 [i_0]) >> (((arr_1 [i_1] [i_0]) - 1619723918))))))));
            }
        }
    }
    var_18 = (max(var_18, (((1 > (min((var_11 ^ var_3), var_6)))))));
    #pragma endscop
}
