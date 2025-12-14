/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166688
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
    var_14 = ((/* implicit */int) var_11);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)16532))) * (var_6))) % (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned long long int) min((((var_10) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_5)) : (var_13))), (var_13)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) min(((~(min((((/* implicit */unsigned int) var_8)), (var_0))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))));
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */int) (short)-2861)) : ((~(((/* implicit */int) (short)-2861))))))) ? (var_1) : ((~(((/* implicit */int) (short)-2835))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) max(((~(var_2))), (((/* implicit */unsigned int) var_7))));
        arr_5 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) var_3);
    }
}
