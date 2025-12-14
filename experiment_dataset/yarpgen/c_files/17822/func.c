/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17822
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
    var_17 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_11))))))));
    var_18 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (signed char)-64);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
    }
}
