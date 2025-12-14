/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167235
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
    var_15 &= ((((/* implicit */_Bool) var_10)) ? (var_13) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-8437)), (var_8)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_13))) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) (short)-26754))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) 3713035205U);
        var_16 = ((/* implicit */int) (((~(((/* implicit */int) arr_1 [9ULL])))) <= (((((/* implicit */_Bool) max((((/* implicit */int) (short)30784)), (-195309659)))) ? (365169751) : (((((/* implicit */int) (short)10044)) * (((/* implicit */int) (signed char)2))))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (-(10963613654020355552ULL)))) || ((!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26744))) : (6974219570463433404ULL)))))))))));
        arr_3 [i_0] &= (+((+(10963613654020355563ULL))));
    }
}
