/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122304
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
    var_11 &= ((/* implicit */int) max((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) + (max((((/* implicit */long long int) var_8)), (var_9)))))));
    var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_5)))) : ((-(((/* implicit */int) var_4)))))) : (((/* implicit */int) var_7))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) + ((-(((/* implicit */int) var_8)))))))));
        var_14 = ((/* implicit */_Bool) var_10);
        var_15 = ((/* implicit */unsigned char) min((max((arr_1 [(signed char)16] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_3))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_6)))))))));
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) var_0)) % (var_3))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))) ? (arr_0 [i_0]) : (((arr_1 [i_0 - 3] [i_0 + 1]) - (((/* implicit */unsigned long long int) min((var_10), (var_2))))))));
    }
    for (unsigned short i_1 = 4; i_1 < 19; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1 - 3] = max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_1 [(unsigned short)13] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_0))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))));
        var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_10)), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_1 [(short)3] [10U]))), (max((((/* implicit */unsigned long long int) var_0)), (arr_1 [(unsigned short)12] [i_1])))))));
        arr_7 [i_1] &= ((/* implicit */int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (var_6) : (var_2))) <= (((/* implicit */long long int) var_3))))), (var_2)));
        var_17 = ((/* implicit */int) var_8);
    }
    for (unsigned short i_2 = 4; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) var_9);
        arr_10 [i_2 - 2] [i_2 - 2] |= ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) 1023)) ? (3432085748U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (3432085730U))))) - ((+(((/* implicit */int) (((_Bool)1) || ((_Bool)1))))))));
        var_19 = ((/* implicit */signed char) ((max((arr_1 [(unsigned short)2] [i_2]), (((/* implicit */unsigned long long int) (-(var_2)))))) <= (arr_0 [i_2])));
        arr_11 [(signed char)12] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_3 [i_2 - 4])) + (min((((/* implicit */int) var_7)), (var_3)))))));
    }
    var_20 = ((/* implicit */int) var_1);
}
