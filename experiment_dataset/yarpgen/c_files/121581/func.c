/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121581
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)26230)) ? (4623060033447264472LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26231)))));
    var_19 = ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (signed char)24))));
        arr_2 [(signed char)7] = ((/* implicit */signed char) (short)28135);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_0))));
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)28135)) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)47))))));
        var_23 += ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) (signed char)-38)))) ? (((var_11) / (((/* implicit */long long int) ((/* implicit */int) (short)32765))))) : (((((/* implicit */_Bool) var_5)) ? (268435455LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((short) ((((/* implicit */int) (short)28135)) >= (((/* implicit */int) (_Bool)1))))))));
    }
}
