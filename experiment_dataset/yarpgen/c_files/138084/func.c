/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138084
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (var_3))))) : (var_0))) + (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_9))))) / (max((((/* implicit */unsigned long long int) 241527276U)), (var_15))))))))));
    var_20 *= ((/* implicit */_Bool) var_15);
    var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -1581914742)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (var_3))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (9695533405314115493ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (unsigned char)197))))), (((long long int) 440597448))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_2 - 1])) << (((var_12) - (8316114726918546048LL))))) | (((/* implicit */int) (_Bool)0))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (arr_11 [i_0] [i_1] [i_1] [i_0])))));
                                var_24 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)0))));
                                var_25 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_5 [i_0] [i_0])))), (((/* implicit */int) arr_8 [i_2 + 3] [i_2 - 2] [i_2 + 3]))))), (((((107114440U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)6]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_3]))))))));
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (min((241527272U), (((/* implicit */unsigned int) arr_8 [i_2 - 2] [i_2 + 2] [i_2 + 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
