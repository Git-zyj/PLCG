/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13604
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 -= (((((_Bool)1) || (((/* implicit */_Bool) 1197965404)))) || (((((/* implicit */_Bool) var_12)) || (var_4))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_12))) : (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) ? (488531543U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) : (13U)));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_18)) ? (var_16) : (((/* implicit */int) (unsigned char)22))))));
            var_24 = ((/* implicit */short) 4294967284U);
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 5548780574494339265LL)) ? (((((/* implicit */_Bool) var_9)) ? (29ULL) : (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_5)))))))))));
            var_26 -= (unsigned char)156;
            var_27 = ((/* implicit */long long int) 4177440226U);
            var_28 |= ((/* implicit */_Bool) var_0);
        }
    }
    var_29 &= ((/* implicit */unsigned long long int) ((int) 12ULL));
    var_30 += ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)47091)) / (((/* implicit */int) (unsigned char)233))))) != (((((/* implicit */_Bool) 11ULL)) ? (3442930627U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) ? (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (18446744073709551606ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (-764648599)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_31 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (852036659U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) var_8)) ? (10062491467562577043ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_12)))));
}
