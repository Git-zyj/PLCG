/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106386
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned short) var_10)), (var_7))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) (_Bool)1))))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
        var_12 = var_10;
        var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) var_3)) : (var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (arr_1 [4])));
    }
    for (int i_1 = 4; i_1 < 17; i_1 += 2) 
    {
        arr_6 [(unsigned short)5] [6] = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) arr_4 [15] [i_1 + 1])) && (((/* implicit */_Bool) var_8)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30)))))));
        var_14 = ((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 - 1]);
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 2] [i_1])) / (((/* implicit */int) arr_4 [i_1 - 2] [(unsigned short)5]))))) ? (((/* implicit */int) min((arr_4 [i_1 - 2] [17U]), (arr_4 [i_1 - 2] [i_1 + 1])))) : (((/* implicit */int) arr_4 [i_1 - 2] [2LL]))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1] [i_1])))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_4)))))) : ((((-(arr_5 [i_1] [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])))))))))))));
    }
}
