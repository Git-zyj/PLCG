/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1799
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))) : (var_7)));
    var_14 = ((signed char) (signed char)0);
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) (-(((long long int) ((signed char) var_4)))));
                var_16 = ((/* implicit */int) min((var_16), (((arr_4 [i_1] [18LL]) * (((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_2)), ((-9223372036854775807LL - 1LL))))))))));
                var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)46881)) ? (min((min((3781502792807943436LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((_Bool) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)38963)) * (((/* implicit */int) (short)-10892)))))))));
                arr_6 [i_1] [15LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (min((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((signed char) arr_0 [i_0]))))) : (((/* implicit */long long int) ((int) arr_0 [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((int) ((((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)-64)))) & (((/* implicit */int) var_1)))));
}
