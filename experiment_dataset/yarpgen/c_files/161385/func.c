/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161385
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
    var_13 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned short)0))))));
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))), (min((((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)48))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (11179181902744043081ULL)));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 1381290422228258322ULL))));
        var_16 = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_17 = ((((/* implicit */int) (unsigned char)208)) < (((/* implicit */int) ((unsigned short) ((unsigned long long int) (_Bool)1)))));
}
