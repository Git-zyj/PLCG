/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103778
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
    var_10 = ((/* implicit */int) min((((/* implicit */long long int) var_9)), (var_5)));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)127))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((int) (unsigned char)77));
        var_12 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [5U] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)123)))))));
    }
}
