/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177082
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) < (((((/* implicit */_Bool) 7613608710190448505LL)) ? (3792506733U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) + ((~((~(((/* implicit */int) var_1))))))));
    var_12 = ((/* implicit */signed char) (~(min(((~(((/* implicit */int) (short)-23750)))), ((~(((/* implicit */int) (short)14272))))))));
    var_13 = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) var_0))));
    var_14 = ((/* implicit */int) ((((long long int) 2938337175U)) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 2938337175U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U)));
                arr_6 [i_0] [i_0] [i_1] = var_8;
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1])) >> (((((/* implicit */int) var_9)) - (230)))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_1]) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((3ULL) & (min((((/* implicit */unsigned long long int) var_2)), (14ULL))))) : (((/* implicit */unsigned long long int) 2596326387U))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (~(var_2)));
            }
        } 
    } 
}
