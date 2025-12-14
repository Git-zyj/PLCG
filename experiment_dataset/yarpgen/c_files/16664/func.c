/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16664
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((((((arr_1 [i_0]) == (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) 6448894787757338599ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (arr_1 [i_0 + 1]))) : (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))))), ((((!(arr_0 [5] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [(unsigned short)11])) <= (arr_1 [(unsigned short)9])))) : (((int) arr_0 [i_0] [3U]))))));
        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-1LL) : (((/* implicit */long long int) arr_1 [i_0]))))) ? (((long long int) 6448894787757338599ULL)) : (((/* implicit */long long int) arr_1 [i_0 - 1]))))));
    }
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((min((var_4), (var_7))) < (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) ((short) var_14))) ? (max((var_4), (((/* implicit */int) var_13)))) : (((/* implicit */int) var_13))))));
}
