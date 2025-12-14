/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114702
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) : (((((_Bool) 8816480990323947634ULL)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (var_6))))))));
    var_18 = ((/* implicit */short) ((((((/* implicit */int) ((-451530532) > (((/* implicit */int) var_14))))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) >> ((((-(((82705702U) * (var_12))))) - (2433092695U)))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) != (((/* implicit */int) var_11)))) ? (((/* implicit */unsigned int) var_5)) : (((var_16) / (82705702U)))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1000156049357426628LL)))))) : (((unsigned long long int) (_Bool)1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) var_13)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23237)) ? (((/* implicit */int) (short)8276)) : (((/* implicit */int) (short)-27426))));
        var_21 ^= ((/* implicit */unsigned short) (-(((var_13) ? (((/* implicit */unsigned int) var_7)) : (var_10)))));
    }
    var_22 = ((/* implicit */long long int) var_13);
}
