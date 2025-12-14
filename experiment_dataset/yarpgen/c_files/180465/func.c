/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180465
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) (signed char)84);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) -1501277184104402303LL);
        arr_4 [(_Bool)0] = ((/* implicit */long long int) ((unsigned short) arr_0 [i_0]));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (short)14594)) : (((/* implicit */int) (signed char)84))))));
    }
    var_15 = ((/* implicit */unsigned int) (short)14594);
}
