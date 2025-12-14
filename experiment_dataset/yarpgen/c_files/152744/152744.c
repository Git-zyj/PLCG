/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = (min(4, ((4294967291 ? ((0 ? var_16 : 0)) : 1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = (((((0 ? 345928023 : 1))) ? (((arr_2 [i_0 - 1] [i_1] [1]) ? (arr_2 [i_0] [i_1] [i_0 - 1]) : (arr_0 [i_1]))) : ((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : 31)))));
                var_23 = (min((arr_1 [i_0 - 1]), ((((arr_3 [18] [i_0 + 1] [i_0]) ? (arr_3 [i_0] [i_0 - 1] [i_0 + 1]) : (arr_3 [i_0 + 1] [i_0 - 1] [i_0]))))));
                var_24 = (((arr_2 [i_0] [i_0] [i_1]) ? 1 : (max((arr_1 [i_0 + 1]), ((1 ? 4 : -52))))));
                arr_4 [16] = 5;
            }
        }
    }
    #pragma endscop
}
