/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176243
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
    var_18 |= ((((/* implicit */_Bool) (((~(var_4))) & (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_14))))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)5001)) & (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_17))))) : (((9223372036854775807LL) >> (((/* implicit */int) var_15)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_4 [(unsigned short)0] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0 + 1])));
        var_19 ^= ((((/* implicit */_Bool) (unsigned short)22305)) ? ((~(((/* implicit */int) (short)-5002)))) : (((/* implicit */int) var_15)));
        var_20 = arr_2 [i_0 - 1] [i_0];
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        arr_7 [i_1] |= ((/* implicit */_Bool) var_14);
        arr_8 [i_1] [i_1] = (((_Bool)1) ? (-9223372036854775796LL) : (((long long int) (+(((/* implicit */int) arr_3 [i_1]))))));
        var_21 = ((/* implicit */signed char) 188715839450717844ULL);
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_1 + 4])) : (((/* implicit */int) arr_3 [i_1 + 2]))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 3]))) : (2496583665105963731LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (((/* implicit */int) arr_3 [i_1 + 4])) : (((/* implicit */int) arr_3 [i_1 + 4])))))));
        arr_9 [i_1] [(unsigned char)12] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)62)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1 - 1]))) : (2181593340U))))));
    }
}
