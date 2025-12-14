/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124442
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
    var_18 += ((unsigned char) var_16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((arr_1 [(short)14]) ^ (((/* implicit */unsigned long long int) 0U)))));
        var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [(short)5] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (short)8600)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1063903680424963378ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((unsigned int) var_5))));
        arr_5 [i_0] = ((short) ((((/* implicit */_Bool) 0U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) arr_7 [i_1] [i_1]);
        var_22 ^= ((short) min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])));
        arr_9 [(unsigned char)13] = arr_7 [i_1] [i_1];
        var_23 -= ((/* implicit */signed char) (~(max((((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)7]))) : (var_17))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_7)), (arr_8 [i_1]))))))));
        arr_10 [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_8 [i_1])))) ^ (((((/* implicit */int) arr_8 [i_1])) - (((/* implicit */int) arr_8 [i_1]))))));
    }
}
