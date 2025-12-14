/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115460
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
    var_12 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_13 &= ((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))));
        var_14 = ((/* implicit */long long int) var_2);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_15 = ((/* implicit */short) (~(max((((arr_0 [i_1] [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */unsigned long long int) var_7))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((arr_2 [i_1]) - (14789800413460846772ULL)))))), (max((((/* implicit */long long int) -1013259674)), (17LL))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)68)))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (25U)))))) && (((/* implicit */_Bool) min((arr_5 [i_1]), (((/* implicit */unsigned long long int) ((var_3) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))))))));
        var_18 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (arr_3 [i_1] [i_1])))) ? (((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [11LL] [i_1]))) : (12U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_1] [i_1]))))))), (((((/* implicit */_Bool) ((int) 1646555656))) ? (((var_9) + (((/* implicit */long long int) 4294967287U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))));
    }
}
