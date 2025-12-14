/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102156
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
    var_15 = ((/* implicit */int) ((unsigned short) (+(((unsigned long long int) 157183849)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) var_1))))) >> (((/* implicit */int) (signed char)0))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 10352919209556935365ULL)) ? (arr_3 [i_0] [(unsigned short)11] [i_2]) : (arr_3 [i_1] [(signed char)6] [i_2])))));
                    var_16 = ((/* implicit */signed char) max((arr_5 [i_0] [(unsigned short)15] [i_1] [i_1]), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-738172330) : (((/* implicit */int) var_1))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [2LL] [2LL]))) - (arr_7 [i_2] [14] [i_1] [14])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (var_14)));
    var_18 = ((/* implicit */unsigned long long int) var_3);
}
