/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163022
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1 - 3] [11U] = ((/* implicit */unsigned char) (-(8562853752445143693ULL)));
                    var_16 = ((/* implicit */int) var_2);
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (arr_5 [i_0] [(signed char)7] [(unsigned char)11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [7U] [i_1] [0])))));
                                arr_15 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) ((unsigned char) var_11))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [(short)0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)28672), (((/* implicit */unsigned short) var_15)))))) : (0U)))) ? (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) var_2)), (-8353555758175751372LL))))) : (arr_6 [i_0] [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */short) ((1318702820U) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2976264501U) << (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 4611685949707911168LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1015961368)) ? (2017630720U) : (1318702821U))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_1)))))))) : (((/* implicit */int) var_2))));
}
