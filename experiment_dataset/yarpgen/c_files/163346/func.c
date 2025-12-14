/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163346
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
    var_16 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)24576)), ((unsigned short)57344)));
    var_17 = ((/* implicit */signed char) max((1286490281), (((/* implicit */int) min(((unsigned short)57644), (((/* implicit */unsigned short) var_13)))))));
    var_18 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) -1934502931)) ? (arr_0 [i_0]) : (var_11))) : (arr_0 [i_0]))) - (((/* implicit */long long int) ((int) var_3)))));
        var_20 *= ((/* implicit */_Bool) arr_1 [0] [i_0]);
        var_21 -= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-24550)) : (((/* implicit */int) (unsigned char)217))));
        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-113))));
    }
}
