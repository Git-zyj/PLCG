/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181668
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
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_21 -= ((/* implicit */unsigned char) ((unsigned long long int) 11627352677493564848ULL));
        var_22 = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_2 [i_0] [10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) var_1)) : (max((0LL), (((/* implicit */long long int) (short)-8103))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((var_11) | (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned int) (~(511)))))))));
    }
}
