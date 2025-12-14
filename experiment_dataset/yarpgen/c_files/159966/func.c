/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159966
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
    var_20 |= ((/* implicit */unsigned long long int) (+(var_5)));
    var_21 = ((/* implicit */_Bool) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_1)))) ? (arr_1 [i_0 + 2]) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_1 [i_0 - 2])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
    }
}
