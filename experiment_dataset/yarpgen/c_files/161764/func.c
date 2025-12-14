/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161764
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
    var_20 &= ((/* implicit */_Bool) var_7);
    var_21 += ((/* implicit */signed char) (~(min((((/* implicit */long long int) var_13)), (var_4)))));
    var_22 = ((/* implicit */int) min((((/* implicit */long long int) var_14)), (var_5)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_0)))))));
        arr_4 [15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16314376325460090472ULL)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32020))) : (arr_2 [i_0 + 4] [i_0 + 4]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)4] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)5])) ? (arr_2 [(unsigned char)18] [21LL]) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))))));
        var_23 = ((/* implicit */unsigned int) ((((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)11815))))) ? (min((var_11), (((/* implicit */long long int) arr_1 [i_0 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0 + 4]))))));
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_0 [(unsigned char)2] [i_1 + 3]);
        arr_8 [i_1] = ((/* implicit */unsigned char) ((long long int) var_11));
    }
}
