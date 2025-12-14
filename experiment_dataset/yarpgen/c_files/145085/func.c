/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145085
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
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) 1174831426)) ? (10677280691202196712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) - (var_0)))))) >> (((var_15) - (6227056978083403071LL)))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_15))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) -602875520)) : (max((923529315492737181LL), (((/* implicit */long long int) var_10))))));
        var_22 = ((/* implicit */int) arr_2 [i_0]);
        var_23 |= ((/* implicit */long long int) max((max((arr_2 [i_0 - 3]), (((/* implicit */unsigned long long int) 16777215U)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -605733280)), (((var_3) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((var_0) * (((/* implicit */unsigned int) arr_5 [i_1 + 1]))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1]))))) >= (((var_13) ? (var_10) : (((/* implicit */int) (unsigned short)0))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) (~(arr_2 [i_1])));
    }
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_18)), (max((var_2), (-8063155837269335829LL)))))))))));
    var_25 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6))))));
}
