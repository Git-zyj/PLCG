/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119953
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
    var_18 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -8407526455116808403LL))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (2197461090920602454LL)));
        var_20 ^= -5100811289170742464LL;
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) arr_6 [i_1]);
        arr_7 [i_1] = ((/* implicit */signed char) 1135168332U);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 2345710781U))));
        var_23 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((852253671), (((/* implicit */int) (short)-18453)))))));
    }
}
