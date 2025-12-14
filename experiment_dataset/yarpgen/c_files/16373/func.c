/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16373
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
    var_15 = ((/* implicit */unsigned long long int) var_14);
    var_16 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (arr_3 [1] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)0))))) : (arr_0 [i_0]))), (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_13)))), (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0] [i_0]))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (1689320095U)))) : (max((((/* implicit */int) arr_1 [i_0] [i_1])), (486342971))))), (arr_3 [i_1] [i_0])));
                var_18 = ((/* implicit */short) ((((/* implicit */int) ((short) (signed char)-120))) & (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 2]))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 2605647199U))));
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                arr_14 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (-(((unsigned int) ((arr_6 [i_3] [i_2 - 2] [i_1] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
                                arr_15 [i_0] [i_1 + 1] [i_0] [i_3] [2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) <= (((/* implicit */int) max(((signed char)111), (((/* implicit */signed char) (_Bool)1))))))))));
                                arr_16 [(short)3] [(short)3] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1 - 1] [i_2 - 3]))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_1 + 1] [i_2 - 2]) < (((/* implicit */int) var_7))))))));
                                arr_17 [(signed char)8] [i_1] [i_2] [i_1] [i_1] [i_1] = ((short) arr_11 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_2 - 3]);
                            }
                            for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_2 - 2] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) ((unsigned int) var_3));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((-(arr_5 [i_2 - 3] [i_2 - 3] [i_2]))) != (((((/* implicit */_Bool) arr_13 [i_2 + 1] [(signed char)7] [i_2] [i_5 - 1] [i_5])) ? (arr_5 [i_2 - 3] [i_2] [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 - 2] [i_5] [i_5] [i_5] [i_5]))))))))));
                            }
                            for (int i_6 = 1; i_6 < 12; i_6 += 1) 
                            {
                                arr_25 [i_0] [i_1 - 2] [i_2 + 1] [(signed char)0] [i_6 + 1] [i_2] = ((/* implicit */unsigned long long int) arr_3 [(_Bool)1] [i_3]);
                                var_21 = ((/* implicit */long long int) ((short) max((((/* implicit */long long int) var_13)), (arr_24 [i_6] [i_2] [i_6] [i_6 + 3] [5ULL] [i_2] [i_2 - 1]))));
                            }
                            var_22 *= var_13;
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_1 [(short)4] [(short)4]))))) : (((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1] [i_1 - 1]))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0]))) != (arr_0 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)1)))))) : (((unsigned long long int) var_2)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3)) / (((/* implicit */int) (unsigned short)36247))))), (var_2)))))));
                            arr_26 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
}
