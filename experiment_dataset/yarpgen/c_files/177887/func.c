/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177887
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
    var_14 -= ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29794)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == ((-9223372036854775807LL - 1LL))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))) : (((((/* implicit */_Bool) ((var_12) & (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)35725)))) : (arr_0 [15LL] [i_0])))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) var_5)))));
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91))) : (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29794))) : (arr_7 [i_1]))) : ((-(arr_7 [i_1])))));
    }
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 = var_3;
}
