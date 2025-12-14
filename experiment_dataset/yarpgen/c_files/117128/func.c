/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117128
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */unsigned char) 12295211908890419643ULL);
                var_19 *= ((unsigned char) ((arr_4 [i_0] [i_0 + 1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_16);
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_17))) : (((/* implicit */unsigned long long int) min((687841930U), (((/* implicit */unsigned int) 12))))))), (((/* implicit */unsigned long long int) var_12))));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) 2615999574U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_7)) : (var_15)))))) : (var_17))))));
}
