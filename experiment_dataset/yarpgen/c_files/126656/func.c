/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126656
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
    var_17 &= ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)129))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))))) | (max((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]))), (max((((/* implicit */unsigned long long int) (short)-29877)), (arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((arr_1 [(signed char)1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_16)), (1100943701)))), (((((/* implicit */_Bool) -836155945)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129)))))))) ? (arr_1 [8LL]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (-836155947) : (((/* implicit */int) (unsigned short)6689)))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [4LL]) : (arr_1 [i_0])))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)127)) + (836155920)))) ? ((-(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_10)))))))));
    }
    var_21 = ((/* implicit */unsigned char) var_4);
}
