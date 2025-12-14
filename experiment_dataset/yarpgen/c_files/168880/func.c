/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168880
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_10 |= ((/* implicit */short) ((unsigned int) var_5));
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(1067798308)));
        var_11 = ((/* implicit */short) min((((int) (unsigned short)44660)), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)952)))))));
    }
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_9))));
    var_13 = ((/* implicit */unsigned int) (short)-9969);
}
