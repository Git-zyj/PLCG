/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145376
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+((+(((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (signed char)38))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2879863473U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) : (((((/* implicit */_Bool) 0)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19223)))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((arr_5 [i_2] [i_2 + 1] [i_2 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) + (max((((/* implicit */unsigned int) (unsigned char)57)), (arr_5 [i_4] [i_2 - 2] [i_2 - 2]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = (~(((/* implicit */int) ((unsigned short) var_2))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (short)2047))));
    var_24 = (-(var_1));
}
