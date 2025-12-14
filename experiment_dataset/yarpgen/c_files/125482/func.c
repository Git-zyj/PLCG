/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125482
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
    var_14 = ((/* implicit */unsigned int) min((var_8), (((/* implicit */long long int) min((var_12), (((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)51055)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_5)), (arr_1 [i_0])))))))) > (min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1]))));
        var_16 = ((/* implicit */short) (~((~(((/* implicit */int) arr_1 [i_0 + 2]))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) arr_3 [(short)7] [(short)7]);
        var_18 += ((/* implicit */short) min(((~(var_12))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)8260)) << (((var_3) + (7107129822170519880LL)))))) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_10)))) : (((/* implicit */int) (_Bool)0))))));
        var_19 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_1])), (var_6)))), (((arr_3 [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)13] [(short)5])))))))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_2])) ? (min((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)8260)) : (((/* implicit */int) (short)8260))))))), ((~(arr_6 [i_2] [i_2])))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_2])), (var_1)))) || (var_10)));
    }
}
