/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168680
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
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (7796080360123208291ULL)))) ? (((/* implicit */unsigned long long int) min((var_0), (var_0)))) : (var_12))) % (var_4)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [(short)11] = ((/* implicit */unsigned short) ((10650663713586343325ULL) >= (((/* implicit */unsigned long long int) ((long long int) (unsigned char)255)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) var_9)))) > (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)9]))))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-46))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1]))))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_7 [i_1] = ((unsigned int) 10650663713586343304ULL);
        var_21 ^= ((/* implicit */unsigned int) var_19);
    }
    var_22 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (short)6205)))) ^ (((((((/* implicit */int) var_15)) + (2147483647))) >> (((((/* implicit */int) var_3)) - (14055))))))) | (max((((((/* implicit */_Bool) 3370430414U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_19)))), (((/* implicit */int) var_6))))));
}
