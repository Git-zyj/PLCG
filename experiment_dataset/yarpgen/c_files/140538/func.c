/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140538
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 -= ((/* implicit */long long int) min((max(((short)-22381), (((/* implicit */short) (_Bool)1)))), (arr_2 [i_0])));
        var_20 = ((/* implicit */long long int) min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) var_13))))) >= (((/* implicit */int) var_13)))))));
        var_21 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1981902450)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-97))))) ^ (arr_4 [i_1])));
        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-65))));
        var_23 = ((/* implicit */short) min((var_23), (var_7)));
    }
    var_24 -= var_15;
}
