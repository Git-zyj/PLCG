/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134420
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 488168069)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))) <= (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) var_3))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)18]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)68)), ((unsigned short)59859)));
    }
    var_14 = ((/* implicit */unsigned short) max((2469625114U), (4237366813U)));
    var_15 = ((/* implicit */unsigned int) 488168054);
}
