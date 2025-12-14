/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15645
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
    var_15 = ((((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))))) != (max((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (var_8))), (((/* implicit */unsigned int) (_Bool)1)))));
    var_16 = var_4;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (short)-20825)) : (((/* implicit */int) (unsigned char)128))))))))));
        var_18 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [i_0] [i_0])))) == (((/* implicit */int) ((signed char) ((unsigned int) var_5))))));
    }
}
