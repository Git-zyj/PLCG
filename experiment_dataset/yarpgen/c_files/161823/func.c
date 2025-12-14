/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161823
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3509397361U)))))), (max((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((_Bool) var_10))))))))));
    var_15 = ((/* implicit */signed char) max((((unsigned int) min((var_11), (((/* implicit */unsigned int) var_0))))), (((/* implicit */unsigned int) (_Bool)1))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))), (min((var_4), (((/* implicit */unsigned long long int) 988724127U))))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)5] [i_0])) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_4 + 1]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((int) var_1))) : (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_4))))))))));
                                arr_12 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) min((arr_11 [i_4 + 1] [i_4] [(short)8] [i_4 + 1] [(short)8]), (arr_11 [i_4 + 1] [i_4 + 1] [(signed char)11] [10U] [i_4 + 1])));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_3 [i_2] [i_0] [i_0]), (var_6))))))) ? (min((arr_6 [i_2] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_1] [i_1] [i_1] [i_0]))));
                }
            } 
        } 
    } 
}
