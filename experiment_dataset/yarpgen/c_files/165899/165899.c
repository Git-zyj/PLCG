/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 88;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((var_17 ^ 27428) + (((27423 - (arr_1 [2] [i_1])))))))));
                var_22 = (((((arr_1 [i_0 - 2] [i_1]) >> (((arr_1 [i_0 + 1] [i_1]) - 98)))) << ((((38128 | (arr_1 [i_0 + 1] [i_1]))) - 38116))));
            }
        }
    }
    var_23 = var_19;
    #pragma endscop
}
