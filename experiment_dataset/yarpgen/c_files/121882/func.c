/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121882
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_0]))) : (max((((/* implicit */long long int) (signed char)-124)), (arr_2 [i_0])))))) ? (((/* implicit */int) arr_6 [i_0] [(short)22] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))));
                    arr_8 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) : (((14912539045121557296ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((int) min((max((((/* implicit */unsigned long long int) -8490235572510919338LL)), (14912539045121557296ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-124)))))))))));
    var_20 *= ((/* implicit */unsigned short) var_7);
}
