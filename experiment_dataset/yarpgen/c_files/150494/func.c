/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150494
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [7ULL] [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */int) (_Bool)1)), (33554432))), (((((/* implicit */int) (unsigned short)65533)) / (((/* implicit */int) (unsigned short)65533))))));
        var_20 &= ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */unsigned int) var_4)) >= (var_9))) || (((/* implicit */_Bool) var_17)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((int) (((_Bool)1) ? (2434798776430195967ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned int) (_Bool)1)), (var_9))))), (max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))))))))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) var_0))));
}
