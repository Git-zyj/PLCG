/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146110
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
        var_20 = var_7;
    }
    var_21 = ((/* implicit */signed char) ((min(((~(var_3))), (((/* implicit */long long int) var_8)))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
}
