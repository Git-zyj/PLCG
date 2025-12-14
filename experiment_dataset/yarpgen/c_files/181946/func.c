/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181946
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))));
        var_12 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((1293089906) << (((((((/* implicit */int) var_1)) + (149))) - (26)))))))));
        var_13 += (((+(max((((/* implicit */int) (signed char)-101)), (-1293089907))))) + (((/* implicit */int) (((+(var_9))) > (-1293089912)))));
    }
    var_14 = ((((/* implicit */_Bool) var_1)) ? (((int) var_6)) : (((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) ((_Bool) var_0)))))));
}
