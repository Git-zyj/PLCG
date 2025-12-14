/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181013
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
    var_13 = ((/* implicit */unsigned char) 8388607LL);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4413)) ? (((/* implicit */int) (short)4387)) : (((/* implicit */int) (short)4388))))) || (((/* implicit */_Bool) (unsigned char)16))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_5))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_15 = var_4;
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-4412)) ? (((((/* implicit */unsigned long long int) 0)) - (10306344983940115442ULL))) : (((/* implicit */unsigned long long int) -4980156537602675619LL)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
}
