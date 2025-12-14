/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161360
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 1])))))) ? ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [1ULL] [i_0])) : (arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-16796)))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))) : (-6461639036817147844LL))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)2258))))), (arr_4 [i_1 - 3] [i_1 - 1])))));
                var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_1 - 4] [i_1])) ? (arr_4 [i_1 - 3] [i_1]) : (arr_4 [i_1 - 2] [2LL])))));
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_0]))) : (9223372036854775806LL))) >= (((3268814779756341619LL) & (-9223372036854775786LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
}
