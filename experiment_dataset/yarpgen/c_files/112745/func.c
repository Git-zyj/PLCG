/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112745
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
    var_10 ^= (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))), (var_7)))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) <= (max((((/* implicit */unsigned long long int) var_0)), (var_2)))))) ^ (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_3 [i_1 - 1] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))))))), (max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511))) : (18056648595343757661ULL)))))));
                arr_4 [i_1 - 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (333373550) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_1 [i_0] [i_1 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45018))) : (((((/* implicit */_Bool) var_4)) ? (18056648595343757661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                arr_5 [i_0] [i_1 - 2] = ((/* implicit */int) arr_1 [i_1 - 2] [i_0]);
                var_13 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [3LL])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (max((390095478365793955ULL), (((/* implicit */unsigned long long int) (short)32755))))))));
            }
        } 
    } 
}
