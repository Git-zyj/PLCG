/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128097
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_19 -= ((/* implicit */unsigned int) ((unsigned short) var_11));
            var_20 -= ((/* implicit */_Bool) 0);
        }
        arr_7 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-53))));
        var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))) & ((~(3LL)))));
    }
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 20; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        var_22 -= ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_0 [(unsigned short)2] [(unsigned char)12]))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_2 + 3] [i_2 + 3])));
        var_23 -= ((/* implicit */int) (unsigned char)37);
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (-(var_18))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_17))));
    var_25 = (unsigned char)232;
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-2778))))))), (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)205)) >> (((18446744073709551615ULL) - (18446744073709551584ULL)))))), (var_5))))))));
    var_27 -= ((/* implicit */unsigned long long int) 1214451261);
}
