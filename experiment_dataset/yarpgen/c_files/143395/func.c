/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143395
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((arr_1 [i_0]) + (2150545220087927974LL)))))) + (arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) : (5280157777619073210LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26151))) : (((((/* implicit */_Bool) (unsigned char)141)) ? (3609303654U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)131)) >> (((((/* implicit */int) (unsigned char)131)) - (128)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13988))) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (var_18)))))) : (max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_11)))))))));
    }
    var_21 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((((/* implicit */_Bool) 4288597467707015761ULL)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (signed char)-111))))));
}
