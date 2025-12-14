/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156110
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_3 [i_0] [i_0 + 1]))) * (((/* implicit */unsigned long long int) (+(6909759307342378769LL)))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0LL]))) & (arr_3 [i_0 - 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) arr_2 [5ULL]))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 19; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) (~(2147483647)))) : (arr_6 [8ULL] [i_2 - 2]))))));
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_3]))));
                    var_19 = ((/* implicit */_Bool) 1668151132);
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_2] = arr_1 [i_3];
                        arr_17 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_10);
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_2 [i_1]))));
                        var_21 = ((/* implicit */short) max((var_21), (arr_1 [i_1])));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7986739988048473730LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_10 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_2 + 1]))) : ((((_Bool)0) ? (arr_14 [(signed char)15] [i_3] [i_1] [i_5]) : (((/* implicit */long long int) 2076301314U))))));
                        arr_21 [(unsigned char)18] [(unsigned char)18] [(short)14] [i_5] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_2 - 3] [i_5]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            arr_26 [i_2 - 3] [i_2] [i_1] [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_6] [i_1] [i_3] [i_3] [i_1] [i_1])) + (-1)))) - (((((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (7986739988048473724LL)))));
                            var_23 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_8 [i_2] [i_2]))))));
                            arr_27 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_12)) << (((((/* implicit */int) var_16)) - (17067))))));
                            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_3] [i_2] [i_6] [i_5] [i_3])) ? (((/* implicit */int) arr_11 [i_6] [i_2] [i_6])) : (((/* implicit */int) var_11)))) % ((~(2097151)))));
                            var_25 -= ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_8 [i_2] [i_1]))))));
                        }
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) 2097151);
                            var_27 = ((/* implicit */unsigned int) ((var_17) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) : (var_2)))));
                        }
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_34 [i_8] [1U] [1U] [i_1] [i_5] [(short)8] = ((/* implicit */unsigned short) ((((268203728) / (((/* implicit */int) arr_30 [1U] [i_2] [i_3] [i_3] [i_5] [i_8] [(unsigned char)17])))) > (((/* implicit */int) arr_28 [i_2 - 1] [i_2 - 1] [i_1] [i_5] [i_8] [i_5] [i_3]))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_3] [i_5] [(short)14])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_8)))) & (((/* implicit */int) arr_30 [i_3] [i_3] [i_2 + 1] [(unsigned char)13] [i_8] [i_8] [i_5])))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            arr_38 [i_1] [i_2 + 1] [i_1] [16U] [i_9] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1]))));
                            arr_39 [i_1] [i_1] [i_3] [i_5] [i_9] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) arr_19 [(unsigned char)10] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_1]))));
                            var_29 = ((/* implicit */unsigned int) var_17);
                        }
                        /* LoopSeq 1 */
                        for (short i_10 = 1; i_10 < 18; i_10 += 3) 
                        {
                            arr_43 [i_1] [i_2] [i_2] [i_1] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)768))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_10] [i_10] [i_10 + 2] [i_10 + 2] [i_10 + 2] [7U] [i_1])) > (((/* implicit */int) arr_28 [i_10 + 2] [i_10] [i_10 + 2] [i_10 - 1] [i_3] [(unsigned short)3] [i_3]))));
                            arr_44 [i_1] [i_5] [i_2 - 2] [i_2 - 2] [i_1] = ((/* implicit */signed char) arr_11 [i_1] [i_2] [i_5]);
                        }
                        var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) ((short) arr_30 [i_1] [i_2 - 4] [i_3] [i_5] [i_5] [i_3] [10LL])))));
                    }
                    var_32 = arr_40 [i_2 - 1] [i_1] [i_1] [i_2 - 4] [i_2 + 1];
                }
            } 
        } 
        var_33 *= ((/* implicit */unsigned int) (unsigned char)171);
        arr_45 [i_1] [12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)11260)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (short)2143))));
    }
    var_34 = ((/* implicit */unsigned char) ((long long int) (short)-9));
}
