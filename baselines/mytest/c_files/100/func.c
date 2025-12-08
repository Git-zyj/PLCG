/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/100
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 *= ((5591483090965707555LL) + (-5591483090965707556LL));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0]);
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) min((var_17), (((/* implicit */unsigned long long int) 5591483090965707555LL)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24820)))));
        }
    }
    var_20 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */int) var_3)) / (((/* implicit */int) var_5)))))) + ((+(((/* implicit */int) ((signed char) var_5)))))));
}
