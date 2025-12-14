/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122501
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
    var_15 -= ((/* implicit */unsigned char) var_10);
    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (14403012373590258837ULL)));
    var_17 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
    var_18 = ((/* implicit */int) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [20LL] = ((/* implicit */short) var_12);
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) var_14)) + (((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (var_3))))))))))));
        var_20 = ((/* implicit */unsigned long long int) var_6);
    }
}
