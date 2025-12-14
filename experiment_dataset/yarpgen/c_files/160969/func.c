/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160969
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(8589934591ULL)))) ? (((((/* implicit */_Bool) (unsigned short)65506)) ? ((~(1909990370))) : (((/* implicit */int) (signed char)15)))) : (((/* implicit */int) (signed char)127))));
        var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (max((16075547245475386456ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))) / (9159402114097553909ULL)))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) var_16));
        arr_5 [i_1] &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)10158)) != (((/* implicit */int) (signed char)(-127 - 1))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))) && (((/* implicit */_Bool) arr_4 [i_1]))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (5319759266674922303LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) && (((/* implicit */_Bool) min((arr_3 [(short)23]), (arr_3 [i_1]))))));
    }
    for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        arr_9 [i_2] [i_2 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
        arr_10 [i_2 + 1] = ((/* implicit */unsigned char) var_2);
        var_24 = arr_4 [i_2];
    }
    var_25 = ((/* implicit */signed char) var_0);
}
