/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177312
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
    var_16 = (-(var_1));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (-1979425115)))));
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (max((-1), (((/* implicit */int) var_9)))) : (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((217517975U), (((/* implicit */unsigned int) var_12)))))))) : (((((/* implicit */_Bool) 1352119865)) ? (((/* implicit */int) (unsigned short)42347)) : (((/* implicit */int) (unsigned short)49555))))));
    }
    var_18 = ((/* implicit */signed char) var_1);
}
