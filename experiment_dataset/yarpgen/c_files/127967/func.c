/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127967
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
    var_14 = ((/* implicit */unsigned long long int) max((((unsigned short) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209)))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)209)), (var_7)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
    var_15 = ((unsigned long long int) 0U);
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_1))))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_1)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned char)209)), (((((/* implicit */_Bool) (unsigned char)47)) ? (arr_4 [22] [i_2] [(unsigned char)8] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))))));
                                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                                arr_12 [i_2] [1U] [i_2] [i_2] = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */int) (unsigned short)63233)) : (((/* implicit */int) (_Bool)0))))), (((arr_0 [i_0]) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (((arr_2 [i_0] [i_0]) + (((/* implicit */int) (unsigned short)65519)))))))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned short)44247), ((unsigned short)15)))))))));
                    arr_14 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (unsigned char)43);
                }
            } 
        } 
    } 
}
