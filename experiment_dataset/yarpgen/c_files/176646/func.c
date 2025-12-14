/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176646
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10359)) ^ (((/* implicit */int) var_2))));
        var_18 |= ((/* implicit */unsigned short) ((var_3) <= (((/* implicit */long long int) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 1300934114))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (var_16)));
        arr_9 [i_1] |= ((/* implicit */unsigned short) (+(((arr_5 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10359))) : (var_11)))));
        arr_10 [i_1] [i_1] = (unsigned short)32704;
        var_20 = ((/* implicit */int) var_12);
    }
    var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) ((var_12) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -9629687)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55191))) : (var_4)))) : (var_3))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (var_4) : (2962892670U))))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(min((var_11), (((/* implicit */unsigned long long int) 1332074626U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (var_15)))) ? (((((/* implicit */_Bool) (unsigned short)32835)) ? (((/* implicit */long long int) var_6)) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) != (((/* implicit */long long int) var_1)))))))))));
}
