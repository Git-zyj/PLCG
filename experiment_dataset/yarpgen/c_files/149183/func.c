/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149183
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
    var_13 &= ((/* implicit */short) var_0);
    var_14 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_15 &= ((/* implicit */unsigned int) (+((+(arr_12 [i_2 - 2] [i_1] [i_1])))));
                                var_16 = ((((/* implicit */_Bool) min((min((arr_0 [i_4]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((unsigned char) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [1LL]), (var_5)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) ^ (3213531183U))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((min((arr_1 [i_2]), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)37675))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_1]))))));
                                arr_15 [i_3] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-30904))) >= (315601726U)));
                                arr_16 [10LL] [i_1] [i_0] [(unsigned char)2] [i_4] = ((/* implicit */unsigned short) 35184372088830LL);
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (short)-30909)), (1081436123U))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_8 [i_0] [i_1] [i_1]) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (315601730U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
            }
        } 
    } 
}
