/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170004
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((unsigned short)65511), (var_10))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)26)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56754))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_12)) ? (max((2147483647), (((/* implicit */int) (unsigned short)2253)))) : (((/* implicit */int) var_13)))), ((+(((/* implicit */int) (unsigned char)8)))))))));
        var_23 = ((/* implicit */int) min((var_23), ((-(min((2147483647), (((/* implicit */int) var_14))))))));
    }
    var_24 = var_18;
    var_25 += ((/* implicit */short) (unsigned short)22202);
}
