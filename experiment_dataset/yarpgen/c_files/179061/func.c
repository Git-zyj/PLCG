/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179061
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) var_7))))));
                arr_7 [i_0] [i_0] = ((unsigned int) 104409120U);
                arr_8 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (((unsigned int) arr_4 [i_0] [i_0])) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    var_10 = ((/* implicit */short) ((_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) : (arr_9 [8]))))));
                    arr_18 [i_2] [i_2] = ((/* implicit */long long int) (~(13379782676476088333ULL)));
                    var_11 = ((((min((1542586795U), (((/* implicit */unsigned int) var_3)))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_2] [i_3 + 1] [i_2] [i_2])) ? (((/* implicit */int) var_3)) : (var_8)))))) == (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_7)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (var_8)))))));
                    /* LoopSeq 4 */
                    for (long long int i_5 = 4; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        arr_23 [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_5) | (var_5)))))) ? (((/* implicit */unsigned int) ((max((((/* implicit */int) var_3)), (arr_21 [i_2] [i_2]))) << (((max((var_8), (((/* implicit */int) var_6)))) - (563567841)))))) : (((((/* implicit */_Bool) arr_22 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_3 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(short)3] [(unsigned short)11]))) & (arr_16 [i_2])))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_5) | (var_5)))))) ? (((/* implicit */unsigned int) ((max((((/* implicit */int) var_3)), (arr_21 [i_2] [i_2]))) << (((((max((var_8), (((/* implicit */int) var_6)))) - (563567841))) - (17)))))) : (((((/* implicit */_Bool) arr_22 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_3 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(short)3] [(unsigned short)11]))) & (arr_16 [i_2]))))))));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3613273945485253315LL)) ? (max((((/* implicit */unsigned int) arr_22 [i_2])), (18348845U))) : (((unsigned int) (~(7))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 4; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned long long int) arr_16 [i_2]);
                        var_14 = ((/* implicit */unsigned short) (unsigned char)173);
                        arr_27 [i_2] [i_2] = ((/* implicit */long long int) arr_19 [i_2] [i_2] [i_2] [i_2 - 2] [11U] [i_2]);
                        arr_28 [i_2 - 1] [i_2] [12] = ((/* implicit */long long int) ((int) arr_15 [(short)0] [(unsigned short)14] [i_4 + 1]));
                        arr_29 [i_2] [i_2] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)56)) ^ (((/* implicit */int) (unsigned char)170))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_2 - 3] [i_3]) > (arr_13 [i_6 + 3] [i_4])))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_15 = ((/* implicit */short) ((unsigned short) max((((((/* implicit */_Bool) arr_16 [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) var_9)))), (((unsigned long long int) arr_20 [i_2] [i_2])))));
                        arr_32 [i_2] [i_3] [i_2] [20U] [i_7] [17U] = ((/* implicit */unsigned short) ((unsigned long long int) arr_22 [i_2]));
                        arr_33 [i_2 + 1] [i_2] [i_4] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)56)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_2])) && (((/* implicit */_Bool) 11092795362280914333ULL))))))))));
                        arr_34 [i_2] [i_3] [i_3] [i_7] = ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_13 [i_4 + 2] [i_2 - 1])) ? (var_2) : (arr_17 [(unsigned short)12] [(unsigned short)12] [i_2 - 1] [i_2]))) : (((((/* implicit */_Bool) 726501129)) ? (arr_17 [i_2 + 1] [i_2] [i_2] [i_2]) : (arr_17 [i_2] [i_2] [i_2 - 2] [i_2]))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        arr_37 [i_2] [i_2] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */short) ((arr_19 [i_2] [i_3] [i_3] [i_3] [i_3 - 3] [i_8]) ? (((/* implicit */int) arr_19 [i_2 - 2] [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 3] [i_2 + 1])) : (((/* implicit */int) arr_19 [(unsigned char)0] [i_4 - 2] [(unsigned char)0] [i_2] [i_2] [i_2 - 2]))));
                        arr_38 [i_2 - 1] [i_3] [i_4 - 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((arr_26 [i_8] [i_2] [i_4 + 2] [i_2] [i_2]) ? (var_0) : (((/* implicit */int) (short)17024))))) : (((arr_35 [i_2] [i_3] [i_4]) ? (var_5) : (((/* implicit */long long int) var_8))))));
                        arr_39 [(unsigned short)8] [i_2] [i_4] [i_4 - 2] [i_4 - 1] = ((/* implicit */_Bool) (~(-4531793233980224018LL)));
                    }
                }
                var_16 = min((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)10887)) : (((/* implicit */int) arr_20 [i_2] [i_2])))))), (((unsigned char) min((((/* implicit */unsigned int) var_3)), (4294967295U)))));
                arr_40 [i_2] [i_2] = ((/* implicit */int) min((((arr_35 [i_3 - 1] [i_3 - 3] [i_3 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (15672980873765849656ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_2] [i_3])), (var_2)))) && (((/* implicit */_Bool) (signed char)-116)))))));
                arr_41 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_2])) && (((/* implicit */_Bool) arr_22 [i_2])))))));
            }
        } 
    } 
}
