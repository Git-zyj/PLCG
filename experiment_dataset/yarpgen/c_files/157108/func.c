/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157108
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
    var_12 = ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2818391458U)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) 2147483647);
        arr_3 [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_9), (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) arr_1 [i_0] [7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (0U)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (4294967295U))) : (var_2)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) + (max((var_0), (((/* implicit */int) var_8)))))) + (((/* implicit */int) ((unsigned char) 2147483647)))));
        arr_5 [(unsigned char)1] [(unsigned char)1] = ((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)255)));
        arr_6 [i_0] = ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) ((_Bool) (_Bool)1)))));
    }
}
