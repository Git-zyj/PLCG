/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168920
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) 1353470263))), ((+(min((((/* implicit */unsigned long long int) var_5)), (var_0)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))));
        var_10 = ((/* implicit */int) max((var_10), ((~((+(var_4)))))));
    }
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_0))));
}
