/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119481
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
    var_19 = (-(((/* implicit */int) var_12)));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (var_13)))) : (((/* implicit */int) ((((/* implicit */int) var_14)) <= (var_8))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) + (max((((/* implicit */int) var_11)), (var_2)))))) : (var_0)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((((max((((/* implicit */int) arr_1 [i_0])), (var_7))) > (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))))) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) - (((/* implicit */int) arr_2 [i_0] [i_0])))) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) < (((/* implicit */int) arr_1 [i_0]))))) / (((/* implicit */int) arr_1 [(unsigned short)10]))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned long long int) var_16)), (var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))) < (max((var_7), (((/* implicit */int) arr_0 [i_0])))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned char) arr_0 [i_1]);
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (13600838789649423403ULL)));
    }
    for (unsigned short i_2 = 4; i_2 < 8; i_2 += 4) 
    {
        arr_7 [(unsigned char)4] = ((/* implicit */signed char) max(((-(((((/* implicit */int) arr_2 [(unsigned short)21] [i_2 - 2])) / (var_8))))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 + 2])) >= (((/* implicit */int) arr_3 [i_2 + 2])))))));
        var_25 = ((/* implicit */_Bool) arr_1 [(short)1]);
        arr_8 [i_2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_16)))))))));
    }
}
