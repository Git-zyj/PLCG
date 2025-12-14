/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103145
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))), (var_0)))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned char)242))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)234)), (0U)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) (short)25742)) - (25724)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (18446744073709551599ULL))))))));
        var_21 ^= ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) ((68227908U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519)))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_1])), (arr_0 [i_1])))) ? (((562949953421311ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)37744)) & (((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned char)126))))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) -8286363645599625432LL)) ? (var_3) : (((/* implicit */int) (unsigned char)11)))) : (((/* implicit */int) arr_2 [i_1]))))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_2 [i_2])) >> (((((/* implicit */int) (unsigned char)204)) - (185)))))));
        var_24 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_2])) >> (((var_8) - (12410775786790784608ULL))))) >> (((-3923859421512933091LL) + (3923859421512933095LL)))));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_2])), (816047074981683464LL)))) ? ((-(arr_9 [(short)2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) arr_8 [i_2])))))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)15)))))))))))));
    }
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((var_3) >> (((var_7) - (14362941200333563190ULL)))))))) : ((-(min((var_13), (var_1)))))));
}
