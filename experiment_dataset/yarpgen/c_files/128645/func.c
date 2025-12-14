/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128645
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
    var_14 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) arr_0 [i_0] [i_0 - 3]);
        var_16 = ((/* implicit */short) (~(((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (max(((-(arr_4 [(short)12]))), (((((/* implicit */_Bool) arr_5 [i_1])) ? ((~(var_2))) : (arr_4 [6LL])))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)16979)), (min((var_1), (var_12)))))) ? (((((/* implicit */int) arr_5 [i_1])) >> (((arr_3 [i_1]) - (6931737207561420940LL))))) : (((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 1048575LL)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned char)236))))) : (((/* implicit */int) (unsigned char)52))));
        var_20 = ((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [i_1] [(short)1])))));
        var_21 = ((/* implicit */short) var_10);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 -= ((/* implicit */long long int) arr_2 [2ULL]);
        var_23 = ((/* implicit */_Bool) arr_1 [i_2]);
    }
    var_24 = var_8;
}
