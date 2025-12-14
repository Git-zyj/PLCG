/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101435
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
    var_17 -= ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) var_13)))))));
        var_19 ^= ((/* implicit */signed char) var_5);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_20 = (~(((/* implicit */int) arr_4 [i_1])));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1])) != (arr_3 [i_1])));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((var_5) - (3202923679179561425LL)))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((7826072519066405997ULL) + (((/* implicit */unsigned long long int) var_2)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) var_0))) : (452294792))) : ((+(((/* implicit */int) var_11))))));
    var_23 = ((/* implicit */unsigned int) var_6);
}
