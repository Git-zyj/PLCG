/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12799
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_3)) - (var_11)));
        var_15 = ((var_0) ^ (((/* implicit */unsigned long long int) 131071)));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_12)), (var_9)))), (max((var_10), (var_13))))) + (max((var_1), (((/* implicit */unsigned int) var_8)))))))));
        arr_5 [i_1] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24))) : (var_3))) != (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)24)) : (((/* implicit */int) (short)-24)))), (((/* implicit */int) (unsigned short)61542)))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (((((/* implicit */int) (signed char)24)) & (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) max((max((((/* implicit */short) (unsigned char)4)), (var_2))), (((/* implicit */short) max((var_9), (var_9))))))) : (((((((/* implicit */int) var_8)) << (((((/* implicit */int) var_9)) - (82))))) << (((var_10) - (2761442644U)))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52858)) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)9)))) * (min((((/* implicit */int) var_2)), (var_5))))) : (((/* implicit */int) (unsigned char)227))));
        arr_6 [(unsigned char)19] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) + ((+(var_13)))));
    }
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        var_19 = ((/* implicit */int) min((var_19), ((-(((/* implicit */int) var_6))))));
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_4))))) : (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) -2147483641))))))), (min((((/* implicit */long long int) var_9)), (var_11)))));
        arr_9 [i_2] [(signed char)15] = ((((/* implicit */_Bool) var_3)) ? ((+(max((var_13), (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3)))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -342692560)) ? (((/* implicit */unsigned int) min((342692559), (((/* implicit */int) var_7))))) : (max((var_3), (var_3))))))))));
    var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) (unsigned char)82))))) ? (((/* implicit */int) max((var_6), (var_6)))) : (((((/* implicit */_Bool) (short)-24)) ? (((/* implicit */int) (unsigned short)61556)) : (((/* implicit */int) (signed char)79))))))));
    var_23 -= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) max((((/* implicit */short) var_6)), (var_7)))), (((((/* implicit */_Bool) var_0)) ? (-8962547716705172207LL) : (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) var_8))));
}
