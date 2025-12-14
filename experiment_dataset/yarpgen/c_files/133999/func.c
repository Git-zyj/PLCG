/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133999
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
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) (unsigned short)63789);
        var_19 ^= ((max((arr_0 [(unsigned short)2] [i_0 + 1]), (((/* implicit */int) arr_1 [i_0 + 1])))) | (((/* implicit */int) arr_1 [i_0 + 2])));
        arr_2 [4] = ((/* implicit */signed char) ((unsigned char) (-(arr_0 [i_0] [i_0 + 3]))));
        arr_3 [i_0 + 1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_0 [i_0 + 1] [i_0 + 3]), ((-(((/* implicit */int) arr_1 [i_0]))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [3])) : (((/* implicit */int) (unsigned char)255))))), (max((var_9), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15807))) : (9223372036854775807LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (var_10) : (-508549774))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)64))))), (((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((short)-6437), (((/* implicit */short) var_12))))) * (((/* implicit */int) ((short) 33554432))))))));
        var_22 *= ((/* implicit */unsigned long long int) min((9223372036854775797LL), (((/* implicit */long long int) max((arr_5 [i_1]), (min((arr_5 [(short)12]), (((/* implicit */int) var_12)))))))));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_23 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) -9223372036854775796LL)))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 9223372036854775797LL)) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))))))));
        var_24 |= ((/* implicit */short) min(((unsigned char)92), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [(unsigned char)10])) || (((/* implicit */_Bool) arr_10 [i_2])))))));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_25 -= ((/* implicit */long long int) min((((/* implicit */int) ((short) arr_11 [i_3]))), ((-(((/* implicit */int) arr_11 [i_3]))))));
        var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)127))))) * ((-(885008456U)))));
    }
    var_27 = ((/* implicit */short) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775799LL))))))), ((+(((/* implicit */int) var_16))))));
}
