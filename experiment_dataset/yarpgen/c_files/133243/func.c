/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133243
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_12);
        arr_5 [(unsigned char)0] |= ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)92))) >= (((((/* implicit */_Bool) 1540358355)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))))))))) : (((unsigned int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (var_14)));
}
