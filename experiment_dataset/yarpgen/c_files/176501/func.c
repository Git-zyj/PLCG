/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176501
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_1 + 2] [i_1 + 2]), (((/* implicit */short) arr_7 [i_0]))))) && (((/* implicit */_Bool) var_7)))))));
                arr_8 [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (11138888885450528845ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_7 [i_1]))))))));
                var_21 = ((signed char) var_5);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_11)) / (var_14))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14369010098716260100ULL)) ? (-1LL) : (0LL))))))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) var_5))));
}
