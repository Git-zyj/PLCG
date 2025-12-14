/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182142
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(unsigned short)13]))))) ? (max((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))), (((16554510645868261940ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (43))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (16554510645868261940ULL) : (((/* implicit */unsigned long long int) -2018501161)))))))) >> (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12))))) * (((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) - (54)))))))));
        var_14 += min(((-(((/* implicit */int) var_1)))), (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0])))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned short) (unsigned char)233))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))))) : ((-(((unsigned int) var_11)))))))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(var_7))))))) ? ((+(var_12))) : (var_12)));
}
