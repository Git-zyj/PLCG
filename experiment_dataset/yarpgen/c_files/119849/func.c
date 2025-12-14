/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119849
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [15] [i_1] [i_0] = ((/* implicit */short) ((var_10) >= (var_6)));
                    arr_11 [8] [(short)5] = max((700932377), (arr_4 [i_2]));
                    arr_12 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [7] [14])) ? (((/* implicit */long long int) arr_3 [i_0] [i_2])) : (arr_6 [i_0] [i_2])))), (min((var_3), (arr_1 [(short)0] [i_1])))))) ? (((((/* implicit */int) max((arr_8 [12U] [i_2]), (((/* implicit */short) (signed char)-4))))) >> (((var_0) - (13144917476142408528ULL))))) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_0])));
                    arr_13 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (-(arr_5 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) (+(arr_7 [i_1] [i_0] [i_2])))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])) : (arr_1 [i_2] [i_1])))))));
                    arr_14 [i_2] = ((((/* implicit */_Bool) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [(signed char)7]))))) ? ((~(min((var_9), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0]))))), (2042305323)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_11);
}
