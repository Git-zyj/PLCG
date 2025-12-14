/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172509
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
    var_20 = ((/* implicit */unsigned long long int) ((var_19) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_18))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) ((unsigned int) ((short) var_7)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] = ((/* implicit */_Bool) var_3);
                                var_22 = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (var_14)))) % (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_8))))) << (((((((/* implicit */int) (short)1920)) ^ (((/* implicit */int) (signed char)126)))) - (2044)))));
                                var_23 ^= ((/* implicit */_Bool) var_2);
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_6))));
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((var_6) ^ (((/* implicit */int) var_16))))) : (((unsigned long long int) var_10))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((var_6) / (((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_5)) / (var_11))));
                }
            } 
        } 
    } 
}
