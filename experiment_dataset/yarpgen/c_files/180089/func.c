/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180089
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
    var_12 ^= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)4095))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61430))) - (var_1))))), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 1716786160)) ? (var_10) : (((/* implicit */int) var_5))))))));
    var_13 = ((/* implicit */int) ((long long int) var_1));
    var_14 ^= ((/* implicit */int) min((min(((~(var_3))), (((/* implicit */long long int) var_5)))), (max((max((((/* implicit */long long int) var_9)), (var_4))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_10)) : (var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) arr_0 [(unsigned short)4]);
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) >= (9223372036854775807LL)))) : (((/* implicit */int) ((short) arr_1 [i_0 - 2])))));
                var_16 -= ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4));
            }
        } 
    } 
}
