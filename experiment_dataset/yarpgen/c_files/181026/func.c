/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181026
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 |= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) - (((/* implicit */int) (unsigned short)11033))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [6ULL])), (min((((((/* implicit */_Bool) 1046712018)) ? (((/* implicit */int) (unsigned short)11033)) : (((/* implicit */int) (short)-9139)))), (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_4 [9LL] = ((/* implicit */unsigned int) (((~(((2611211794769035024ULL) >> (((1138116581U) - (1138116535U))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [(_Bool)1]) != (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535)))))))))));
    }
    var_21 = ((/* implicit */unsigned char) max((2147483647), (((/* implicit */int) (short)19994))));
    var_22 -= ((/* implicit */int) var_0);
}
