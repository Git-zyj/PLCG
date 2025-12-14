/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117010
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
    var_20 = ((((/* implicit */_Bool) min((max(((unsigned short)29116), (((/* implicit */unsigned short) (unsigned char)26)))), (((/* implicit */unsigned short) ((((/* implicit */int) var_19)) >= (((/* implicit */int) (unsigned char)189)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15099))) : (var_17));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [i_4] = ((/* implicit */unsigned int) var_12);
                                arr_13 [i_0] [i_1 + 1] [i_2 - 2] [i_1 + 1] [i_0] = ((/* implicit */int) min((var_12), (((/* implicit */signed char) ((((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) (signed char)72))))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5))))))));
                                arr_14 [i_0] [(signed char)16] [i_2] [i_2 + 1] [i_2] [i_0] [i_0] = ((((((/* implicit */long long int) ((((/* implicit */_Bool) 4966557530574391861LL)) ? (((/* implicit */int) (short)-23775)) : (((/* implicit */int) (signed char)-64))))) >= (min((((/* implicit */long long int) var_6)), (-2809595922558324739LL))))) ? (((min((((/* implicit */unsigned int) var_12)), (var_6))) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_19), (arr_3 [i_2 + 1]))))));
                                arr_15 [i_0] [i_1] [(signed char)11] [i_3] [i_0] = ((/* implicit */int) ((((((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_3 + 1])) / (((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_3 + 1])))) <= (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_0] [i_2 - 1] [i_3 - 2])), (var_14))))));
                                arr_16 [i_4] [(_Bool)1] [i_2] [(_Bool)1] [i_0] &= ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (_Bool)1)) : (-1989270721)))) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (unsigned char)42))));
                arr_18 [14ULL] [14ULL] &= ((/* implicit */_Bool) -1989270721);
                arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1 + 1]))) > (((var_11) >> (((/* implicit */int) (unsigned char)15)))))))) - (((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_0] [(_Bool)1] [i_0])))) : (((5052141704784411909LL) >> (((var_17) + (6306797669670258LL)))))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) << (((min((min((354544013624084261LL), (((/* implicit */long long int) 1989270720)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-26529)), (var_6)))))) - (1989270707LL)))));
}
