/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151148
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) (short)15)))), (((((/* implicit */int) (unsigned short)14)) < (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2]))))))) < (((/* implicit */int) var_3)))))));
        var_12 = (~(max((((((/* implicit */_Bool) -6254589156318203249LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-37))))), (var_2))));
        var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_1 [(unsigned short)8] [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0 + 2]))))));
    }
    var_14 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_7)) ? (-6254589156318203249LL) : (((/* implicit */long long int) 1172909985U)))), (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)12), (((/* implicit */short) (unsigned char)4)))))) : (var_0))))));
    var_15 = ((/* implicit */short) ((signed char) (short)-26));
    var_16 = ((/* implicit */unsigned char) var_3);
}
