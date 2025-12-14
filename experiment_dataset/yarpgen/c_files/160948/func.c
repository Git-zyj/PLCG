/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160948
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_4 [2] = ((/* implicit */long long int) arr_1 [11LL]);
        arr_5 [4] [i_0] = ((/* implicit */long long int) ((arr_3 [i_0 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) % (arr_0 [i_0 - 1] [i_0 + 4])));
    }
    for (unsigned char i_1 = 4; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_11 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_10 [i_1 - 4])) < (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_10 [i_1 + 1])) <= (((/* implicit */int) arr_10 [i_1 + 1]))))));
        arr_12 [i_1] [i_1] = ((/* implicit */short) ((var_18) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_11)), (arr_7 [i_1] [i_1 - 3])))))));
        var_20 = ((/* implicit */long long int) arr_7 [i_1] [(unsigned short)6]);
        var_21 = ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
    }
    for (unsigned char i_2 = 4; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (((unsigned int) -1642392412)))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) arr_13 [i_2 - 1] [i_2]))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) max((var_16), (var_16)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [(signed char)0]))) | (var_2))))))))));
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (var_2) : (min((var_8), (((/* implicit */long long int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1642392402)) ? (((/* implicit */unsigned int) var_12)) : (78041018U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) var_16)))))));
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((short) var_9)))));
    var_26 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_13)) & (((/* implicit */int) var_13)))) - (((/* implicit */int) var_7)))) & (((/* implicit */int) var_3))));
}
