/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128322
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) -802590851)) ? (((/* implicit */int) (short)11100)) : (((((/* implicit */_Bool) 9223372036854775806LL)) ? (((((/* implicit */_Bool) 1730136282)) ? (((/* implicit */int) (unsigned short)829)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_11))))));
    var_16 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 7420748018747219219LL)))) ? (((((/* implicit */int) (unsigned short)64706)) * (((/* implicit */int) var_13)))) : ((~(((/* implicit */int) var_13))))))) ? ((~(((/* implicit */int) (unsigned short)829)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)850)) ? (((/* implicit */int) (unsigned short)833)) : (((/* implicit */int) (unsigned short)64696))))) && (((/* implicit */_Bool) (unsigned short)64696))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64705)) ? (((((/* implicit */int) (unsigned short)64696)) - (var_5))) : (((/* implicit */int) (unsigned short)21054))))) ? ((-(((/* implicit */int) (unsigned short)43038)))) : ((-((+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_18 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)64712))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((min((var_0), (((/* implicit */long long int) arr_2 [i_1])))) != (((/* implicit */long long int) ((arr_2 [i_1]) & (arr_2 [i_1]))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_7))));
    }
    var_21 = ((/* implicit */short) (((((~(var_6))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)806)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)830))))))) ? (var_9) : (((((((/* implicit */_Bool) (unsigned short)64705)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))) >> (((((((/* implicit */_Bool) (unsigned short)65535)) ? (-2613315784927320253LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64712))))) + (2613315784927320259LL)))))));
}
