/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126198
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (-2147483647 - 1)))) ? (((/* implicit */int) arr_3 [i_0])) : ((-(((/* implicit */int) (_Bool)1))))));
        var_20 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) 1108339841U)))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) arr_3 [i_0 + 1]));
    }
    var_21 = ((/* implicit */unsigned int) var_6);
    var_22 = ((/* implicit */unsigned int) var_17);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_3)) > (var_0)));
}
