/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158333
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((var_6) ? (((/* implicit */int) ((772868847) == (((/* implicit */int) (short)32767))))) : (var_3)));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)29839)) : (-212976029)))) ? (7451095645576688115ULL) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17569))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
        var_18 *= ((/* implicit */short) arr_0 [i_0] [(short)11]);
    }
    var_19 ^= ((/* implicit */long long int) max((var_8), (max((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */short) var_1))))), (((var_16) % (((/* implicit */unsigned long long int) -772868848))))))));
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) - (6983888597320423880LL)))), (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)6229))))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((long long int) min((var_16), (((/* implicit */unsigned long long int) var_14))))) >> (((-212976029) + (212976042))))))));
}
