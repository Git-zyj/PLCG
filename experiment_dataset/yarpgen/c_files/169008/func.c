/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169008
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (var_13)))), ((+(var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))))) : (max((((/* implicit */unsigned int) var_0)), (var_6))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_16)) : (var_13)))) : (((unsigned int) var_0)))))))));
    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))) >> ((((-(var_2))) - (498890601464018158LL)))))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_17))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */int) var_16)))))))))));
    var_21 |= ((unsigned int) ((((/* implicit */_Bool) min((var_5), (var_11)))) ? (((/* implicit */long long int) var_11)) : (((var_17) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) var_8)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (var_5))))))));
        var_23 = ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        var_24 *= ((/* implicit */int) ((unsigned char) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))));
    }
}
