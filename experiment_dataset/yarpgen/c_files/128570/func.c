/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128570
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11436004104163379810ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)109))))) : (((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4095ULL))))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)6])) ? (2674958424621253415ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))) ? (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_2])))) : (((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */short) (signed char)-36))))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) >= (((/* implicit */int) arr_6 [i_1]))))))))));
                }
            } 
        } 
    } 
    var_22 ^= var_7;
}
