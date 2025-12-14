/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107945
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned int) (unsigned char)173));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [(signed char)23] [(signed char)23])))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)7]))) : (var_1)));
        var_15 = ((/* implicit */unsigned short) ((_Bool) (short)-1));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65531)) ? (-643334001) : (2147483641)));
        arr_6 [i_1] = ((/* implicit */long long int) ((unsigned short) ((short) arr_5 [i_1])));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (arr_5 [i_1])))) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        var_17 = ((/* implicit */unsigned long long int) ((int) (short)7));
    }
    var_18 = ((/* implicit */int) var_10);
    var_19 = ((/* implicit */unsigned long long int) (+(var_5)));
}
