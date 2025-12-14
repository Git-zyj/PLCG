/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 163;
    var_11 += (((((((max(116, 31))) ? var_9 : (((var_0 ? 163 : 140)))))) ? (((!var_7) ? var_6 : ((92 ? var_0 : var_5)))) : (var_6 == 92)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((min(var_0, var_2))) ? (((arr_2 [i_1 - 2] [i_0 - 2]) - ((((arr_4 [6] [6]) - (arr_4 [i_0] [i_1])))))) : (((((139 ? var_5 : var_4)) + (1 + 8)))));
                var_12 *= ((((max((arr_0 [i_1 + 1] [i_0 + 1]), (arr_1 [i_0 + 2])))) ? ((((min((arr_0 [i_0] [i_1]), var_0))) - (139 && 901981023725638260))) : ((147 ? (arr_4 [i_0 + 1] [i_1 + 1]) : 62))));
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
