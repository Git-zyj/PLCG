/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114363
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
    var_14 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(21632864U)))) ^ (min((var_2), (((11170151829236421106ULL) * (((/* implicit */unsigned long long int) 1595331249U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((unsigned char) var_5))), (min((((/* implicit */unsigned long long int) var_6)), (var_11))))) - (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10))))), (((var_11) ^ (((/* implicit */unsigned long long int) 2387107318U))))))));
                var_16 = ((/* implicit */_Bool) max(((~(((var_2) << (((var_12) - (16449796683738634868ULL))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_1])) > (((/* implicit */int) (short)24223)))) ? (((int) 1907859978U)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))));
                var_17 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */int) var_3)), (-1030809102))) : (((((/* implicit */_Bool) var_6)) ? (8) : (((/* implicit */int) arr_1 [i_1 + 3])))))));
            }
        } 
    } 
}
