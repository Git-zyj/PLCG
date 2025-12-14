/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (+(((59085 == 15872) ? (!var_4) : ((31153 ? 3677681538 : 6451)))));
    var_19 = (((0 > 6450) ^ 0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((min((min(var_10, (arr_4 [i_0]))), ((-(arr_0 [i_1]))))));
                arr_9 [i_0 + 3] [i_1] = (((~9187343239835811840) == ((max((((arr_6 [i_0]) >> (var_5 - 14415))), (((arr_6 [i_1]) ? var_5 : (arr_6 [i_1]))))))));
                arr_10 [i_0] [8] = (min((-9223372036854775807 - 1), 988338203));
                arr_11 [i_0] [i_0] [i_1] = ((((((arr_5 [6]) ? var_8 : var_10))) ? (max(var_2, ((var_8 ? var_5 : (arr_4 [i_1]))))) : 1));
            }
        }
    }
    #pragma endscop
}
