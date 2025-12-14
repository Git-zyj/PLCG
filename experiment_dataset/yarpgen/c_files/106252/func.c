/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106252
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_15 &= ((/* implicit */signed char) ((max((573046462U), (((/* implicit */unsigned int) arr_9 [i_4 + 1] [i_4 + 3] [i_4 + 1] [i_4] [i_2])))) | (((unsigned int) arr_12 [i_4 - 1] [i_2] [i_4 + 1] [i_4] [i_4 - 2]))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_3]);
                                var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_10 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1])) / (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) | (((((/* implicit */_Bool) (~(573046440U)))) ? (((3721920845U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))))) : (arr_0 [i_0])))));
                                var_17 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) arr_4 [i_4 + 3])) / (arr_0 [i_0])))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((signed char) (signed char)-1));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_0] [i_5 - 1] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_5 - 1] [i_2] [i_2] [i_0])) : (((/* implicit */int) (short)-1)))) * (((/* implicit */int) arr_8 [i_0] [i_5] [i_0] [i_0]))));
                                var_20 = ((/* implicit */unsigned int) min((arr_1 [i_0] [i_2]), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) ^ (arr_4 [i_5 - 1]))))));
                                var_21 = ((/* implicit */long long int) arr_22 [i_0] [i_1] [i_2] [i_2] [i_0] [i_6]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_6 [i_1] [i_2] [i_2]), (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) | (arr_18 [i_1] [i_1] [i_1] [i_1] [i_0])))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_2)))))) % (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (-4704694598999157898LL)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_23 |= ((((((/* implicit */int) (unsigned char)38)) + (((/* implicit */int) (signed char)-12)))) & (((/* implicit */int) arr_2 [i_2])));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_7] [i_7] [i_2] [i_0])) | (((/* implicit */int) (short)0))));
                        var_25 -= ((/* implicit */int) (short)5);
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_0] [12U] [i_0] [i_0] [i_0])), (min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_9 [i_0] [2ULL] [2ULL] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_14)))) <= (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) * (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
        var_27 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) max((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [10LL]))))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (3721920855U)))) ? (((long long int) (short)-25607)) : (((/* implicit */long long int) 1240001726))))));
    }
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) var_4)) : (((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3450309329343484142LL)) ? ((-(var_10))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (6204285039606892892LL))))))));
}
