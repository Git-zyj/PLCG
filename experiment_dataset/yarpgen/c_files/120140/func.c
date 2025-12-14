/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120140
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_3 [(unsigned short)6] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4206435660U))))), (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_13)) - (7482))))))))));
        arr_4 [i_0 - 1] = max((((/* implicit */unsigned long long int) var_14)), (min((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_17))), (((/* implicit */unsigned long long int) (-(var_9)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_8);
    var_22 = ((/* implicit */unsigned short) var_5);
    var_23 &= ((/* implicit */unsigned short) (short)-14325);
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9830)) && (((/* implicit */_Bool) (unsigned char)11))));
}
