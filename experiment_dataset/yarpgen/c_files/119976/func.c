/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119976
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */long long int) var_10);
        var_18 = ((/* implicit */_Bool) var_0);
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = (-(((/* implicit */int) min((max((arr_1 [i_1]), (((/* implicit */unsigned short) var_13)))), (arr_1 [(_Bool)1])))));
        var_19 = ((((/* implicit */_Bool) min((arr_2 [i_1]), (arr_2 [i_1])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (arr_2 [i_1])))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)14336)) ? (((/* implicit */int) (short)14336)) : (((/* implicit */int) arr_3 [i_1]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14327)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_0 [i_1]))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_1]), ((unsigned short)14652))))) : (arr_2 [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) + (6059294339783729625LL)))) ? (((/* implicit */int) arr_1 [i_1])) : (((int) -1819075591)))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    }
    var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_12)))))) : (max(((-(((/* implicit */int) var_0)))), (min((var_12), (var_9)))))));
}
