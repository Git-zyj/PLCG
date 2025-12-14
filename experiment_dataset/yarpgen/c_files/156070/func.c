/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156070
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
    var_16 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_2 [0ULL] &= ((/* implicit */unsigned char) max((7649993722105332292ULL), (((/* implicit */unsigned long long int) (unsigned short)3847))));
        arr_3 [i_0] [16] |= ((/* implicit */unsigned int) var_14);
    }
    var_17 = ((/* implicit */long long int) ((min((((/* implicit */long long int) var_10)), (((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))))) <= (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_4)), (var_14))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_15))))))))))));
}
