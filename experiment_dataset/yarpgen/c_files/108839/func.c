/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108839
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
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (1073741820) : (((/* implicit */int) (short)-3257)))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_16 = ((/* implicit */int) min((var_16), (((max((((/* implicit */int) arr_1 [(unsigned char)8])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (-1528068008) : (((/* implicit */int) (short)18617)))))) - (((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (83))))) / (((/* implicit */int) (_Bool)1))))))));
    }
    for (int i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 1])), (var_5))) != (max((15675553643570833940ULL), (((unsigned long long int) arr_3 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            var_17 = (-(arr_8 [i_1 - 3] [i_2] [i_2]));
            arr_11 [i_1] [i_1 - 1] [i_2] = ((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1 - 3])) || (((/* implicit */_Bool) arr_2 [i_2 - 1] [i_1 - 3])));
        }
        arr_12 [i_1 - 2] &= max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13)))), (((((/* implicit */_Bool) arr_7 [i_1 - 2])) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((arr_9 [i_1] [i_1]) != (arr_8 [i_1] [(short)10] [i_1])))), (arr_5 [i_1])))));
    }
    var_18 = ((/* implicit */int) var_13);
}
