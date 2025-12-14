/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16364
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
    var_20 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) max((var_7), (var_7)))), (var_17))) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-30435)), (2717282342U))))));
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_16)), (min((((/* implicit */unsigned long long int) (~(363267050U)))), (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (15790175161361812158ULL)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        var_22 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45)))))))))));
        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((~(((/* implicit */int) (short)512)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [3U])) && (((/* implicit */_Bool) (short)30439)))))))) - (max((((((/* implicit */_Bool) 2108236590602184933ULL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_0 [(unsigned short)13]))), (((/* implicit */unsigned long long int) max((arr_1 [i_0 - 4]), (((/* implicit */unsigned int) (signed char)114)))))))));
    }
    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) var_0)))) >= (((/* implicit */int) var_16)))))));
    var_25 = ((/* implicit */short) (~(((/* implicit */int) (((-(var_15))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
}
