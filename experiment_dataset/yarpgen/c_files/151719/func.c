/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151719
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((arr_0 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)39019)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)63100))))))), (((max((((/* implicit */unsigned int) var_9)), (arr_0 [i_0]))) * (max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (short)32418))));
        var_15 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) (unsigned short)45705)), (arr_0 [(unsigned short)0])))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))) | (max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) ? (max((((/* implicit */long long int) (unsigned char)178)), (9223372036854775805LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) var_7)))))))));
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)28364)))) << (((((/* implicit */int) max(((unsigned short)50059), ((unsigned short)48886)))) - (50043)))));
    var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16204)) ? (((/* implicit */int) (unsigned short)49407)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)139)))), (((unsigned short) var_2)))))) : (var_4)));
}
