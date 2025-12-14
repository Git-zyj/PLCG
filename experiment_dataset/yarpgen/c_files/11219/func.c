/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11219
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_5 [i_0] [13ULL] = ((/* implicit */unsigned int) -2922916612194509311LL);
            var_10 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 4910100335581644306ULL))))), (var_6)));
        }
        var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((1340812126513002872LL) >> (((((/* implicit */int) var_4)) - (20940))))) : (((1340812126513002872LL) % (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
        var_12 = (-((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-30286))))))));
    }
    var_13 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)220))) < (var_9))) || (((/* implicit */_Bool) ((var_8) % (((/* implicit */int) (unsigned char)242))))))))));
}
