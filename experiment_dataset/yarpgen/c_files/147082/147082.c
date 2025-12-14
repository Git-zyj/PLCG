/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_18 |= ((+((max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1]))))));
                arr_5 [i_1 - 1] = (((-5781281575156359091 ? 252 : (max(4294967295, -6072743953947105151)))));
                var_19 = (((min((arr_4 [i_1 + 2]), (arr_4 [i_1 + 2])))) ? (arr_4 [i_1 + 1]) : 65330);
                var_20 = (((min((arr_4 [i_0 + 1]), -98)) ^ ((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2]))))));
                arr_6 [i_0] [i_1] = ((+(min((((arr_3 [8] [i_1]) ? (arr_4 [i_0]) : (arr_4 [i_0]))), 60931))));
            }
        }
    }
    var_21 -= ((var_14 ? var_17 : ((max(var_14, (max(var_3, 2)))))));
    var_22 += (var_13 ^ var_6);
    #pragma endscop
}
