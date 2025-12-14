/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104990
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
    var_13 = ((/* implicit */_Bool) max((var_13), ((!(((((((/* implicit */_Bool) 1987775550958290983LL)) ? (3775807535U) : (((/* implicit */unsigned int) -149168281)))) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_14 += ((/* implicit */unsigned char) ((((arr_1 [i_0 - 2]) != (((/* implicit */unsigned long long int) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (var_10))))) : ((~(arr_1 [i_0 + 2])))));
        arr_3 [i_0] [i_0] = var_1;
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1]) * (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((arr_2 [i_0 + 2]) >= (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_0)))))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (var_7)))));
    }
    var_15 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_12)))) < (((/* implicit */int) var_6))));
    var_16 = ((/* implicit */int) var_3);
}
