/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182484
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
    var_16 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)40768))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 - 1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_8)))) : (((/* implicit */int) (unsigned char)145)))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_0 [i_0 - 2]))))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) min((arr_1 [i_1 - 3]), (((/* implicit */signed char) (_Bool)1)))))))));
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 4698925884066564758LL))))), (arr_3 [i_0] [i_1])))), (max((((/* implicit */long long int) ((short) (unsigned short)9189))), (((((/* implicit */_Bool) var_1)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
            }
        } 
    } 
}
