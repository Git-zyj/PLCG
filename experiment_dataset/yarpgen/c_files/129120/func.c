/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129120
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) 18446744073709551615ULL);
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_2 [i_0] [10]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (((arr_2 [i_0] [i_0]) & (((/* implicit */unsigned long long int) -1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_14))))))))));
        arr_3 [5ULL] [5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_1 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned long long int) (unsigned char)152);
    }
    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((unsigned char)145), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned long long int) var_0)), (11084864302323941437ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((7361879771385610154ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))))));
    var_22 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)255)))), ((((!(((/* implicit */_Bool) 5052687555275039535ULL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))));
}
