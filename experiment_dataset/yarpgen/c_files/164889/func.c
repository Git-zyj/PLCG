/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164889
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
    var_12 = ((/* implicit */unsigned char) max((((unsigned long long int) 0ULL)), (((/* implicit */unsigned long long int) var_5))));
    var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) && (var_9))))))) < (((/* implicit */int) var_1))));
    var_14 &= var_9;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (0ULL)))) ? (759277944U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))) >= (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (((((/* implicit */int) var_1)) >> (((/* implicit */int) (unsigned short)0)))))))));
                var_15 = ((/* implicit */short) ((((/* implicit */int) arr_1 [(unsigned short)2])) & (((((((/* implicit */int) arr_1 [i_1])) << (((18446744073709551615ULL) - (18446744073709551594ULL))))) - ((+(((/* implicit */int) (unsigned short)53716))))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_3)))), (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_3 [i_0] [i_1])));
            }
        } 
    } 
}
