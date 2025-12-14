/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166570
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)21632))))) : (min((0U), (((/* implicit */unsigned int) (_Bool)1))))));
        arr_4 [i_0 - 1] = ((/* implicit */signed char) ((long long int) (unsigned char)255));
        var_19 -= ((/* implicit */unsigned char) min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned char)234))));
        arr_5 [i_0] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)44)) ? (var_12) : (((/* implicit */int) (signed char)42))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)233)))) : (min((((((/* implicit */int) (_Bool)0)) << (((arr_3 [i_0]) - (1642217041))))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-118)) && ((_Bool)1))))))));
        var_20 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0 + 3])))) ? ((~(max(((-9223372036854775807LL - 1LL)), (205335115409232508LL))))) : (((/* implicit */long long int) max((((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (unsigned char)212)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_0 - 1])))))))));
    }
    var_21 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? ((-(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) max(((unsigned short)43920), (((/* implicit */unsigned short) var_11)))))))), (min((((((/* implicit */_Bool) (unsigned short)30260)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (523264ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (var_4))))))));
}
