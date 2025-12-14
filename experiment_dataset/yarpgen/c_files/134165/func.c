/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134165
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
    var_13 = max((((/* implicit */short) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_8))))))), (((short) (~(355146843107134351LL)))));
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned short)11]);
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) min((((/* implicit */short) var_6)), (var_8)))) : (((/* implicit */int) ((var_3) > (((/* implicit */long long int) 4294967289U))))))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
}
