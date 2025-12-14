/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159530
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_16 |= (_Bool)1;
        var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13652)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? (min((var_1), (((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)0))))));
        var_18 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))) && (((((/* implicit */int) var_5)) < (((/* implicit */int) arr_1 [i_0])))))))) != (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), (arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [(unsigned short)16])))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_1 + 2])))))));
    }
    var_21 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_1)), (var_7))), (((max((4690218774903671105ULL), (((/* implicit */unsigned long long int) var_1)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
}
