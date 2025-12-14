/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142287
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] [i_0] [i_2 + 1] [i_2] [i_2] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) % (max((15677687450854707013ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (signed char)-21)))))))));
                                var_10 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2] [i_2 - 3] [i_2 + 1])) >= (((/* implicit */int) arr_3 [i_2] [i_2 + 2] [i_2 - 1]))))), (max((((/* implicit */long long int) (_Bool)1)), (704396092855533331LL)))));
                                var_11 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_3] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2 - 3] [i_4])))), (((((/* implicit */int) arr_9 [i_0] [i_3] [i_0])) >> (((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3])) - (46)))))))))) : (((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_3] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2 - 3] [i_4])))), (((((/* implicit */int) arr_9 [i_0] [i_3] [i_0])) >> (((((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3])) - (46))) + (36))))))))));
                                var_12 = ((/* implicit */unsigned long long int) (+(-4761082428457166936LL)));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] = ((/* implicit */short) (-(((long long int) 15677687450854707007ULL))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (70931694131085312ULL)));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (-4761082428457166945LL))))));
    var_15 = ((/* implicit */int) ((short) ((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))));
}
