/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10052
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_12)), (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((((((/* implicit */unsigned int) arr_2 [(unsigned short)16])) / (3801921519U))) | (((((/* implicit */unsigned int) arr_2 [i_0])) ^ (493045776U)))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_2 [i_0]))))), (arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) -418911101)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [7]), (((/* implicit */unsigned char) (_Bool)1)))))))))));
        var_20 = ((var_14) > (((/* implicit */unsigned long long int) ((max((493045801U), (((/* implicit */unsigned int) (short)6)))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_21 = ((/* implicit */unsigned int) (_Bool)1);
}
