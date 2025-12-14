/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125498
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
    var_13 = ((/* implicit */signed char) (unsigned short)666);
    var_14 = ((/* implicit */signed char) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) -1538615212)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)676))))));
    var_15 = ((int) ((((long long int) var_4)) | (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */int) (unsigned short)64870))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0]) >> (((((/* implicit */int) var_7)) + (101)))))) ? (((/* implicit */long long int) min((974774914), (((/* implicit */int) (unsigned short)64863))))) : (max((arr_0 [i_0]), (((/* implicit */long long int) var_5))))));
    }
    var_18 -= ((/* implicit */signed char) var_9);
}
