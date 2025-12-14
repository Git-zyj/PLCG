/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186880
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
    var_17 *= ((/* implicit */unsigned short) var_8);
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (max((((unsigned long long int) min((var_2), (((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */short) var_9))))) ? (var_0) : (((/* implicit */int) var_8)))))))));
    var_19 = var_16;
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_3 [i_0])))))) | (arr_1 [i_0 + 1]))), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_4 [0])))), (((/* implicit */int) arr_4 [i_0 - 1])))))));
            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_16) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))));
        }
        var_22 = ((/* implicit */unsigned char) (signed char)-113);
        arr_5 [i_0] = ((/* implicit */_Bool) arr_4 [0LL]);
    }
    for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        arr_8 [i_2] [1] = ((/* implicit */short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [20])), (arr_0 [i_2])))) : (arr_7 [i_2 - 1] [i_2 + 1])))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_6 [i_2]))));
    }
}
