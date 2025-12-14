/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18765
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) var_0);
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)69)) && (((/* implicit */_Bool) 4152306758U))))) != (max((arr_1 [(signed char)12]), (((/* implicit */int) (unsigned char)118))))))), (((signed char) ((signed char) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_7 [(signed char)6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)100)) >> (((((/* implicit */int) arr_6 [(signed char)8])) - (179)))));
        arr_8 [(short)10] = ((((/* implicit */_Bool) arr_5 [i_1 + 1] [(signed char)16])) ? (((/* implicit */int) arr_5 [i_1 + 2] [(unsigned short)12])) : (((/* implicit */int) arr_5 [i_1 + 1] [2])));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((short) arr_2 [i_1 + 2]));
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)137))));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_13 [(unsigned char)17] = ((/* implicit */_Bool) ((int) ((_Bool) var_11)));
        arr_14 [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-5)) == (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [8ULL]))) : (arr_12 [i_2 + 2] [i_2 + 2])));
        arr_15 [i_2] = ((((((/* implicit */_Bool) arr_5 [i_2] [(signed char)2])) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) var_9)))) | ((+(((/* implicit */int) var_11)))));
    }
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) max((var_9), (var_10))))))) ? (max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) var_1))));
}
