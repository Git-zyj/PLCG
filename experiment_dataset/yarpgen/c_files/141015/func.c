/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141015
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
    var_12 = ((/* implicit */int) (-(-2865079021141100436LL)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_11 [12] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))) : (min((((((/* implicit */_Bool) 471447311)) ? (var_4) : (arr_6 [i_2]))), ((~(var_4)))))));
                    var_13 += ((/* implicit */long long int) max((min((arr_6 [i_1]), (var_2))), (((((/* implicit */_Bool) var_11)) ? (arr_6 [i_2]) : (arr_6 [i_0 + 1])))));
                    var_14 = ((/* implicit */int) max((((min((var_11), (((/* implicit */long long int) var_10)))) << (((arr_9 [i_0] [4LL] [i_0 - 1]) - (593481347))))), (((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) 1164223626)) : (arr_1 [i_0]))) : (((/* implicit */long long int) ((-281299779) - (var_2))))))));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_3 [i_2] [i_1]))));
                    var_16 ^= min((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) arr_2 [i_1])) : (33554431LL))), (((/* implicit */long long int) var_1)));
                }
            } 
        } 
    } 
    var_17 = (~(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 8844265995274184606LL)) ? (var_11) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) (~(-1167875314)))))));
    var_18 = ((/* implicit */int) ((var_11) / (((/* implicit */long long int) var_0))));
}
