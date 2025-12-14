/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11810
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
    var_17 = ((/* implicit */long long int) (unsigned short)60687);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) min((var_9), (((/* implicit */short) ((var_4) >= (((/* implicit */int) var_16))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max(((short)-22467), (max((var_13), (var_6)))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_2] [i_1])), (((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (5ULL)))))) ? (arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-22458))))))))));
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)1023))))) >= (((/* implicit */int) min(((!(((/* implicit */_Bool) (short)22466)))), ((!(((/* implicit */_Bool) (signed char)-120)))))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (short)1023)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)52088)) >= (((/* implicit */int) var_16))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 6; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)2] [i_4]);
                                arr_14 [i_0] [i_0 + 2] [i_1] [i_0] [i_2] [9] [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((((/* implicit */_Bool) (short)11039)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)59357))))))) ? (4431212635356450753ULL) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)3)))))))));
                                var_22 = ((/* implicit */long long int) (short)-20346);
                                arr_15 [i_0] [i_1] [i_2 - 2] [i_3] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_8);
}
