/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119905
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
    var_13 = ((/* implicit */unsigned long long int) (unsigned short)65531);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */short) ((long long int) arr_0 [i_0]));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_7 [i_0] [i_0])) | ((~(2705774902U)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_4) + (2147483647))) << (((((var_8) + (1298957938))) - (2)))))) ? (((((/* implicit */_Bool) 2486316694545871964ULL)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (unsigned char)48)))) : (((/* implicit */int) arr_1 [i_4]))))), (max((((/* implicit */unsigned int) (-(var_8)))), (max((((/* implicit */unsigned int) arr_3 [i_2] [i_4])), (arr_6 [i_3] [i_3] [i_1])))))));
                                var_16 = (i_1 % 2 == zero) ? (((/* implicit */short) max((((/* implicit */int) arr_11 [i_2 + 1] [i_3 + 1])), (((((/* implicit */_Bool) ((arr_6 [i_1] [i_1] [i_1]) << (((arr_12 [i_1] [i_1] [i_4]) + (1626906591)))))) ? (((((/* implicit */int) (unsigned char)214)) << (((((/* implicit */int) arr_2 [i_2 + 1])) - (52232))))) : ((+(((/* implicit */int) (_Bool)0))))))))) : (((/* implicit */short) max((((/* implicit */int) arr_11 [i_2 + 1] [i_3 + 1])), (((((/* implicit */_Bool) ((arr_6 [i_1] [i_1] [i_1]) << (((((arr_12 [i_1] [i_1] [i_4]) + (1626906591))) - (677451508)))))) ? (((((/* implicit */int) (unsigned char)214)) << (((((/* implicit */int) arr_2 [i_2 + 1])) - (52232))))) : ((+(((/* implicit */int) (_Bool)0)))))))));
                                var_17 = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_5))));
}
