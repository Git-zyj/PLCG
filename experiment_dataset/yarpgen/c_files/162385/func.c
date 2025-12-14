/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162385
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_2]))) : (arr_6 [i_0 - 1])))));
                                var_18 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_3 - 1] [i_1]))))) ? (((((/* implicit */_Bool) 1075003845U)) ? (1075003845U) : (1075003843U))) : (var_12))));
                                var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & ((+(((unsigned long long int) 950783402))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_5);
                                var_21 = ((/* implicit */unsigned long long int) ((361385339) << (((3904280705012330200LL) - (3904280705012330200LL)))));
                                var_22 = ((unsigned short) var_5);
                                var_23 *= ((/* implicit */int) (!(((/* implicit */_Bool) 361385339))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */long long int) ((var_7) | (((/* implicit */int) (short)-10917))))) : (3904280705012330200LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (361385335) : (var_1))) != (((/* implicit */int) ((var_1) > (((/* implicit */int) var_4)))))))) / (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_5))))) != (var_12))))));
    var_26 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -950783384)), (((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned long long int) var_13))))));
    var_27 ^= ((/* implicit */unsigned char) (+(((((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) == (var_10)))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (var_0)))))));
}
