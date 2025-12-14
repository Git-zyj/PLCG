/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107185
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) > (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) var_8)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) 13);
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)27956)))))));
        arr_3 [(unsigned short)12] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (114)))))), (((unsigned int) arr_0 [i_0] [(short)7]))))));
    }
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((((/* implicit */_Bool) ((signed char) 912724734U))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (0LL)))))) ? (var_5) : (((/* implicit */unsigned long long int) max(((-(var_7))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (5250090294778358690LL))))))))));
}
