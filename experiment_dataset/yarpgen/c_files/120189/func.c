/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120189
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
    var_20 = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) var_9)))))), (((/* implicit */int) max((((unsigned char) (unsigned char)119)), (((/* implicit */unsigned char) (signed char)-42)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) arr_0 [(_Bool)1]);
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0])))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((arr_0 [i_0]), (max(((unsigned char)132), (arr_0 [i_0]))))))));
        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0]))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (signed char)124)))))), (((((var_6) ? (536869888) : (((/* implicit */int) arr_0 [i_0])))) / (((/* implicit */int) arr_0 [i_0])))))))));
    }
    var_26 += (_Bool)1;
}
