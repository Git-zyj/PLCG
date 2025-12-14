/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185560
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
    var_14 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_9)))) | (((/* implicit */int) ((short) (unsigned short)23175)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) (signed char)127);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((arr_7 [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (signed char)8)))))))) != (max((((/* implicit */unsigned long long int) var_11)), (min((var_3), (arr_0 [(short)17])))))));
                                arr_14 [i_2] = ((/* implicit */unsigned char) (short)-31262);
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)42360)))) & (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
