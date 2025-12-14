/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133876
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)3804)))), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))))))) != (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_18)))), (min((((/* implicit */long long int) var_16)), (var_1)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_7 [i_2] [(signed char)23] [i_0] [i_0])) ? (arr_7 [i_0] [i_1] [i_2] [i_0]) : (arr_7 [i_2] [(signed char)23] [(signed char)23] [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) * (1332255286U)))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_8)) == (((((/* implicit */_Bool) (signed char)-69)) ? (5141246878231035573ULL) : (((/* implicit */unsigned long long int) 0))))));
                }
            } 
        } 
    } 
}
