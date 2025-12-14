/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141633
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
    var_13 = ((/* implicit */short) ((var_7) >= (((((((/* implicit */int) var_1)) - (var_7))) / (((((/* implicit */_Bool) (short)-22627)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max((min((((((/* implicit */int) (_Bool)1)) * (var_12))), (((/* implicit */int) (unsigned char)220)))), (((((/* implicit */int) max(((short)-22618), ((short)-22627)))) / (((/* implicit */int) var_1))))));
        var_14 = ((/* implicit */long long int) (short)22612);
    }
    var_15 = ((/* implicit */unsigned short) (-((-(((((/* implicit */long long int) var_0)) ^ (-6495024972549587685LL)))))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 = ((/* implicit */short) var_3);
}
