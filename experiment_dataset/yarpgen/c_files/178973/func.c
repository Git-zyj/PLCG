/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178973
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
    var_12 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) var_3)) ? (var_7) : (16777215))))), (((((var_7) + (2147483647))) << (((((/* implicit */int) var_3)) - (25)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_13 = ((unsigned char) ((unsigned short) arr_1 [i_0]));
        var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-23)) || (((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    var_15 = ((/* implicit */int) (unsigned short)32466);
    var_16 -= ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned long long int) var_9))));
}
