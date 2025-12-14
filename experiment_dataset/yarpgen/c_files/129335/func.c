/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129335
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 3])) : (var_0)))));
        var_13 = ((/* implicit */unsigned short) (unsigned char)207);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((var_7), (arr_1 [i_1] [i_1]))))));
        arr_8 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)245)))), (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : ((-(max((var_5), (-8LL)))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_15 += ((/* implicit */int) arr_10 [(unsigned char)0]);
        arr_11 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_2])))) * (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (unsigned short)16719))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)245))))) ? (arr_9 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)25))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (var_7)));
    }
    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) /* same iter space */
    {
        var_18 &= ((/* implicit */unsigned char) arr_9 [2]);
        var_19 = ((/* implicit */unsigned char) (signed char)-1);
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)48)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((-2096556897) + (2147483647))) >> (((max((((/* implicit */long long int) (signed char)-4)), ((+(arr_5 [i_3]))))) - (4159438554467651697LL))))))));
    }
    var_21 = ((int) max((var_2), (min(((unsigned char)42), (var_8)))));
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-1)) : ((-2147483647 - 1))))) ? (var_5) : (((((/* implicit */_Bool) (signed char)-18)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))));
}
