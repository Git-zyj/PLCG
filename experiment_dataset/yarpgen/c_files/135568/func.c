/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135568
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
    var_18 = ((/* implicit */short) ((((_Bool) max((var_13), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */long long int) var_0)), (var_4)))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 1] [i_0 + 2])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (var_8)))))) ? (max((var_3), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))));
                arr_6 [i_0] [i_0] [i_1] = max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) arr_4 [i_0]))))), ((~(9223372036854775807LL))));
            }
        } 
    } 
    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_20 ^= ((/* implicit */_Bool) ((var_2) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 406703772)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_3)))) ? (((unsigned long long int) 0ULL)) : (((var_8) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) max(((((_Bool)0) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) min(((signed char)74), (((/* implicit */signed char) var_2))))))))));
}
