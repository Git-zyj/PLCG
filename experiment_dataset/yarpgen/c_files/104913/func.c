/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104913
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 += (-((+(((/* implicit */int) var_1)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-122))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40105))))) : (((/* implicit */int) arr_0 [i_0])))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (signed char)121))));
    }
    var_14 = ((/* implicit */signed char) var_1);
}
