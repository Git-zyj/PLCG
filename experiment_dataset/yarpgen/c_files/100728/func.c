/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100728
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-22642)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-118)))))) : ((+(9812276629203819487ULL)))))));
        var_13 = ((/* implicit */_Bool) var_10);
        arr_4 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)24147))));
    }
    var_14 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51970)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((int) var_9))) : (var_8))));
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 1 */
    for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-46))) ? (max((((unsigned long long int) (signed char)96)), (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 + 1])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_9))))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16447)) ? ((~(max((((/* implicit */unsigned long long int) arr_7 [i_1 - 1] [i_1])), (var_3))))) : (max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10344187908521438433ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_2))))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_6 [i_1 - 1]) ? (((/* implicit */int) var_11)) : (arr_7 [i_1 - 1] [i_1]))) & ((-(((/* implicit */int) arr_5 [i_1] [i_1]))))))) ? (arr_7 [i_1 + 2] [i_1 + 2]) : ((+(((((/* implicit */int) (short)412)) & (((/* implicit */int) (signed char)-44))))))));
    }
}
