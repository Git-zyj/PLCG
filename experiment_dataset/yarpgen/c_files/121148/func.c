/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121148
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
    var_12 = ((((/* implicit */_Bool) 1989544943U)) ? (13U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (var_3)))) : ((~(((/* implicit */int) (unsigned char)248))))))));
    var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (var_2) : (max((((/* implicit */unsigned int) var_9)), (var_0))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)81)), (var_11))))));
    var_14 = ((/* implicit */unsigned int) ((_Bool) ((var_10) ? (max((var_2), (((/* implicit */unsigned int) var_9)))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_15 = (-(max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) max(((unsigned char)2), (((/* implicit */unsigned char) var_1))))))));
        var_16 = ((/* implicit */unsigned char) -9223372036854775799LL);
        var_17 = 2142606869801285497ULL;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) : (var_0)));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)252))));
    }
}
