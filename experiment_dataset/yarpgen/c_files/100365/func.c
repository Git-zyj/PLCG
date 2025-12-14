/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100365
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
    var_19 = ((/* implicit */short) ((signed char) (-(var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)0))));
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned long long int) -26568767470480728LL)) != (var_10));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775776ULL)) ? (((/* implicit */int) (unsigned short)10324)) : (((/* implicit */int) (unsigned short)0))));
        var_22 = ((/* implicit */unsigned char) -9223372036854775806LL);
    }
}
