/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146258
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
    var_19 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) arr_1 [i_0]))));
        var_21 ^= ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (var_2)))) ^ ((+(arr_2 [i_0] [i_0]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_14))))) - (min((arr_0 [i_0]), (((/* implicit */int) var_14))))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max(((~(arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (1ULL))))))));
    }
    var_23 = ((/* implicit */unsigned int) (-(((long long int) (unsigned short)65535))));
    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))));
}
