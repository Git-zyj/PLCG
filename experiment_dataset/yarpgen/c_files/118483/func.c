/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118483
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_19 *= ((/* implicit */signed char) (_Bool)1);
        var_20 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)95)) ? (66584576) : (((/* implicit */int) (short)11))))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20)))))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (arr_3 [i_1 - 1]) : (((/* implicit */unsigned int) ((arr_5 [i_1] [i_1]) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned short)35384))))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1]))))))));
        var_22 = ((/* implicit */unsigned int) var_16);
    }
    var_23 = ((/* implicit */short) (-(min((((((/* implicit */_Bool) (short)-1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((((/* implicit */_Bool) (signed char)-113)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
    var_24 = var_16;
    var_25 = ((/* implicit */short) ((unsigned int) (_Bool)0));
}
