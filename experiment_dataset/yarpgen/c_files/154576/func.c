/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154576
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
    var_13 = ((/* implicit */signed char) min((var_9), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (33554416))) * ((-(((/* implicit */int) (signed char)-59))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(var_7)))))) : (var_8)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0 - 1] [21LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [(_Bool)1]))));
        arr_4 [(unsigned short)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (((arr_0 [i_0 + 1]) | (arr_0 [i_0 - 1])))));
        var_15 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_2 [17U] [i_0 - 1])) << (((arr_0 [(short)1]) + (1249285632))))), (((/* implicit */int) ((short) arr_1 [i_0 - 2])))));
    }
}
