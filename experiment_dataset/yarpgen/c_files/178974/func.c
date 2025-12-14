/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178974
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
    var_11 ^= ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) (short)3200)) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-110)) && (min(((_Bool)1), ((_Bool)1)))))))))));
        var_13 = ((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((max((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_1 [i_0])))), (((((/* implicit */int) var_3)) - (((/* implicit */int) (short)0)))))), (((((/* implicit */int) (unsigned short)9356)) - (((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_6 [0] = ((/* implicit */unsigned int) min((((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) >> (((3484679997733867075LL) - (3484679997733867069LL))))), (((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (arr_5 [i_1] [i_1]))), (((/* implicit */int) max((var_8), (var_8)))))), ((~(arr_5 [i_1] [i_1])))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((int) (unsigned short)65535)))));
        arr_10 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) (unsigned char)254))) <= (((/* implicit */int) arr_8 [i_2] [i_2])))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [8] [i_2])) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_2 - 1]))))))))));
        arr_11 [(short)8] [i_2] &= ((/* implicit */signed char) var_6);
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_17 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((long long int) var_5))) ? (((unsigned long long int) arr_1 [i_3])) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) arr_7 [i_3]))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [15ULL])))))));
        var_18 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)29060)), (4294967294U)))))) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_12 [i_3]))))));
        arr_14 [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_3]))) ? (1771558622U) : (arr_2 [i_3])))));
    }
    var_19 = ((/* implicit */unsigned char) max((var_19), (var_3)));
    var_20 *= min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)111)), (2129567851U)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
}
