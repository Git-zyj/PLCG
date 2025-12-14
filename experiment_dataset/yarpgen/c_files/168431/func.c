/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168431
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) : (arr_3 [i_0 - 1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */int) (unsigned char)38)))))))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)217)))))))) ? (var_12) : ((-(((/* implicit */int) var_6))))));
        arr_5 [10ULL] = arr_1 [i_0 - 1] [i_0 - 1];
        arr_6 [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_1 [(unsigned short)8] [i_0 - 1])))));
    }
    var_16 += ((/* implicit */unsigned long long int) var_11);
}
