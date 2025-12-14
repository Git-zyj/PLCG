/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127570
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1] [i_1])))))));
                    var_16 = ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) arr_4 [14ULL] [13ULL] [(signed char)0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_0 + 1])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [12ULL])))) || (((/* implicit */_Bool) var_1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                var_17 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_3] [15ULL] [i_3]))))), (((((/* implicit */_Bool) arr_12 [i_3] [(signed char)18] [i_3])) ? (arr_11 [i_3] [i_3] [(signed char)15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((arr_8 [i_4]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-97)) && (((/* implicit */_Bool) arr_10 [i_3] [(unsigned char)10]))))), (((unsigned int) arr_9 [i_3]))))));
            }
        } 
    } 
}
