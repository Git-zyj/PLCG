/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119998
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
    var_10 = ((/* implicit */long long int) (((((+(var_0))) >= (((var_0) / (((/* implicit */int) (short)10094)))))) ? ((((+(((/* implicit */int) var_6)))) & (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_2)) << (((((/* implicit */int) var_6)) >> (((2785209367073425368LL) - (2785209367073425355LL)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) -2785209367073425359LL))));
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((short) ((var_6) ? (((/* implicit */long long int) (-(var_4)))) : ((+(2785209367073425376LL)))))))));
                                arr_14 [i_0] [i_2 - 1] [i_3] [i_4] = ((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 + 1]);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */short) var_9);
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_25 [i_5] [i_1] [i_5] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + ((~(((/* implicit */int) arr_22 [i_7] [(unsigned short)21] [i_5] [i_6] [i_0 + 1] [i_6 - 1]))))));
                                var_14 = ((/* implicit */signed char) arr_13 [(signed char)1] [i_1] [i_1] [i_5] [(signed char)1] [i_5] [i_7]);
                            }
                        } 
                    } 
                    var_15 = var_0;
                    arr_26 [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_0 + 2] [0] [i_0 - 1] [(unsigned char)11])), (arr_23 [i_5] [i_0 - 1] [i_0 - 1] [i_0 + 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [5LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [3LL] [i_0])) && (var_6))))) : ((~(-2785209367073425368LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) ? ((-(((/* implicit */int) var_2)))) : (((var_6) ? (var_0) : (((/* implicit */int) var_5)))))))));
                    arr_27 [(unsigned short)0] [i_1] [i_0] [(unsigned short)0] |= ((/* implicit */int) ((((/* implicit */_Bool) 14735224745069397804ULL)) ? (min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) 2785209367073425358LL)) ? (3711519328640153820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))))))) : (var_9)));
                }
                /* vectorizable */
                for (unsigned int i_8 = 2; i_8 < 23; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        arr_33 [i_0] [i_1] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */short) ((signed char) arr_22 [(short)22] [i_1] [(short)22] [(short)22] [i_8] [i_9]));
                        var_16 = ((/* implicit */signed char) (~(var_4)));
                    }
                    var_17 ^= ((/* implicit */_Bool) ((int) var_4));
                }
                for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    arr_38 [1U] [i_10] [(_Bool)1] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)10)) ? (var_9) : (((/* implicit */unsigned long long int) var_8)))) << (((arr_0 [i_1] [i_10]) - (11908309898724458156ULL))))) | ((+((~(arr_23 [i_10] [i_10] [i_1] [i_10])))))));
                    var_18 &= ((/* implicit */long long int) max((((unsigned int) ((unsigned long long int) var_7))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_10])) | ((-(((/* implicit */int) var_6)))))))));
                    var_19 = ((/* implicit */unsigned char) 2785209367073425360LL);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(var_3)))) ? ((+(((/* implicit */int) var_2)))) : (var_4))) * (((/* implicit */int) ((((/* implicit */long long int) min((var_3), (var_8)))) <= (((long long int) (_Bool)1)))))));
}
