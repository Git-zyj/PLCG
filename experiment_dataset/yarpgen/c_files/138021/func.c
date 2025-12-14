/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138021
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
    var_10 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) ^ (4503599627370495ULL))))), ((~(var_2)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(short)7] [21ULL] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0LL)), (18446744073709551615ULL)));
                arr_5 [i_1] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0 + 3] [i_1] [i_1]), (arr_2 [i_0] [3ULL] [i_0 - 1])))) ? (((/* implicit */int) ((short) 7714031837032992333ULL))) : (((((/* implicit */int) arr_2 [i_0] [i_0 - 2] [(short)14])) << (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) < (min((var_9), (arr_0 [i_0 + 1])))));
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) min((((((arr_0 [i_0]) + (9223372036854775807LL))) << ((((~((-9223372036854775807LL - 1LL)))) - (9223372036854775807LL))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))))));
            }
        } 
    } 
}
