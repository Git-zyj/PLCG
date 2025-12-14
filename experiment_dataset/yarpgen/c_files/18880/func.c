/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18880
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_12)) : (var_4))), (((((/* implicit */_Bool) var_14)) ? (15747059172446082242ULL) : (2699684901263469344ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((var_10), (((/* implicit */unsigned short) var_2)))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) > (16753515420845679040ULL)))))))) : (max((max((15747059172446082272ULL), (((/* implicit */unsigned long long int) 1781624357U)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (2517135145U))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((((min((((/* implicit */unsigned long long int) var_1)), (2699684901263469344ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15747059172446082272ULL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18718)))))))), (min((((/* implicit */unsigned long long int) max((arr_0 [i_0] [6ULL]), (arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))))));
        var_18 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_10)) ? (15747059172446082276ULL) : (((/* implicit */unsigned long long int) var_13)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 + 1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19560)) ? (((/* implicit */int) (short)-19529)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 15747059172446082272ULL)) && (((/* implicit */_Bool) (short)32765))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)0)))))))));
    }
}
