/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102964
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
    var_15 = ((/* implicit */long long int) (~(-330369662)));
    var_16 = ((/* implicit */signed char) ((long long int) -330369642));
    var_17 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((signed char) ((int) var_0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) -330369632)) ? (((unsigned long long int) arr_1 [(short)4] [i_0])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65522)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_2);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_0 [8U]))));
    }
}
