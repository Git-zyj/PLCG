/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108845
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
    var_11 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)100));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)100)) ? (0ULL) : (((/* implicit */unsigned long long int) -5682059094970616050LL))))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))));
        arr_4 [i_0] [(short)6] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned char)146)) * (((/* implicit */int) (signed char)-77))))));
        var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-57)) ? (-1606677732) : (((/* implicit */int) (_Bool)0))))) ? (var_8) : (((((/* implicit */int) (unsigned char)102)) >> (((((/* implicit */int) (signed char)-112)) + (122)))))))) : (max((((/* implicit */long long int) (short)-17726)), (-7449618479098790423LL)))));
    var_15 = ((/* implicit */short) ((((unsigned int) var_0)) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (var_3))))))))));
    var_16 = ((/* implicit */unsigned int) var_2);
}
