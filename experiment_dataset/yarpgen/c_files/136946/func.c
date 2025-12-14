/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136946
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (var_2)))) / (var_8))), (max((min((((/* implicit */unsigned int) var_4)), (var_8))), (max((var_8), (((/* implicit */unsigned int) var_2)))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (_Bool)1))));
        arr_4 [(short)4] &= ((/* implicit */short) var_1);
        var_11 |= ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((-11) + (29)))))) == (((unsigned long long int) arr_5 [i_1 - 3]))));
        var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_6 [1LL])) : (((((/* implicit */long long int) var_8)) + (var_9)))));
        var_13 |= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_1]) : (arr_5 [i_1]))));
    }
    var_14 ^= ((((int) var_1)) > (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (-9223372036854775784LL) : (-9223372036854775784LL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_8))))))));
    var_15 = ((/* implicit */unsigned char) var_1);
}
