/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108826
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
    var_17 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned char) var_2)), (var_8))), (((/* implicit */unsigned char) var_12))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_18 *= ((/* implicit */unsigned short) var_11);
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8505000310024670071LL))) == (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-96)))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)61597)) > (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) (unsigned short)33072)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-96))) : (min((((/* implicit */long long int) 2696878880U)), (281474976710655LL)))))));
        arr_2 [i_0 + 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)120)) >> (((((/* implicit */int) (signed char)77)) - (60)))));
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_1] [i_1])) >> (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned char) (unsigned short)65529)))));
    }
}
