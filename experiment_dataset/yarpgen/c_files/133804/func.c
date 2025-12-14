/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133804
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
    var_17 &= ((/* implicit */unsigned short) min((((((((/* implicit */unsigned int) 33554431)) | (var_13))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)48430))))))), (min((((((/* implicit */_Bool) var_14)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) max((var_15), (var_15))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (var_13)));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((-2147483622), (33554431))))));
    }
    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_14)))) ? ((+(var_11))) : (((((/* implicit */long long int) 2147483621)) + (var_11)))))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (max((3910461721U), (((/* implicit */unsigned int) (unsigned short)17106))))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((33554431) - (33554431))))))));
}
