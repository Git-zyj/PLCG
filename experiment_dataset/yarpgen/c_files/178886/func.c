/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178886
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */short) var_5)))))) : (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)2)), (arr_1 [i_0] [i_0 - 1])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(short)5]))) ^ (-8208200394217005051LL))) : (((/* implicit */long long int) ((int) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */short) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) var_4)), (-8208200394217005051LL))) >= (-8208200394217005064LL))) ? (((/* implicit */int) arr_1 [22U] [i_0])) : ((-((+(arr_0 [i_0])))))));
        var_21 = ((/* implicit */short) (~(min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1508934712U))), ((~(1508934712U)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */int) var_10)) : (((var_8) & (((/* implicit */int) (signed char)-1))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) ^ (((var_19) | (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8208200394217005047LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-1))))) : (var_19)))));
}
