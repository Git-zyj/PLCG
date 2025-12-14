/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147429
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
    var_14 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -8403995334496880645LL)) ? (-8403995334496880639LL) : (((/* implicit */long long int) 907495192))))) ? ((~(((/* implicit */int) var_2)))) : ((~(var_4)))))));
                    arr_9 [i_0] [i_1] [i_2] [0ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_1] [i_0] [(unsigned char)6])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))) : (((/* implicit */int) var_2))))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (unsigned short)55088)))))));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 907495175)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) : (8403995334496880656LL)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_12)))) : (arr_1 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7)))) | (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [0U]))) : (arr_6 [i_0] [i_1] [i_2] [i_1])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))) : ((~(arr_0 [i_0]))))))));
                    var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)67)) ? (-907495176) : (((/* implicit */int) (unsigned char)121))));
                }
            } 
        } 
    } 
}
