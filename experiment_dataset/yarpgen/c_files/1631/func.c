/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1631
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
    var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 3846595252U)) : (var_12)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((long long int) var_12))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (min(((-(arr_3 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_14)) ? (448372043U) : (((/* implicit */unsigned int) var_9)))))))))));
        var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((arr_2 [i_0] [i_0]) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((arr_2 [i_0] [i_0]) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_3 [i_0])))));
        var_18 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)1287)))), (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-1556)))) != (((/* implicit */int) (unsigned short)64261)))))));
        var_19 = ((/* implicit */signed char) 5458282238190851166ULL);
    }
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_10)))) ? (((var_14) ^ (((/* implicit */unsigned int) 8388607)))) : (var_14))) >> (((var_9) + (654673312)))));
}
