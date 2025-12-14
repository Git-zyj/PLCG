/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14235
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (unsigned char)255))));
    }
    for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
    {
        var_14 *= ((/* implicit */unsigned short) (short)17452);
        arr_5 [12ULL] [12ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)24699)) ? (max((((/* implicit */int) arr_3 [i_1 - 2])), (arr_4 [i_1 + 1] [i_1 - 2]))) : (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) arr_3 [i_1 - 2]))))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) max((var_0), (var_7))))) : (((/* implicit */int) var_6))));
    var_16 = ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? ((-(((var_7) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (18331436805272155374ULL) : (115307268437396241ULL))));
    var_17 = ((/* implicit */signed char) var_0);
    var_18 = (-(((/* implicit */int) var_9)));
}
