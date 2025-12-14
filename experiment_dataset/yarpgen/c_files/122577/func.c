/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122577
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = 1195878722;
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_1 - 2] [i_1 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (-1310413892) : (((/* implicit */int) arr_5 [i_0])))))))) ? (min((min((((/* implicit */int) arr_5 [i_0])), (-901774439))), (((((/* implicit */_Bool) (unsigned short)33178)) ? (1195878743) : (1195878743))))) : (((((/* implicit */_Bool) 1195878736)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1 - 2]))))));
            }
        } 
    } 
    var_13 += var_9;
    var_14 ^= ((/* implicit */long long int) var_2);
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (signed char)23)) ? (4294967266U) : (4294967289U)))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (4119183397386026632LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}
