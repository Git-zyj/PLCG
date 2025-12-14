/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189128
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
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((3) - (((/* implicit */int) var_5))))) + (((var_12) + (var_9))))) + (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_9))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) ((2038563662U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) - (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_7))))))) || (((((((/* implicit */unsigned long long int) 912080251U)) & (var_12))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((3) / (((/* implicit */int) arr_1 [i_0])))) / (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (short)17))))))) + (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15)) + (((/* implicit */int) (short)-17))))) / (((4294967287U) * (1595576655U)))))));
    }
    var_15 = ((((((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) / (((17147617417407268086ULL) / (((/* implicit */unsigned long long int) var_10)))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-3)) * (((/* implicit */int) (signed char)96)))) * (((((/* implicit */int) var_5)) / (((/* implicit */int) var_7))))))));
}
