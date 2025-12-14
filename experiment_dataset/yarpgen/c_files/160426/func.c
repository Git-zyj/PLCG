/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160426
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -794952300)) / (var_2)))) && (((/* implicit */_Bool) ((max((var_13), (((/* implicit */unsigned int) var_10)))) | (((/* implicit */unsigned int) ((/* implicit */int) min(((short)13924), (var_5))))))))));
    var_17 = ((((/* implicit */unsigned int) 1128247702)) & (max((((((/* implicit */_Bool) (unsigned short)28516)) ? (var_12) : (var_1))), (((/* implicit */unsigned int) var_9)))));
    var_18 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [(short)10] |= ((/* implicit */short) var_14);
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((var_11) & (((/* implicit */unsigned int) -1418242641)))) : (((/* implicit */unsigned int) ((var_3) >> (((var_1) - (2227977807U))))))));
        var_20 = ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (unsigned char)224)) - (217))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_3)) : (var_13))) / (var_6)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned int) var_3)))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32754)))))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) & (((/* implicit */int) var_10)))) << ((((-(((/* implicit */int) var_15)))) + (25505)))));
    }
}
