/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115122
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
    var_10 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned char) arr_5 [i_0] [2LL]);
            var_11 = ((/* implicit */int) (unsigned char)82);
            var_12 = ((/* implicit */unsigned char) (signed char)-52);
        }
        arr_7 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) 241646506)) ^ (17027955345053978399ULL))));
        var_13 ^= (unsigned short)4588;
    }
}
