/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101680
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) > (arr_1 [i_0])));
        var_15 = ((/* implicit */unsigned char) var_6);
        arr_4 [(unsigned char)8] = ((/* implicit */short) ((signed char) ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
        arr_5 [i_0] = var_10;
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 -= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((arr_7 [i_1]) == (((/* implicit */long long int) var_2)))))));
        arr_10 [i_1] = ((((/* implicit */_Bool) arr_7 [(unsigned char)9])) ? (arr_7 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        var_17 ^= ((/* implicit */unsigned long long int) var_5);
    }
    for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        var_18 -= ((/* implicit */_Bool) max((min((((/* implicit */long long int) (_Bool)1)), (var_6))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (var_14)))))))));
        var_19 = ((/* implicit */_Bool) min((var_19), ((_Bool)1)));
    }
    var_20 = ((/* implicit */unsigned int) min(((!(var_14))), ((_Bool)1)));
    var_21 = ((/* implicit */long long int) var_0);
}
