/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121205
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
    var_10 = ((/* implicit */short) ((int) -6271990478947367741LL));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 17881322538163534230ULL);
        arr_3 [i_0] = ((/* implicit */short) ((_Bool) (short)-20717));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) < (565421535546017397ULL))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(var_8)));
    }
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)57995), (((/* implicit */unsigned short) var_1)))))))) : (((unsigned int) (unsigned short)7541))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_1)) >> (((((/* implicit */int) (unsigned char)141)) - (115)))))))) : (var_3)));
}
