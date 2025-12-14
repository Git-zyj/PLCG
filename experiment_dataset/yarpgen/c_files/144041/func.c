/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144041
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((arr_0 [i_0]) <= (arr_0 [i_0]))) ? (max((((unsigned long long int) 2356508425U)), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = 2356508425U;
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25888)) | (((/* implicit */int) (signed char)-101))))) & (((592650337U) | (592650350U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (((((/* implicit */long long int) ((arr_0 [i_0]) | (arr_0 [i_0])))) | (((long long int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1])))));
        arr_7 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_0 [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))));
        arr_9 [i_1] [i_1] = 3702316959U;
    }
    var_19 += ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))), ((~(((592650337U) - (592650343U)))))));
}
