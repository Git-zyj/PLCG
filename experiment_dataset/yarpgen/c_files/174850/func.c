/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174850
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)87)), ((short)-14332)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-14329)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) (short)14332)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_1)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((long long int) (unsigned short)32767)) : (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (var_12)))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (-8660257052184748089LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_6) : (var_6))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */short) var_4)), ((short)21029)))), (var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) var_2);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))));
    }
}
