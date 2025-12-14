/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1156
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) var_0)))))));
    var_21 = min((((/* implicit */unsigned int) (unsigned char)93)), (946072653U));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) max((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))), (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((min((min((((/* implicit */long long int) arr_0 [i_0])), (var_2))), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-123)))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)0])) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_15)))) * (max((var_14), (var_14))))))));
}
