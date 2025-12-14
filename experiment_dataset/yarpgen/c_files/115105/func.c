/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115105
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (min((min((((/* implicit */long long int) var_4)), (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9633)) ? (((/* implicit */int) var_0)) : (var_4))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) (unsigned char)40))))) / ((+(((/* implicit */int) (signed char)-118)))))))));
        var_14 = ((_Bool) max((1899815088), (((/* implicit */int) (signed char)124))));
    }
}
