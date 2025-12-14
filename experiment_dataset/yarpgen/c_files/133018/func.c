/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133018
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 2147483647))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (max((((unsigned long long int) 4U)), (((/* implicit */unsigned long long int) max((var_14), (arr_4 [i_0])))))))))));
                var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) max((var_5), (arr_2 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) 15722610882814886678ULL)) ? (9223372036854775807LL) : (9223372036854775807LL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((15722610882814886695ULL), (((/* implicit */unsigned long long int) 4294967295U))))) ? (((unsigned long long int) min((var_0), (((/* implicit */int) var_4))))) : ((((!(((/* implicit */_Bool) 33521664)))) ? (min((72057589742960640ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : ((+(72057589742960665ULL)))))));
    var_21 &= ((/* implicit */int) ((var_9) / (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 4294967294U)) : (var_3))), (((/* implicit */long long int) ((unsigned int) var_14)))))));
    var_22 = ((/* implicit */int) var_17);
    var_23 = ((/* implicit */long long int) min((var_23), (max((-1870027641887004740LL), (3456555267034908593LL)))));
}
