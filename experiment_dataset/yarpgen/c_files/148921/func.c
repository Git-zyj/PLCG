/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148921
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_4 [7LL] = ((/* implicit */unsigned short) ((unsigned char) max((((long long int) arr_2 [i_0])), (((((/* implicit */_Bool) -1LL)) ? (var_15) : (((/* implicit */long long int) var_2)))))));
        var_16 *= (+(((/* implicit */int) ((((/* implicit */int) ((var_15) < (((/* implicit */long long int) 3682912880U))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)80)))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-81))) <= (8501135479913672672LL)));
        var_18 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)78)) ? (104824112U) : (3008208441U)))) ? (((-4LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27876)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_1]), (arr_6 [i_1])))) ? (var_7) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) 2138587872)) : (var_15)))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_6 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -794720431)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))))) : (max((((/* implicit */long long int) ((var_13) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        arr_11 [(unsigned short)16] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
        var_20 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_9 [i_2])) ^ (((/* implicit */int) var_3)))));
        arr_12 [i_2] = ((/* implicit */long long int) ((var_14) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))));
    }
    var_21 = ((/* implicit */unsigned short) ((var_12) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_8)) + (((((/* implicit */int) (unsigned char)77)) * (((/* implicit */int) (unsigned char)134))))))));
}
