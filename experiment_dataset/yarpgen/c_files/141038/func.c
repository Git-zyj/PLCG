/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141038
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_5)) : (((long long int) 5ULL)))), (((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) var_7))));
        arr_5 [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)2])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [17U])) != (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) var_7)) % (((/* implicit */int) arr_1 [i_0]))))));
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)0)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? ((~(((unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-86))))) ? ((~(((/* implicit */int) (signed char)48)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_7 [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2]))) : ((~(arr_9 [i_1] [i_1 - 1])))));
        arr_11 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_9 [(unsigned char)1] [i_1 + 1]), (((/* implicit */long long int) arr_8 [i_1] [i_1 + 2])))))));
        var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_8 [10U] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) 1529100581U))))))));
    }
    var_13 = max((var_4), (var_0));
    var_14 = ((/* implicit */unsigned char) var_3);
}
