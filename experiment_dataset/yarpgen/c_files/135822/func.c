/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135822
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) max((((/* implicit */short) arr_1 [i_0])), (arr_0 [2]))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_0);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_13 = ((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) var_2)));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_1] [i_1])) <= (562949953421308LL)))) == (arr_4 [i_1] [i_1])));
    }
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (934909362425299869ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_4)))))))));
}
