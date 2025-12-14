/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109631
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
    var_13 = ((/* implicit */_Bool) (((((-(((/* implicit */int) var_2)))) > (((/* implicit */int) var_4)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_3) <= (11165213127293446126ULL))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_0 [i_0])), ((+(((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] [(short)3] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned short) var_0)), (arr_2 [i_0]))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        arr_7 [i_1] [0U] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-20607)), (245931463U)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-23013))) & (245931475U)))) : (((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)6]))) : (var_10))))));
        var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_5 [i_1])), (var_11)));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_2))));
    }
}
