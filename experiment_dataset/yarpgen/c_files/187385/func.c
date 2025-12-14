/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187385
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
    var_19 += ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))), (max((((/* implicit */long long int) var_0)), (((((var_6) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) min((4181957275U), (((/* implicit */unsigned int) (unsigned char)0))));
        var_20 = ((/* implicit */_Bool) ((unsigned char) var_12));
        var_21 ^= var_3;
        var_22 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((+(var_16)))));
        var_23 = ((signed char) arr_1 [i_0]);
    }
    var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_16)))) ? ((~(0ULL))) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min((1U), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)78))))))))));
    var_25 = ((/* implicit */long long int) (unsigned char)78);
}
