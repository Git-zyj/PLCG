/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((((arr_3 [i_0] [i_1] [i_0]) ? var_12 : (arr_1 [i_0])))) || (arr_3 [12] [i_1] [i_1 + 2])));
                arr_5 [i_1] = (((((((var_15 ? 20 : 4))) ? 31214 : 1483029296186022920)) - (min((min(2799244943651959024, (arr_2 [i_1]))), ((max((arr_3 [i_0] [i_1] [i_0]), (arr_1 [i_0]))))))));
            }
        }
    }
    var_18 |= var_10;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [8] &= (min((((arr_8 [i_2] [i_2]) + 165)), (max(((31214 - (arr_8 [i_2] [i_2]))), 32))));
        arr_10 [8] |= 33;
        var_19 = min((((((var_6 + (arr_7 [13]))) * (4194303 + var_3)))), (((arr_6 [i_2] [i_2]) ? (min(1813935092110683862, 32)) : (arr_6 [i_2] [i_2]))));
        arr_11 [2] |= 54556;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = var_1;
        var_21 = ((((-33 ? (arr_13 [13]) : 1)) + (arr_8 [i_3] [12])));
    }
    #pragma endscop
}
