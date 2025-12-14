/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141579
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
    var_18 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (unsigned short)49691))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0] [i_0])))))) * ((+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)49691)) : (((/* implicit */int) (signed char)-52)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) max((min((((((var_5) + (9223372036854775807LL))) >> (((var_11) - (1678521497424991655ULL))))), (((/* implicit */long long int) min(((unsigned short)15845), (((/* implicit */unsigned short) var_17))))))), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
    }
    for (int i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15841))))) * (((((/* implicit */long long int) var_13)) / (var_12)))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_4))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */short) (unsigned short)60067);
        arr_13 [i_2] [16] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_4))))) ? (((unsigned long long int) arr_3 [(unsigned char)0])) : (((/* implicit */unsigned long long int) (-(var_5)))))), (min((((/* implicit */unsigned long long int) ((arr_0 [i_2]) ? (((/* implicit */int) arr_3 [(short)7])) : (((/* implicit */int) arr_11 [i_2] [i_2]))))), (((((/* implicit */_Bool) (signed char)-82)) ? (1101594849582620450ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    }
}
