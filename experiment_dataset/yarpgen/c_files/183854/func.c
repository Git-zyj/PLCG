/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183854
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
    var_16 = (unsigned char)232;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
        var_18 = ((/* implicit */short) arr_1 [10LL] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) ((_Bool) (short)4095)));
        arr_7 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 0LL)) : (2ULL))), (5ULL)));
        var_19 *= ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) arr_3 [i_1] [i_1]))))))));
    }
    var_20 = ((/* implicit */unsigned char) max((var_20), ((unsigned char)172)));
    var_21 = var_10;
}
