/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18004
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_1);
        arr_3 [12ULL] [17] = ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), (((unsigned char) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_0])))) : (min((((/* implicit */unsigned int) var_6)), (4142462539U)))))) ? (min((var_9), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [(unsigned char)19])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1 - 1] [i_2 - 1] = ((/* implicit */unsigned short) var_9);
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))), (arr_4 [i_1 - 1]))), (((/* implicit */unsigned long long int) max((arr_5 [i_1 - 3] [i_2 - 1]), (arr_5 [i_1 - 3] [i_2 + 2])))))))));
                    var_14 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (unsigned short)10)), (var_4))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) 1743157727U);
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_22 [i_3] [i_4] [8ULL] [i_4] [i_6] &= ((/* implicit */int) var_4);
                        arr_23 [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) arr_13 [i_4 - 1] [i_5]);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned short) min(((unsigned short)13850), (((/* implicit */unsigned short) var_1)))))), (var_4)));
                                arr_30 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)42366))));
                                arr_31 [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) ((unsigned short) min((((((/* implicit */_Bool) 1743157750U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36979))) : (723595654757691795ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_5] [i_4] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_5] [(signed char)4]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 20; i_9 += 4) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((_Bool) (+(var_7))));
                    arr_36 [i_3] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */long long int) ((var_8) ? (arr_34 [i_9 + 1] [i_9] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9 + 1] [i_9 + 1])))))) & (min((arr_33 [i_9 + 1] [i_10 - 1]), (arr_33 [i_9 + 2] [i_10 - 1])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        var_17 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (arr_27 [i_9 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10] [i_11 + 1]) : (((/* implicit */unsigned long long int) ((long long int) (signed char)-25)))))));
                        /* LoopSeq 4 */
                        for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((int) ((((((/* implicit */_Bool) var_10)) || ((_Bool)1))) || ((_Bool)1)))))));
                            var_19 = ((/* implicit */unsigned short) min((arr_19 [i_9] [i_10]), (max((((((/* implicit */_Bool) var_10)) ? (3856376481457665553ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) var_3))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            arr_44 [i_3] [i_3] [i_9] [i_9] [i_11 - 1] [i_10] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (unsigned short)36979))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3]))) : (max((var_7), (((/* implicit */unsigned long long int) var_6)))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_0)), (arr_38 [i_9] [i_11])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_5)))))));
                            arr_45 [i_3] [i_9] [i_10 - 1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))) / (arr_35 [i_11 - 2] [i_10] [i_10] [i_9])))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_2)), (arr_21 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11]))) >= (((/* implicit */long long int) ((int) var_2))))))));
                        }
                        for (long long int i_14 = 2; i_14 < 21; i_14 += 3) 
                        {
                            arr_48 [i_10] [i_9 - 4] [i_9] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65525)) ^ (((/* implicit */int) var_3))))) ? (arr_19 [i_3] [i_10]) : (((/* implicit */unsigned long long int) min((564054900), (((/* implicit */int) (signed char)29)))))))));
                            arr_49 [i_3] [i_11 + 3] [i_10] [i_11] [i_10] [(signed char)8] [i_10] = ((/* implicit */unsigned short) ((short) var_6));
                            arr_50 [i_10] [i_11] [i_14 + 1] = ((/* implicit */long long int) arr_39 [i_3] [i_9] [i_10] [i_10 - 1] [i_11 + 2] [(unsigned short)13]);
                            arr_51 [i_10] [i_9] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((min((((/* implicit */unsigned char) arr_20 [0ULL] [i_9] [i_10] [2])), (arr_38 [i_14 - 2] [1]))), (((/* implicit */unsigned char) var_11))))) >> ((+(((((/* implicit */int) arr_24 [i_3] [i_9] [i_10] [i_10] [i_14])) >> (((var_9) + (157883155)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_15 = 3; i_15 < 19; i_15 += 1) 
                        {
                            arr_54 [i_15] [19] [i_10] [6ULL] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_9 - 3] [i_10 - 1] [i_11 + 1] [i_11 - 1] [i_15 + 3] [i_15 - 3]))) : (arr_21 [i_9 - 1] [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1])));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 152504739U))));
                        }
                    }
                }
            } 
        } 
        var_22 -= ((/* implicit */unsigned short) (((~(((((/* implicit */int) var_0)) | (((/* implicit */int) var_11)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_6))))))))));
        arr_55 [i_3] = ((/* implicit */unsigned char) var_0);
        /* LoopSeq 1 */
        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            arr_59 [0] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_35 [i_16] [i_16] [(unsigned short)14] [i_16])))));
            arr_60 [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (((min((arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_47 [16U] [i_16] [i_16] [i_16] [i_16]))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_10))))))));
            arr_61 [i_3] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_1)), (var_5))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_3] [17] [i_3] [i_3] [i_3])))));
        }
    }
    var_23 = ((/* implicit */int) ((min((max((((/* implicit */unsigned long long int) var_8)), (var_7))), (((/* implicit */unsigned long long int) min((var_0), ((_Bool)0)))))) + (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (152504756U)))), (14590367592251886063ULL)))));
    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
    var_25 = ((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28672)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_8)))) : (min((((/* implicit */int) var_6)), (var_9)))))));
}
