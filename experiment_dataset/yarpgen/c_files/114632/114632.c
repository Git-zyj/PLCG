/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((-(18868 && var_18)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_2] = ((((min((arr_0 [i_1] [i_2]), (arr_0 [i_0] [i_1])))) ? (((((-32767 - 1) && 32415)))) : (max((arr_8 [i_0] [i_1] [i_1] [i_2]), ((((arr_5 [i_0] [i_0]) || (-32767 - 1))))))));
                    var_20 *= (max((min(((1591078869417712600 ? var_12 : var_16)), (arr_8 [i_0] [i_0] [16] [i_0]))), ((~(min((arr_8 [i_1] [8] [0] [0]), 148))))));
                    var_21 |= ((327355758 ? (((!(arr_4 [i_0] [i_1] [4])))) : (((arr_4 [i_0] [2] [8]) >> (arr_4 [i_0] [i_0] [20])))));
                    var_22 = ((~((max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
