/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166487
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
    var_17 = ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (var_15)))), (max((var_7), (var_1))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)245)), (1610612736)))));
    var_18 -= ((/* implicit */unsigned short) var_8);
    var_19 = ((((/* implicit */_Bool) (-(-1610612748)))) ? (max((((/* implicit */unsigned int) var_13)), (min((((/* implicit */unsigned int) var_13)), (var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_12)), (var_13)))) ? (min((var_2), (((/* implicit */unsigned long long int) var_16)))) : (min((((/* implicit */unsigned long long int) var_12)), (var_9))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-9447)) - (((/* implicit */int) (unsigned char)10))))) & (var_8)));
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3930944926U)) ? (((/* implicit */int) ((signed char) ((unsigned char) (unsigned char)204)))) : (max((1610612732), (1610612763)))));
                                var_22 = ((((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (var_14))) ? (((var_5) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_5)))))))) - (max((((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned int) var_6)))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((var_7), (var_7)))), (max((var_3), (((/* implicit */long long int) var_1))))))) ? (var_8) : (((((/* implicit */_Bool) var_13)) ? (var_8) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_8)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [6ULL] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) > (((/* implicit */long long int) ((/* implicit */int) var_4))))))) <= (((var_9) / (var_9))))))));
                }
            } 
        } 
    } 
}
