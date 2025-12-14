/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13100
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)52969)) | (((/* implicit */int) (unsigned short)41402))));
        var_18 = ((/* implicit */unsigned int) ((short) (-(max((arr_0 [i_0]), (((/* implicit */long long int) var_5)))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */short) arr_4 [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 140737454800896ULL)) ? ((-(4294967293U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) 1569431135))));
    }
    var_20 = ((/* implicit */unsigned char) min((max((((((/* implicit */int) var_14)) - (((/* implicit */int) (unsigned char)252)))), (((/* implicit */int) var_8)))), ((~(((/* implicit */int) ((short) -5481478914838153472LL)))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_7))));
}
