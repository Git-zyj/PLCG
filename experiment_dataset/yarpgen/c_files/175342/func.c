/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175342
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
    var_18 = ((/* implicit */signed char) min((14979659559686151468ULL), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1511591720U)) ? (1511591720U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), ((+(4920941067484083787ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-74)), (2783375562U))))))), (max((var_3), (((/* implicit */short) var_14))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) min((var_5), (arr_1 [i_0]))));
                arr_6 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(arr_3 [i_0] [i_1] [i_1]))) : ((~(3467084514023400147ULL)))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (arr_3 [i_0] [i_1] [i_1]) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])), (2111075085513399243ULL))) >= (((/* implicit */unsigned long long int) ((arr_1 [i_0]) << (((arr_1 [i_0]) - (148081169U)))))))))));
                arr_7 [i_0] = ((/* implicit */short) min((var_1), (((((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0] [i_1] [i_1]))) * (((((/* implicit */_Bool) (short)-27783)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))))));
            }
        } 
    } 
}
