/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105534
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((int) arr_1 [i_0]))));
        arr_3 [20U] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_0 [5])) : (((/* implicit */int) arr_0 [i_0]))))), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_1 [i_0]), (arr_1 [i_0]))) || (((/* implicit */_Bool) max(((signed char)-13), (((/* implicit */signed char) arr_0 [i_0]))))))))) : (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (16667745160514421284ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13771552855374209895ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)62441))))) : (((unsigned long long int) -3997493229245641486LL))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) ? (var_8) : (((/* implicit */long long int) 581859093U)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3103)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        arr_15 [5LL] [i_4] [i_3] [i_3] [(signed char)11] [i_1] = max((((int) ((arr_1 [i_1]) ? (786789247913962929LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))), ((~(((var_0) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) var_0)))))));
                        arr_16 [18ULL] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [i_4]))));
                    }
                } 
            } 
        } 
    }
    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_9)))), (((((/* implicit */_Bool) var_9)) ? (((1855503167281400858ULL) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (-7844572812944823944LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
}
