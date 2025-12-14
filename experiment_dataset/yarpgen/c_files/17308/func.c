/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17308
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
    var_13 = 7904714152401873945ULL;
    var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 892540185118359057ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))))) ? ((+(1438949327U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_2)), (((unsigned short) (~(((/* implicit */int) var_0)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-41416380) : (-82053616)))) % ((+(((((/* implicit */_Bool) (short)31941)) ? (12560254438615678315ULL) : (((/* implicit */unsigned long long int) 2127778237U)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(41416379)))) ? (((var_2) ? (((((((/* implicit */int) (short)-31950)) + (2147483647))) >> (((13471422902169760879ULL) - (13471422902169760868ULL))))) : (((/* implicit */int) max(((unsigned char)235), (var_0)))))) : (((/* implicit */int) ((unsigned char) var_10)))));
        arr_5 [4] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) var_10))), (((((/* implicit */_Bool) (+(-650573062420152515LL)))) ? (((((/* implicit */_Bool) 2479836984835253758ULL)) ? (2479836984835253738ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (584631825U))))))));
    }
}
