/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146280
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned short) 4321874729311550147ULL);
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(14838349542323361211ULL))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned int) (unsigned short)15360);
    }
    var_17 &= ((/* implicit */short) max((((/* implicit */unsigned int) var_2)), (var_4)));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50192)) ? (1446906804) : (-24)));
    var_19 = ((/* implicit */_Bool) 7564951878578122225ULL);
}
