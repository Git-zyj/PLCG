/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170145
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
    var_11 = ((/* implicit */int) max((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_4 [(unsigned short)10] [i_1] [(short)11] [i_1]);
                    var_12 = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) ((((/* implicit */_Bool) 2019293859)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41545)))))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 11590001340191950716ULL)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) - (max((((/* implicit */unsigned long long int) var_2)), (var_7)))));
}
