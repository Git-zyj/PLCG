/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117030
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
    var_11 = ((/* implicit */short) ((((/* implicit */long long int) (~(((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_8))))))) & ((~((~(var_10)))))));
    var_12 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (4294967288U))) ? (((/* implicit */int) ((((7U) & (1U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967288U))))))))) : (((/* implicit */int) var_9))));
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (4294967288U)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) (~(((unsigned long long int) ((1073741824LL) & (((/* implicit */long long int) 8U)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((arr_1 [i_0 + 2] [i_0 + 2]) / (arr_1 [i_0 - 1] [i_0 + 2]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) (unsigned char)35))) <= (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_8))))))), (((((13U) >> (((arr_1 [i_0] [(short)8]) + (1084716305832282192LL))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [(short)2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124)))))))))));
    }
    var_15 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 2U)), (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_6))) : (((((/* implicit */unsigned long long int) var_3)) & (8109251278604266160ULL)))))));
}
