/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121013
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_16)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_7))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) var_18);
        var_20 ^= ((/* implicit */unsigned int) min((min((arr_0 [(unsigned short)12]), (((/* implicit */long long int) (+(((/* implicit */int) (short)-30942))))))), (((/* implicit */long long int) ((896U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-30942))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) var_15)) << (((((/* implicit */int) min((((/* implicit */short) ((var_16) <= (var_2)))), (var_6)))) + (9455)))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) -477353621941345507LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)30942)))), (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0 - 1] [i_0]))))));
        var_22 = ((/* implicit */unsigned int) var_4);
    }
    var_23 ^= ((/* implicit */unsigned short) 3908372042U);
}
