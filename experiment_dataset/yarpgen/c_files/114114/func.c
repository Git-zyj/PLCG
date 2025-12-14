/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114114
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
    var_19 = ((/* implicit */signed char) var_2);
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_9), (var_18)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)192)), (2927199292897430956ULL)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))), (var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0])) / (2927199292897430973ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (arr_1 [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))))));
        var_22 = ((/* implicit */unsigned int) (-(var_9)));
    }
}
