/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172476
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
    var_20 = ((/* implicit */int) var_6);
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 3165639128U))))) / (((/* implicit */int) var_19))))))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((_Bool) var_1)))));
    var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15941465963678698805ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_1)) : (var_15)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_24 = ((((/* implicit */_Bool) (short)15760)) ? (1129328159U) : (2012595252U));
        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(arr_0 [i_0] [10ULL]))), (((/* implicit */unsigned int) (-(130816))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 2505278110030852808ULL))))), (((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_2 [10ULL]))))))) : (max((((/* implicit */unsigned int) arr_2 [24])), (arr_0 [i_0] [12U])))));
    }
}
