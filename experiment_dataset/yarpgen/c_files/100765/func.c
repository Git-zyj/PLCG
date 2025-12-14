/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100765
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
    var_15 = ((/* implicit */int) (((+(((3492755088U) ^ (var_9))))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((((/* implicit */int) (unsigned short)12883)) - (863871049))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((long long int) arr_0 [i_0 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0 - 3]), (arr_0 [i_0 - 2]))))) : (max((var_0), (((/* implicit */long long int) var_11)))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((736246060), (((/* implicit */int) (signed char)119))))), (min((((/* implicit */long long int) (unsigned char)228)), (arr_1 [i_0])))));
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) var_12)) + (var_11)))))) != (((unsigned long long int) arr_0 [i_0 - 3]))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (~(0U))))))), (min((((/* implicit */long long int) (unsigned short)57875)), (var_0))))))));
    }
}
