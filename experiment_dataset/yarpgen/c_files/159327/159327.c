/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (max(((((arr_4 [i_0] [i_1 + 1] [i_1 - 1]) ? (arr_1 [19] [i_1 - 1]) : (arr_4 [i_0] [i_0] [i_1 + 1])))), -5439795759208173939));
                var_14 = ((((((arr_1 [i_0] [i_1]) * (!var_10)))) ? ((701 ? 0 : 8708165215598145539)) : (((2388261400 << (8738692307254646327 - 8738692307254646307))))));
            }
        }
    }
    var_15 = ((var_4 || ((max((var_3 * 48739), var_7)))));
    #pragma endscop
}
