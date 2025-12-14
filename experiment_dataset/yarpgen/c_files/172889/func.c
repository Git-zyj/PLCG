/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172889
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) ((long long int) ((unsigned char) (-2147483647 - 1))));
        var_11 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (11318412269606209923ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11421))))))));
        var_12 -= ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) arr_0 [13LL] [i_0])))));
        arr_2 [(unsigned short)2] = ((/* implicit */unsigned char) ((arr_1 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        var_13 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_8)))));
    }
    var_14 = ((/* implicit */unsigned char) var_6);
}
