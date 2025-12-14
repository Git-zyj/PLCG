/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122869
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (var_11))))))) - (((((/* implicit */_Bool) var_9)) ? (2997254991643660595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_15 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
    var_16 *= ((/* implicit */unsigned long long int) var_5);
    var_17 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) var_5)), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_3)) - (51805)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10208894779048588960ULL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) == (var_1)))) : (((((/* implicit */int) (unsigned char)60)) * (((/* implicit */int) arr_3 [i_0])))))))));
        var_19 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2501))) : (var_9))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) min((var_3), (var_2)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (var_11) : (((/* implicit */long long int) arr_5 [i_1] [i_1]))))))) ? (((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_1])) == (((/* implicit */int) arr_0 [i_1] [i_1]))))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12716))))));
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (unsigned short)16447)))));
    }
}
