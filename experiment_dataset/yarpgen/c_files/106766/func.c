/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106766
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */int) (unsigned char)204))));
        arr_4 [i_0 + 4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)109)), (((((/* implicit */int) var_15)) | (((/* implicit */int) (unsigned char)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_12)) : (var_9)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)9329)) : (var_3))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)14012))))), ((unsigned char)4))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)81))))))) ? (((((/* implicit */_Bool) (short)9329)) ? (16215642043866255592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)22300)) : (((/* implicit */int) (unsigned short)24411))))))))));
    var_20 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_18)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_18)))) - (((/* implicit */int) var_10))));
}
