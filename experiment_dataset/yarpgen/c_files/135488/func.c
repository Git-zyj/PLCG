/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135488
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))))));
        arr_3 [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)15435)) - (((/* implicit */int) arr_0 [i_0])))))));
        var_19 = ((/* implicit */short) min((var_7), ((-(((((/* implicit */unsigned long long int) 3914168003U)) - (var_7)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = arr_5 [6LL];
        arr_8 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [i_1]))))));
    }
    var_20 = ((/* implicit */long long int) ((_Bool) var_0));
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_0)) + (99)))))), (var_13)));
}
