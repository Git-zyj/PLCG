/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145593
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
    for (short i_0 = 1; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((1071421307U) | (4294967295U)))))) ? (((((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0]))))) / ((~(arr_0 [i_0]))))) : ((~(((arr_0 [i_0]) % (((/* implicit */long long int) 3498881092U))))))));
        arr_3 [(short)14] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((511U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 1]))))) || (((/* implicit */_Bool) ((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((var_8) - (2664331755U)))))))));
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_1 + 1]);
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_5))) > (max((((/* implicit */long long int) (-(arr_6 [i_1] [i_1 - 1])))), (var_5)))));
        arr_8 [i_1] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 4294967295U)))));
    }
    var_17 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((var_0) * (1245576041U))) : (((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) : (var_4)))))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U))), (var_8))) : (min((((/* implicit */unsigned int) (signed char)-85)), (4293918712U))));
    var_18 = ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) (_Bool)1))));
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) || (var_12))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) : (var_0)))), (((((/* implicit */_Bool) 18U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))) : (var_13)))) : (((((/* implicit */_Bool) (short)13178)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2971))) : (var_11)))))));
}
