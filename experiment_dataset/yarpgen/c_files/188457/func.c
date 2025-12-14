/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188457
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
    var_11 ^= ((/* implicit */unsigned short) var_10);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (max((min((402653184U), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((_Bool) var_9))))) : (((((_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3892314112U)) ? (((/* implicit */int) var_7)) : (var_4)))) : (((402653184U) >> (((var_9) - (4185474909U)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [12LL])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22839))) < (arr_0 [0U]))))) != (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1])))))))))))));
        var_14 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) (short)16511))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((unsigned int) var_8)) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)60393)) : (((/* implicit */int) (unsigned short)60395)))))));
            var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5152))));
        }
    }
}
