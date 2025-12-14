/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141472
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
    var_19 = var_18;
    var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 1048575ULL)) ? (18446744073708503040ULL) : (((/* implicit */unsigned long long int) var_8)))))) ? (max((((((/* implicit */_Bool) var_14)) ? (18446744073708503041ULL) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) max((var_7), (var_10)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (var_16) : (var_3)))) - (max((((/* implicit */unsigned long long int) var_1)), (18446744073708503040ULL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((max((arr_1 [i_0 - 1] [i_0]), (arr_1 [i_0 - 1] [i_0 - 2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(1048575ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((1048597ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))))))))))));
                var_22 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) 10196120319235316989ULL)));
            }
        } 
    } 
}
