/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145536
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) (unsigned short)65532)));
        var_15 ^= (unsigned short)3;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = min((((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */short) var_5))))), ((-(((/* implicit */int) var_9)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(unsigned char)11] [(unsigned char)11])) ? ((~(((((/* implicit */_Bool) (unsigned short)65533)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_4 [i_1] [0ULL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))))));
        arr_5 [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
    }
    var_18 |= ((/* implicit */int) ((signed char) var_8));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) var_12))))))) : (var_1)));
}
