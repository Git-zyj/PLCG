/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142600
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
    var_17 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_16)) + (((var_10) + (var_1))))) << (((/* implicit */int) ((var_8) >= (var_1))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2833491745U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (var_10)))) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) var_5))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((((arr_3 [i_2 - 1]) ^ (arr_3 [i_2 - 1]))) >= (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [18ULL])) ? (2833491722U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))) : (((arr_9 [i_2] [i_2] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((0) >> (((var_10) - (14943610367622922441ULL)))))), (((unsigned int) var_8)))))));
                }
            } 
        } 
    } 
}
