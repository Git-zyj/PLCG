/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136597
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_20 += ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 19U)) ? (((/* implicit */int) (unsigned short)782)) : (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) (unsigned short)21554)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) (unsigned short)65535))))))));
        arr_2 [6LL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((-(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_19))))))));
    }
    var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64768))) : (var_16)))) ? (max((((/* implicit */int) var_6)), (var_12))) : (((/* implicit */int) var_17)))), (((/* implicit */int) (signed char)38))));
    var_22 &= ((/* implicit */short) (_Bool)1);
}
