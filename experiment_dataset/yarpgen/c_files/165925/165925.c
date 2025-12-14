/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min(-var_14, var_13));
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 *= ((((((arr_1 [10]) ? -1898670257 : var_0))) && ((((((arr_2 [i_1] [i_0]) && (arr_2 [i_0] [i_0]))) ? var_3 : ((var_2 ? (arr_1 [1]) : var_7)))))));
                arr_5 [i_0] [i_1] = (((max((arr_2 [i_0] [i_0]), -32765))) << ((min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_0])))));
                var_21 = arr_0 [1];
            }
        }
    }
    #pragma endscop
}
