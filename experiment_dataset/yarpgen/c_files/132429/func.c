/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132429
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-54)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0]))), (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)23))))));
        arr_5 [i_0] = (~((-(((((/* implicit */int) var_14)) - (((/* implicit */int) var_5)))))));
    }
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((/* implicit */unsigned long long int) (~(((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))))));
    var_16 = ((/* implicit */int) var_0);
    var_17 = ((/* implicit */unsigned short) var_10);
}
