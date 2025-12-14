/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111257
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_2)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_17 -= ((signed char) var_15);
        var_18 -= ((/* implicit */unsigned int) max((min((arr_1 [(short)8] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0 + 1] [8ULL])))))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((arr_1 [(unsigned char)10] [i_0 + 1]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))))));
    }
}
