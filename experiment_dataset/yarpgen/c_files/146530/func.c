/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146530
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
    var_18 &= ((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), ((~(((((/* implicit */_Bool) 2480144416282724840LL)) ? (var_2) : (((/* implicit */long long int) -229895951))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1880875415U)) / (7395095655054692072LL)))) ? (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) var_11)))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)24402)), (111214517829493076ULL)))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)37)) : (-1381448408))))) <= ((~(((/* implicit */int) max((((/* implicit */short) var_17)), ((short)31744)))))))))));
        var_21 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 3])) ? (378437229) : (((/* implicit */int) var_1)))))));
    }
}
