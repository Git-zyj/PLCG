/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105769
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((((/* implicit */int) var_15)) == (((/* implicit */int) var_8))))))) > (((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) arr_0 [13ULL] [i_0]);
        var_21 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_22 &= ((/* implicit */short) min((((/* implicit */int) ((short) (_Bool)0))), (min((((int) var_4)), (((((/* implicit */_Bool) arr_4 [i_1 + 1] [(unsigned char)14])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)0))))))));
        var_23 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) arr_5 [i_1 - 1])), (var_9))));
    }
    for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) /* same iter space */
    {
        var_24 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))) : (((unsigned int) var_3))))));
        var_25 += ((/* implicit */int) ((unsigned char) ((unsigned long long int) ((unsigned long long int) var_6))));
    }
}
