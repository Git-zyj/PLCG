/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(((var_16 ? var_13 : var_3)), (~0)))) ? (min(8925087163580858393, 1173026475)) : (((var_10 >> (var_4 - 89)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 ^= ((~((((var_15 ? (arr_1 [i_0 - 1]) : 255))))));
                arr_5 [i_1] = (!8925087163580858384);
                arr_6 [i_0] [i_1] = (~var_1);
                arr_7 [i_0 - 1] = (((((((-6 + 2147483647) << (((arr_1 [i_1]) - 1611711520)))))) ? var_4 : (~0)));
            }
        }
    }
    var_19 = (((((max(8925087163580858411, 11)) + (var_8 + 9521656910128693245))) + (((-8894369030332891361 + (var_2 + var_12))))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                arr_13 [i_2] = 125;
                arr_14 [i_2] [i_2] = ((((((0 ? (arr_8 [i_2]) : var_16)) >> ((((arr_8 [i_2]) && 3379766539))))) % ((((max(var_4, var_1)))))));
            }
        }
    }
    var_20 |= var_3;
    #pragma endscop
}
