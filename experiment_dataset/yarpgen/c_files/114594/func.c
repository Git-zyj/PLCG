/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114594
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
    var_10 ^= ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) var_2);
        var_12 = ((/* implicit */unsigned short) (_Bool)1);
        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) 8333936859238362553ULL)) ? (8333936859238362553ULL) : (((((/* implicit */_Bool) 8333936859238362553ULL)) ? (((/* implicit */unsigned long long int) 436805877U)) : (8333936859238362553ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 9848343632915055559ULL)))) : (((((/* implicit */_Bool) 11445700871714967535ULL)) ? (436805877U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_1 [i_1] [i_1])))), (((((/* implicit */_Bool) 4114181616793117419ULL)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1] [i_1 - 2]))))));
        var_15 = ((/* implicit */unsigned long long int) var_2);
    }
}
