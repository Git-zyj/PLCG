/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156540
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
    var_17 = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned long long int) var_14)), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_2)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-119)) - (((/* implicit */int) (signed char)123))));
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_2 [3U])))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) max((var_3), (var_13)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_1])))) | (arr_5 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((836595827), (arr_2 [(short)7]))))))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56978)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7286))) : (899244255596001889ULL)));
    }
}
