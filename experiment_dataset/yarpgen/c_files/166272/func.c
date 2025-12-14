/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166272
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
    var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_4))))))) >= (var_8)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (unsigned char)169);
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)172)), (((((unsigned int) arr_3 [i_0] [i_1] [i_2])) << (((597298142U) - (597298131U)))))));
                    arr_11 [i_2] [i_1] [i_0] |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2287970488274911278ULL)))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_2] [i_0] [i_2]))))));
                    arr_12 [i_0] = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), ((+(arr_0 [i_2] [i_0])))));
                }
            } 
        } 
    } 
}
