/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177647
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((max((((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((unsigned long long int) var_12)))) >> (((var_16) - (11548079441884436346ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0])))) ? (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_14)))))));
                arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_1] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [(short)0]))) : (var_6)))));
                arr_5 [(unsigned short)8] [i_1] [i_0] = ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (var_8)))) ? (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_17)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (var_13) : (var_16)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 + 1]))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((arr_2 [12U] [i_2]) ? (var_3) : (((/* implicit */unsigned long long int) ((int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((int) min((var_15), (((/* implicit */unsigned short) var_1)))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_15 [(unsigned short)20] [i_3 + 1] = ((min((((/* implicit */unsigned long long int) arr_11 [i_3 + 1])), (var_8))) / (((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_3 + 1]))));
        var_22 = ((/* implicit */long long int) max((((/* implicit */int) min((var_17), (((/* implicit */unsigned short) arr_12 [i_3 + 1]))))), (((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_12 [i_3]))))));
    }
}
