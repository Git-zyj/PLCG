/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = var_5;
                arr_6 [i_0] [i_0] [i_1] = (arr_2 [i_0]);
                var_21 *= ((+((var_6 ? ((min((arr_5 [i_1 + 1] [1] [1]), var_8))) : (arr_4 [i_0] [i_1 + 1])))));
                var_22 |= ((0 ? (((((-(arr_4 [i_0] [i_1])))) ? (arr_5 [i_0] [i_1 - 3] [i_1 - 2]) : 62627)) : ((((-1 ^ (arr_5 [i_0] [i_0] [0])))))));
                var_23 = (((((min(var_7, var_17)))) || (((min((arr_5 [i_1 + 2] [i_1] [i_0]), (arr_1 [i_0] [5])))))));
            }
        }
    }
    var_24 ^= ((((((var_0 ? var_1 : 16827707609588887575)))) ? var_8 : (((((-557316559 ? -1 : var_19))) ? var_4 : var_19))));
    var_25 = var_12;
    var_26 = var_7;
    #pragma endscop
}
