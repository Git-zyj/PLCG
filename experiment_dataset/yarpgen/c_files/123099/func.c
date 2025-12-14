/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123099
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) ((unsigned short) 8209858822223285577ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8209858822223285577ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) : (var_0)))));
    var_17 = var_3;
    var_18 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8209858822223285580ULL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6))))), (((/* implicit */unsigned long long int) var_10))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)14)), (2198413829U)))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) var_12))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4971))) : (arr_1 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) != ((~(var_4))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2317104014U)))) & (((long long int) var_11))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(8209858822223285577ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (2479730280U) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))))), ((+(arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 1]))))) ? ((-(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) var_4)) : (8209858822223285562ULL))))) : (((/* implicit */unsigned long long int) arr_0 [i_1 + 2]))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */_Bool) ((min((8209858822223285577ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (1815237016U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))))))) << (((max((7270009208691228303LL), (((/* implicit */long long int) arr_10 [i_2 - 1])))) - (7270009208691228268LL)))));
        var_23 *= ((/* implicit */unsigned int) var_2);
    }
}
