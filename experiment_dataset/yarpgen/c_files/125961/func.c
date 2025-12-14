/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125961
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
    var_13 = max(((-(1333064228U))), (((((/* implicit */_Bool) (short)-29374)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((4294967295U), (((/* implicit */unsigned int) (signed char)17)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8388607ULL))))) : (1277893437)))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -1LL)) ? (arr_1 [14LL]) : (1333064237U)))))) : ((-(9223372036854775808ULL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(1333064228U)))) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)29374)))))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [3U]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))) ? (min((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (576460717943685120ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)22933)), (5U)))))) : ((-(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_0 [i_0 - 2])))))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (short)29374))))) ? (((((/* implicit */_Bool) var_3)) ? (599213123U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 4294967295U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104)))))))) : (max((var_10), (((/* implicit */long long int) (+(((/* implicit */int) (short)6557)))))))));
}
