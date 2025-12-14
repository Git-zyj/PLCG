/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17587
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_11)))))) < (var_12)));
    var_19 = ((/* implicit */int) -8629142693814789493LL);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) var_11);
        var_21 = ((/* implicit */unsigned int) max((var_21), (min((((456041737U) >> (((((/* implicit */int) (unsigned short)27531)) - (27516))))), (3838925558U)))));
    }
    for (int i_1 = 1; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */_Bool) arr_2 [i_1]);
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) -1286747837)), (min((arr_2 [i_1 - 1]), (((/* implicit */long long int) arr_4 [i_1 - 1]))))));
    }
    for (int i_2 = 1; i_2 < 19; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (456041737U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))))) * (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2 + 1])) : (var_9)))));
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            arr_12 [i_2] = ((/* implicit */int) min((min((((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_5 [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(signed char)15])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_4))))))), (((/* implicit */long long int) 3461328713U))));
            var_25 = ((/* implicit */long long int) var_12);
            arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)59758)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)37))) : (((((/* implicit */_Bool) min((13287607791926375345ULL), (13740472844368594732ULL)))) ? (-8843996601124011474LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77)))))));
        }
        var_26 = ((/* implicit */short) (~(456041737U)));
        var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4706271229340956893ULL)) ? (669889051U) : (((/* implicit */unsigned int) -1572589508))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_3 [i_2 - 1]))))) + ((-(((4706271229340956883ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28)))))))));
    }
}
