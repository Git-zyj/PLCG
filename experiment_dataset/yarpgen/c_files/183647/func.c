/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183647
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))) : (((/* implicit */int) min((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 + 1]))))));
        arr_5 [6U] &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3137))) : (arr_0 [i_0 - 1] [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1]))));
        arr_11 [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) arr_1 [0LL] [(short)7]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)3137)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)203))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [(_Bool)0] [i_1]), (((/* implicit */unsigned char) var_9)))))) : (arr_8 [i_1 - 1] [i_1 + 1])))));
        var_17 = ((/* implicit */short) arr_7 [i_1 - 1]);
    }
    var_18 += ((/* implicit */unsigned short) var_14);
}
