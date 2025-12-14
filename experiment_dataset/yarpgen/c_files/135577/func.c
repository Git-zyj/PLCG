/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135577
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
    var_15 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((4156431364U), (((/* implicit */unsigned int) min(((unsigned short)14649), ((unsigned short)0)))))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_6);
    }
    var_17 &= var_7;
}
