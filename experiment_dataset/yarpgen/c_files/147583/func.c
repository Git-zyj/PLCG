/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147583
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_11)) >= (2147483642)))), (((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned short)64005))))))) ? (((((((/* implicit */int) (unsigned short)1530)) < (((/* implicit */int) (unsigned char)149)))) ? (min((((/* implicit */unsigned int) var_16)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)64007)))) > ((+(var_8)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) var_16);
        var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64005))) >= (-7658045838742361741LL))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : ((~(var_15)))));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) var_4))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1])) / (((((/* implicit */int) (unsigned char)185)) - (((/* implicit */int) (unsigned short)1528)))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 7658045838742361741LL)) && (((/* implicit */_Bool) -7658045838742361747LL))));
    }
    var_23 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ ((~(var_15))))), (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1530)) ? (((/* implicit */int) (short)-27121)) : (((/* implicit */int) (signed char)64))))))))));
    var_24 |= ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
    var_25 = ((/* implicit */_Bool) var_3);
}
