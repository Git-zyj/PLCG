/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151663
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
    var_13 = ((/* implicit */short) ((var_8) & ((((~(14908980903566064500ULL))) | (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) 617807050)))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((unsigned int) (short)0))) : (-3852574681457582728LL)))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_11)) : (14908980903566064486ULL))) : (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
    var_15 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1)))))) : (max((((/* implicit */long long int) 2147483647)), (var_3))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [(unsigned short)13] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))), (5836538079438226902LL)))), (((((/* implicit */_Bool) 516124695U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (16728065915652246862ULL)))));
        var_16 = ((/* implicit */unsigned int) min((((long long int) var_10)), (((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */long long int) arr_1 [i_0])), (-3852574681457582728LL)))))));
        var_17 = min((((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (3852574681457582727LL)))), (((/* implicit */long long int) arr_1 [i_0])));
    }
    var_18 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483647))))), (((unsigned int) var_11)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) var_10))))) && (((/* implicit */_Bool) var_12)))))));
}
