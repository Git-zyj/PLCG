/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152264
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (-((~(var_6))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 288212783965667328ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [14]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2599516986U)))));
        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (103334461) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        arr_5 [1] = -103334457;
        var_14 = ((/* implicit */unsigned int) ((int) var_8));
    }
    var_15 = ((/* implicit */_Bool) var_7);
}
