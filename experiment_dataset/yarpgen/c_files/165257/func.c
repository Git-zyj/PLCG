/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165257
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
    var_13 *= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (var_6))))) >= (min((var_1), (((/* implicit */unsigned int) (unsigned char)252)))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) ((((/* implicit */_Bool) (short)-24695)) || (((/* implicit */_Bool) var_8)))))))));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9159)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)255)))))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */long long int) 1782996630U)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (var_2))))) : (((/* implicit */long long int) var_8))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) ((short) 385531059)))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (var_2)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_2 [i_0 + 4])))));
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
    }
}
