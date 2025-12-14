/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132475
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
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_1)), (var_7)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [(unsigned short)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14081)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (unsigned short)51455)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1] [(unsigned short)8]))) : (arr_2 [i_0 - 2] [(short)9])))));
        var_21 -= ((/* implicit */unsigned char) var_15);
        var_22 += 4294967295U;
        var_23 &= ((/* implicit */unsigned long long int) (-(1618189463U)));
        var_24 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((13270798070528177972ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9)))));
        arr_8 [i_1] = ((/* implicit */long long int) var_1);
        var_25 ^= ((/* implicit */unsigned char) (short)3990);
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))) >> (((arr_5 [i_1] [i_1]) - (1752526491)))));
    }
}
