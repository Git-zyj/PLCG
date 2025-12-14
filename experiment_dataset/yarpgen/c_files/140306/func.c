/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140306
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
    var_16 += ((/* implicit */short) -1);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned short) 18446744073709551615ULL);
        arr_3 [i_0] = ((/* implicit */signed char) (~(18446744073709551615ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) ((int) (signed char)(-127 - 1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))));
    }
}
