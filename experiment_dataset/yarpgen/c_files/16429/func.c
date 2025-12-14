/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16429
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (586860903U)))) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((586860903U) >> (((((/* implicit */int) var_8)) + (11634)))))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((var_7), (((/* implicit */short) (unsigned char)174))))))))));
    var_12 -= ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0 - 1]))) >> (((((/* implicit */int) var_3)) - (22295)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_10);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) max((var_9), (((/* implicit */long long int) var_3))));
        arr_7 [i_1] = ((/* implicit */short) ((unsigned char) ((unsigned char) (_Bool)1)));
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) % (586860903U)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (18446744073709551602ULL)))));
        arr_8 [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_1] [i_1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_1) || (((/* implicit */_Bool) var_0))))))))));
    }
    var_15 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)40866)) - (40844)))))) : (((unsigned int) var_0)))))));
}
