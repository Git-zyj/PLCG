/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116310
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42268))) : (arr_0 [i_0 - 2] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047))) : (max((((/* implicit */unsigned int) var_6)), (4294967278U))))) & (((((((/* implicit */_Bool) 17U)) || (((/* implicit */_Bool) var_4)))) ? ((+(9U))) : (4294967287U)))));
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */int) (+(4294967289U)));
    }
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (-(4294967275U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_0))))) : ((+(17U))))));
        arr_7 [i_1] [i_1] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [2U])), (((((/* implicit */_Bool) var_10)) ? (16776192) : (((/* implicit */int) (signed char)29))))))), ((~(((((/* implicit */_Bool) (unsigned short)56125)) ? (8259213497617793578ULL) : (((/* implicit */unsigned long long int) 4294967289U))))))));
        arr_8 [i_1] = ((/* implicit */_Bool) min((-1584612403), (((((/* implicit */_Bool) (+(arr_0 [i_1 - 1] [10])))) ? (((((/* implicit */_Bool) 2315313393U)) ? (((/* implicit */int) arr_1 [18])) : (((/* implicit */int) arr_1 [(signed char)16])))) : ((+(((/* implicit */int) (unsigned char)217))))))));
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 15U)) ? (4294967287U) : (549914529U))), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)114))))) : (((((/* implicit */_Bool) (unsigned short)28991)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) -548033894)) : (7U)))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775785LL)))))));
    var_14 = ((/* implicit */unsigned long long int) (unsigned short)19149);
}
