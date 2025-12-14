/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123979
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)22238)) : (var_12)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_9)) : (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_0)) != (((/* implicit */int) var_13))))))))));
    var_17 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4 - 1] [i_3] [i_1] [i_1] [(unsigned char)14] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) var_12)) / (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)30300)))))))));
                                arr_15 [i_1] [19] = ((/* implicit */unsigned char) arr_4 [19LL]);
                                arr_16 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((arr_9 [(signed char)16] [i_1] [i_1] [i_1] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)11]))) : (-6097786142621078286LL)))))) ? ((+(var_8))) : (1047666757158887123LL)));
                                var_18 = ((/* implicit */unsigned long long int) var_14);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) (signed char)49);
            }
        } 
    } 
    var_20 ^= var_12;
    var_21 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0U)) ? (3792583254U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) & ((-(var_3)))))), (var_2));
}
