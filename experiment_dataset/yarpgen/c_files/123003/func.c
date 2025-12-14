/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123003
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
    var_19 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((unsigned int) var_11))), (var_2))), (((/* implicit */long long int) ((var_16) << (((((((/* implicit */_Bool) var_14)) ? (2572508086U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (2572508073U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = min((((long long int) (unsigned char)55)), (((/* implicit */long long int) (-(1456883701)))));
                var_20 |= ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (unsigned char)136)) : (251658240))))), (((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_0] = ((/* implicit */long long int) var_18);
                                arr_18 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (((long long int) 0U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_2)))))));
}
