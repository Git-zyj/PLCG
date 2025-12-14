/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129513
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4294967295U)) <= (((((/* implicit */_Bool) (~(1U)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) (+(10U))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_1)))) ? (((long long int) (-(var_1)))) : (((/* implicit */long long int) 12U))));
        var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((12U) % (4294967274U)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [8U]))))) : (max((((12U) << (21U))), (((/* implicit */unsigned int) var_12))))));
        var_15 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_2)))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((min((var_1), (((/* implicit */unsigned long long int) var_2)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_2 [(unsigned short)0])), ((-(arr_5 [i_1] [i_1]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (4294967283U)))) ? (((/* implicit */long long int) 4294967274U)) : (var_7)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((4294967274U), (22U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) : (min((arr_5 [i_1] [i_1]), (((/* implicit */long long int) 2U)))))) != (((/* implicit */long long int) (+(arr_1 [10U] [10U]))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 4294967293U)) || (((/* implicit */_Bool) 22U)))))))) ? (((((/* implicit */_Bool) max((33U), (51U)))) ? (((((/* implicit */_Bool) arr_0 [(short)2])) ? (arr_0 [2LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) || (((/* implicit */_Bool) 4294967250U)))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((4294967244U) != (21U)))), (4294967295U))))));
        var_17 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4294967294U)))) - (4294967283U))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 1U)) && (((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))));
    }
    var_18 = ((/* implicit */short) var_4);
    var_19 = ((/* implicit */unsigned int) min((var_19), (var_11)));
}
