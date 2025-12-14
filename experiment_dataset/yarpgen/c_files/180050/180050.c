/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~253) ? 31378 : var_14));
    var_18 = 9578634148708548235;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 -= ((((227 ? 22 : 8)) << (((arr_3 [i_1] [i_1] [i_0]) - 1133171208))));
                var_20 = (min(var_20, (((((~(arr_1 [i_0]))) / ((~(arr_1 [i_0]))))))));
                arr_6 [i_0] = min((((arr_0 [i_0]) ? ((6375594764043222589 ? 1 : 8868109925001003386)) : (((min(1, var_12)))))), ((((arr_2 [1]) ? ((var_14 - (arr_1 [i_0]))) : -54))));
                var_21 *= (((min((((var_3 ? 16128 : 1567766105))), (~12440924258470054871))) | 106));
                var_22 = (max(var_22, (((-7299 ? (((((min(var_2, (arr_5 [10] [10] [i_1])))) ? (arr_3 [i_1] [i_1] [i_0]) : ((max(-19384, -30615)))))) : (1044480 | 1044465))))));
            }
        }
    }
    #pragma endscop
}
