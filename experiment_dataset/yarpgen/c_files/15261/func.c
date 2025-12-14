/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15261
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */_Bool) max((((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32744))) / (8738083507840163738ULL))) >= (((/* implicit */unsigned long long int) ((int) var_8)))))), ((signed char)115)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (30484)))))) ? (((((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (28591))))) & ((~(((/* implicit */int) (short)-32744)))))) : (min(((~(((/* implicit */int) (short)32727)))), (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)4] [i_0]))) : (0U)))) ? (((((/* implicit */_Bool) 9223372036854775796LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) arr_1 [(signed char)14]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-6309146135243441379LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (unsigned short)35413))))))) ? (((unsigned long long int) ((unsigned char) var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)28))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_14))))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1] [i_1])))) : (var_0)))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))), (2147483647))))));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)0))));
        arr_11 [13] = ((signed char) (signed char)3);
        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [1LL] [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (signed char)62))))))) ? (((var_3) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) ((_Bool) (unsigned short)35418))))) : (((/* implicit */int) arr_10 [i_2]))));
    }
    var_24 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_13))))) ? ((-(154132471U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((((/* implicit */_Bool) (short)4741)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)41384))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (unsigned short)10))));
}
