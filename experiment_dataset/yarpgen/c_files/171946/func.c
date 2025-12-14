/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171946
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) var_3);
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_0 [i_0 + 1] [i_0 + 2])))));
    }
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)-41)))))))));
}
