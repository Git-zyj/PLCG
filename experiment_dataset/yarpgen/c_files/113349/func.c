/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113349
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (8800442222572939139ULL))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])))), (var_8))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) ((unsigned char) -1))), (var_9)))));
        var_17 = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) 7323174553429168245LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)1]))) : (18446744073709551615ULL)))))));
    }
    var_18 = ((/* implicit */signed char) var_8);
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)98))));
}
