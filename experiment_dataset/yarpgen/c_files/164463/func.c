/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164463
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
    var_15 = ((/* implicit */unsigned char) var_3);
    var_16 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (var_9)))) : (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23581))) : (arr_7 [i_0])))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 3401815420U)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_5 [i_1])))))) : (arr_7 [(short)9])));
                    arr_10 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) -1527409574724894761LL);
                    var_17 &= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_3)) : (((unsigned long long int) ((var_5) - (((/* implicit */unsigned int) 404022257)))))));
}
