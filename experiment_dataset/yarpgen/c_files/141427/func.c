/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141427
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 ^= ((/* implicit */int) ((_Bool) ((0) != (((/* implicit */int) var_10)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((_Bool) var_13))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_6)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((/* implicit */int) (unsigned short)42457)) - (42447))))) | (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_21 = ((/* implicit */int) ((long long int) arr_2 [i_1]));
        arr_8 [i_1] = (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) var_18)))));
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1])) == (((/* implicit */int) arr_2 [i_1]))))) % (arr_4 [i_1])));
        arr_10 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_1]))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_14 [i_2] = 0;
            var_22 = ((/* implicit */unsigned short) ((var_8) || (((arr_1 [8]) || (((/* implicit */_Bool) var_18))))));
        }
        for (int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            arr_19 [i_3] = ((/* implicit */short) (~(((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) var_18))))));
            arr_20 [i_3] = ((/* implicit */unsigned short) ((arr_18 [i_3] [i_3] [i_1]) & (((/* implicit */int) arr_7 [i_1] [i_3]))));
            var_23 = ((/* implicit */long long int) arr_2 [i_3]);
            arr_21 [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_0)))) * (((/* implicit */int) var_3))));
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_24 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) != (((/* implicit */int) arr_12 [i_4] [i_1]))));
            arr_24 [i_1] &= arr_22 [i_1];
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_28 [i_5] = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (arr_27 [i_5] [i_5]) : (((/* implicit */int) arr_0 [15] [15]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46347))) + (0LL))) : (arr_25 [i_5] [i_5])));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_25 [i_5] [i_5])))) ? (max((((/* implicit */long long int) var_17)), (arr_25 [i_5] [i_5]))) : (min((arr_25 [i_5] [i_5]), (((/* implicit */long long int) (unsigned short)19308))))));
        arr_29 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5] [i_5]))) | ((+(var_4)))));
        var_26 = ((/* implicit */unsigned short) (~(var_13)));
    }
}
