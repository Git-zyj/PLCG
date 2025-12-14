/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179572
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
    var_14 = ((/* implicit */unsigned char) var_9);
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) * (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) 0LL);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                            {
                                var_18 = (unsigned char)210;
                                arr_16 [i_2] [i_2] [i_2] [i_0] [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 2])))) > (((/* implicit */int) (!(max((var_7), (var_7))))))));
                                var_19 *= (!(((/* implicit */_Bool) max((((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned short) (_Bool)0)))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_20 &= ((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_12))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)242)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((((_Bool)1) ? (1271918458018728344LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
                                arr_24 [i_0] [i_1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (2320263225376449184LL)));
                            }
                        } 
                    } 
                    var_22 &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_7 [(_Bool)0] [i_1] [i_1] [(unsigned char)10]))))));
                    arr_25 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                }
                for (signed char i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((signed char) (((!(var_8))) ? (((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) (_Bool)1))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_8 + 1] [i_8 + 1] [i_8] [i_8]))) * (arr_26 [i_0] [i_0] [i_0] [i_0])))) ? (4LL) : (4611686018427387904LL)));
                }
                for (short i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    var_25 += ((/* implicit */signed char) arr_28 [i_0] [i_1] [i_9]);
                    /* LoopSeq 2 */
                    for (short i_10 = 1; i_10 < 20; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)242)) ? (-1349224498) : (((/* implicit */int) arr_32 [0ULL] [0LL] [(unsigned short)8] [i_10 + 1] [i_9]))))) < (((((/* implicit */_Bool) var_11)) ? (0ULL) : (((/* implicit */unsigned long long int) -1349224479)))))))))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))) < (((((/* implicit */_Bool) var_11)) ? (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))), (max((((/* implicit */int) min(((unsigned short)1), (arr_29 [i_0])))), (((((/* implicit */int) arr_23 [(unsigned short)16] [i_1] [i_9] [i_10])) | (((/* implicit */int) var_6)))))))))));
                        arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_13 [(unsigned short)19] [i_10] [i_10] [i_10] [i_10]);
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned short) min((max((((((/* implicit */int) (unsigned short)4196)) * (((/* implicit */int) (unsigned short)65524)))), (577428987))), (((((((/* implicit */int) (unsigned short)11191)) ^ (((/* implicit */int) arr_2 [(signed char)2])))) << (((/* implicit */int) (_Bool)1))))));
                        arr_39 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)0))));
                        arr_40 [i_0] = ((/* implicit */short) var_7);
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            arr_45 [i_1] [i_12] [i_9] [i_11] [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) min((var_5), (arr_2 [i_0])))) + (((/* implicit */int) (!((_Bool)1))))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_6))));
                            var_30 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_9] [i_11 + 1])) && (((/* implicit */_Bool) var_6))))), (4294967276U)));
                        }
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) * (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_0] [i_1] [i_9] [i_11])), (6LL)))) ? (max((var_9), (((/* implicit */long long int) arr_38 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9] [i_11 + 2] [i_11 + 1] [i_11] [i_11 + 2])))))));
                    }
                    var_32 -= ((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [i_9]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14646164339169789385ULL)) && (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_9] [i_9] [i_1])))))));
                    arr_46 [7ULL] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_9] [i_9])) && ((_Bool)1)))))), (((((/* implicit */int) (!(arr_14 [i_0] [(short)1] [i_0] [i_1] [i_1] [i_9] [i_9])))) ^ (((/* implicit */int) var_8))))));
                }
                for (signed char i_13 = 1; i_13 < 19; i_13 += 4) 
                {
                    arr_50 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_3);
                    var_33 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_14 [i_0] [i_1] [i_0] [i_0] [i_1] [i_13] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_13 + 1] [i_13 + 1])))), (((((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] [i_0])) << (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_1] [i_1] [i_13] [(unsigned char)4]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_17 [i_14] [i_14] [i_14]))));
                        var_35 -= 17574217129024143604ULL;
                        arr_55 [i_0] [i_0] [i_0] [5U] = ((/* implicit */int) 13LL);
                        arr_56 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((6LL) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-108)))))))))));
                    }
                }
                arr_57 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_53 [i_0] [(_Bool)1] [i_1]) || (arr_53 [i_0] [i_1] [i_0])))) & (((/* implicit */int) arr_0 [i_0] [i_0]))));
                var_36 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_11))))));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned short) var_6);
}
