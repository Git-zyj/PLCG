/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((31 ? 58 : var_3))) ? ((202 ? var_3 : var_13)) : (((18446744073709551615 ? var_12 : var_7)))))) ? (((((1852692279601868468 ? var_0 : var_12))) ? var_3 : (((var_0 ? var_12 : var_2))))) : ((((((var_10 ? 3074788912 : 58))) ? ((var_12 ? var_12 : var_1)) : ((2267240508 ? 189 : var_13)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 ^= ((((((((var_4 ? (arr_5 [i_0] [i_0]) : 194))) ? (((arr_5 [i_0] [i_0]) ? (arr_2 [2] [i_1]) : 4969938536474193678)) : ((((arr_8 [i_0] [8]) ? var_9 : var_15)))))) ? ((((((33292288 ? 4969938536474193657 : (arr_7 [i_0] [i_1] [4])))) ? ((((arr_2 [8] [8]) ? var_10 : (arr_1 [i_0])))) : (arr_7 [i_1 - 2] [i_1 - 1] [16])))) : ((var_11 ? ((58 ? 0 : -1100966761)) : ((var_11 ? 5186287538954766574 : var_11))))));
                    var_18 = (max(var_18, ((((((60 ? ((197 ? (arr_3 [i_2]) : var_12)) : ((13476805537235357939 ? -19 : (arr_8 [i_0] [10])))))) ? ((((((var_7 ? var_4 : 63))) ? ((var_12 ? 55 : (arr_1 [2]))) : ((((arr_2 [14] [i_1]) ? 61 : (-127 - 1))))))) : (((((-1 ? 88 : var_4))) ? (arr_1 [i_1 - 1]) : 13476805537235357937)))))));
                }
            }
        }
        var_19 = (min(var_19, ((((((var_14 ? (arr_7 [12] [i_0] [12]) : (arr_1 [i_0])))) ? ((var_3 ? (arr_1 [i_0]) : var_5)) : ((var_15 ? (arr_7 [14] [i_0] [14]) : (arr_8 [i_0] [10]))))))));
    }
    #pragma endscop
}
