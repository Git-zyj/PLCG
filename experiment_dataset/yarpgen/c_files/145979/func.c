/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145979
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0))));
    var_14 = ((/* implicit */long long int) ((max(((-(var_10))), (8484111695072072569ULL))) >= (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 1252024535U)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (short)26)))))))));
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 19)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) 8484111695072072562ULL);
        var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (1333464597U)))))) ? (((((/* implicit */int) arr_0 [i_0])) + ((+(1073741824))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
    }
}
