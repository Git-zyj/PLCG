/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135462
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((((var_10) >> ((-(((/* implicit */int) (_Bool)0)))))), (((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) / (var_10))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) arr_3 [i_0 - 4]);
        var_14 = (~((-(18446744073709551615ULL))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)65528))))) ? (min((((/* implicit */unsigned int) arr_1 [i_1] [i_1])), (arr_5 [14ULL] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
        arr_8 [i_1] [(unsigned char)1] = var_4;
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_2) > (var_2))))))) ? (((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)20)))) ^ (((/* implicit */int) max((var_5), (((/* implicit */signed char) var_1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10)))))))));
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (+(var_10)))) >= (((((/* implicit */_Bool) (unsigned char)0)) ? (var_2) : (((/* implicit */unsigned long long int) var_10)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 11U)))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_10))))))));
}
