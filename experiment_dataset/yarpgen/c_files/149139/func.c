/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149139
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
    var_18 = ((/* implicit */signed char) 4074353249844566383ULL);
    var_19 = ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((_Bool) arr_1 [i_0]))) | (((/* implicit */int) arr_0 [i_0])))) / ((((-(((/* implicit */int) (signed char)-19)))) | ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        arr_4 [i_0] = ((10533625970622087865ULL) << (((15288966351764504920ULL) - (15288966351764504861ULL))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) max((var_9), ((signed char)28)))) / (((/* implicit */int) arr_0 [i_0]))));
        var_21 ^= ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_2 [(_Bool)1])) + (((/* implicit */int) var_7)))) - (((/* implicit */int) arr_1 [(signed char)2])))) <= (((/* implicit */int) arr_2 [(signed char)0]))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_22 = ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_6 [i_1] [i_1])));
        var_23 = var_6;
    }
    var_24 = ((/* implicit */unsigned long long int) var_5);
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))));
}
