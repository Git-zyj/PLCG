/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157314
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
    var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) ((signed char) var_16))) : ((((~(((/* implicit */int) var_9)))) - (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-87))))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)56))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(signed char)3])) ? (((/* implicit */int) (short)-30337)) : (((/* implicit */int) var_19))))), (min((((/* implicit */long long int) (unsigned char)168)), (8346189971062094376LL)))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((arr_2 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(signed char)7])))))))) - (((unsigned int) arr_9 [i_0 - 1] [i_3]))));
                            arr_12 [i_0 - 2] [i_1] [i_2] = ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_0))))) * (min((((unsigned int) 1449194438)), (((/* implicit */unsigned int) arr_9 [i_0 - 2] [i_0 - 1])))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
                            {
                                var_23 += ((/* implicit */unsigned long long int) ((unsigned short) ((short) (+(11ULL)))));
                                var_24 += ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0])) != (((/* implicit */int) arr_9 [i_0 - 1] [i_1]))))) < (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))))), (((long long int) (~(var_4))))));
                                var_25 += ((/* implicit */unsigned char) (signed char)-47);
                            }
                        }
                    } 
                } 
                var_26 *= arr_7 [i_1] [i_1];
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) var_4);
}
