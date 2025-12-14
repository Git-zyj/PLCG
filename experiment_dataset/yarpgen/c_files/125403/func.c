/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125403
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_0 [3U]))));
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = min((((/* implicit */int) arr_1 [i_0])), (((((((/* implicit */_Bool) var_14)) || (var_1))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (1710318206)))) : (-440252290))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-742931322)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) >= (var_3)))) : (((/* implicit */int) (unsigned short)18126))))), (var_0)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) var_0);
        var_19 = ((/* implicit */long long int) var_8);
    }
    var_20 = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) (unsigned short)52505)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    var_21 = ((/* implicit */long long int) var_15);
    var_22 = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (var_11))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (unsigned short)61440)))) + (61500)))));
}
