/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126018
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) max((4407295363627696979LL), (var_5)))) ? (((/* implicit */long long int) ((int) var_4))) : (max((var_5), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_13 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)222))))) : (8436390105625336755LL))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) (unsigned char)60)) ^ (((/* implicit */int) (unsigned char)60)))))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (max(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) 25U)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) (unsigned short)61765)))))) : ((+(((/* implicit */int) min((var_9), (arr_1 [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((0) * (((/* implicit */int) arr_3 [i_1])))))))) - ((+(((/* implicit */int) arr_3 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
    }
    var_16 += ((/* implicit */short) (~(((max((var_5), (((/* implicit */long long int) var_11)))) << (((((/* implicit */int) var_9)) - (40949)))))));
}
