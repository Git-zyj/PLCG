/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176111
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
    var_19 = ((/* implicit */short) ((max((min((4294967271U), (4294967269U))), (((((/* implicit */_Bool) var_1)) ? (var_1) : (var_7))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (((~(var_6))) == (((/* implicit */unsigned int) (~(var_10))))))))));
    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_10)) <= (((unsigned int) min((var_2), (-1295617812))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0 - 1] [9LL] |= ((/* implicit */short) arr_2 [i_0 + 2] [i_0]);
        arr_4 [7] [i_0 + 1] &= ((/* implicit */short) ((arr_0 [8U]) >> (((arr_1 [i_0]) + (365229807)))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((int) min((((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (((/* implicit */unsigned int) arr_1 [i_0 + 3])) : (arr_0 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 3]))) : (-1295617792)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) max((5682293734057068908LL), (((/* implicit */long long int) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (max((arr_7 [i_1] [i_1]), (((/* implicit */long long int) var_1))))))));
        arr_9 [6] &= ((/* implicit */int) (~(arr_7 [i_1] [i_1])));
        arr_10 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) -1295617812)) - (var_7))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1295617812)) ? (((/* implicit */int) (unsigned char)0)) : (1295617796)));
        arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) 57518285U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) : ((-(((arr_7 [i_1] [i_1]) ^ (((/* implicit */long long int) arr_2 [i_1] [7U]))))))));
    }
}
