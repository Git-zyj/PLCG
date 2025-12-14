/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151535
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
    var_14 = ((/* implicit */unsigned long long int) var_3);
    var_15 = ((/* implicit */unsigned int) var_13);
    var_16 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (arr_6 [i_0] [12] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_0] [10U] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) : (min((3344697000444149213ULL), (var_0))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((short) (-(((unsigned long long int) var_7)))));
                    var_18 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */int) (unsigned char)255)), (var_5)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-109)) && (((/* implicit */_Bool) 2147483647))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            arr_16 [i_2] [i_3] [i_1] [i_2] = ((/* implicit */_Bool) ((max(((!(((/* implicit */_Bool) var_8)))), (((((/* implicit */unsigned int) 1611736294)) == (var_2))))) ? (max((arr_10 [i_0] [i_2] [i_2] [i_4 - 2]), (((2147483647) >> (((var_3) - (5752497498037400163LL))))))) : (((/* implicit */int) var_7))));
                            var_20 += ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_1] [i_3 - 1]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_0] [16U] [i_3] [i_2] = ((/* implicit */short) (unsigned char)0);
                            arr_22 [i_1] [i_2] = ((unsigned int) (signed char)-109);
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 4) /* same iter space */
                        {
                            arr_25 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -2270856312147367917LL)) : (var_0)))) ? (((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) (short)24395)) - (24395)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [2] [2])))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1272513937)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_0] [(_Bool)1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (2114442476)))))))));
                            var_21 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned char)255)), (((((/* implicit */_Bool) (short)-24396)) ? (((((/* implicit */long long int) -2147483630)) | (var_4))) : (((/* implicit */long long int) 489057350))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)43843)) && (((/* implicit */_Bool) (unsigned char)255)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180)))));
                            var_23 = ((/* implicit */long long int) min((((unsigned long long int) (!(((/* implicit */_Bool) 1852037685))))), (((((/* implicit */_Bool) 5418357870894440380ULL)) ? (((/* implicit */unsigned long long int) min((-557416588768279353LL), (arr_23 [i_0] [i_0] [i_0] [14U] [(signed char)16] [i_6])))) : ((~(17493848968202404436ULL)))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_28 [i_2] [i_2] [16LL] = ((/* implicit */unsigned char) min((((4012903258657493360ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))))), (((/* implicit */unsigned long long int) ((arr_3 [i_3 - 1] [i_3 - 1]) / (arr_3 [i_3 - 1] [i_3 - 1]))))));
                            var_24 = ((/* implicit */short) (-2147483647 - 1));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 16; i_8 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                            var_26 = ((/* implicit */_Bool) 15102047073265402402ULL);
                            arr_31 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) var_11));
                            arr_32 [i_2] [(unsigned short)5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            arr_33 [16U] [16U] [i_2] [i_8 - 3] = ((/* implicit */short) (unsigned char)7);
                        }
                        for (int i_9 = 3; i_9 < 16; i_9 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) var_12);
                            var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (unsigned char)126)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_7)))) : (((/* implicit */int) min(((unsigned char)255), (arr_7 [i_9] [i_2] [i_2] [i_0]))))))), ((-(min((2161078462U), (((/* implicit */unsigned int) (_Bool)1))))))));
                            arr_36 [i_2] = ((/* implicit */unsigned int) ((short) (unsigned char)252));
                            arr_37 [i_0] [9LL] [i_2] [i_2] [i_0] [i_9] = ((/* implicit */unsigned char) max((((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])) ? (-9223372036854775804LL) : (arr_30 [1] [i_1] [i_2])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)22604)))))));
                            arr_38 [i_3] [i_1] [i_3] [i_2] [i_1] [i_2] [i_3] = min((min((((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_0])) ? (8752655232970533454ULL) : (18446744073709551591ULL))), (((/* implicit */unsigned long long int) arr_1 [5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [12] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3)))) && (((/* implicit */_Bool) (short)13628))))));
                        }
                        for (int i_10 = 3; i_10 < 16; i_10 += 4) /* same iter space */
                        {
                            var_29 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 1] [i_1] [i_10 - 1] [i_10]))) : (13778224252939673344ULL)))) ? (((/* implicit */unsigned long long int) (~(var_2)))) : (((unsigned long long int) arr_7 [i_3 - 1] [i_1] [i_10 - 1] [i_1]))));
                            arr_43 [16U] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4073336088U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (6919385462887453749LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_3 [i_0] [i_10 - 3])))))) : (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_0)))));
                            arr_44 [i_0] [i_0] [i_2] [i_3 - 1] [i_10] = ((/* implicit */unsigned int) (+(-646202885)));
                        }
                    }
                    for (short i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((489057350) / (var_5)))) ? (((unsigned int) 545766963U)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        arr_49 [i_2] [i_11] = (i_2 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_9))))))) << (((((((((((/* implicit */_Bool) var_6)) ? (arr_24 [i_2] [i_2] [(short)1] [i_11] [7LL]) : (((/* implicit */long long int) 4074418093U)))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) - (7527806947467441767LL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_9))))))) << (((((((((((((/* implicit */_Bool) var_6)) ? (arr_24 [i_2] [i_2] [(short)1] [i_11] [7LL]) : (((/* implicit */long long int) 4074418093U)))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) - (7527806947467441767LL))) + (7434875213701858532LL))))));
                        arr_50 [i_2] [i_1] [i_2] [4ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_11] [12LL] [12LL] [12LL]))));
                        arr_51 [i_11] [i_1] [(_Bool)1] [i_2] [(_Bool)1] [i_0] = ((/* implicit */int) (!(arr_29 [i_0] [i_1] [i_0] [i_2] [i_11])));
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((var_11) >= (((/* implicit */long long int) min((var_13), (1272513937)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -1335329045)) : (6056006849364368491LL))))))))));
                    }
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        arr_55 [7ULL] [i_2] [i_1] [7ULL] [i_2] [i_12] = ((min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) 6476885122875189579LL)) ? (1335329045) : (((/* implicit */int) var_1)))))) ^ (((((/* implicit */int) arr_19 [i_12] [i_0] [i_1] [i_0] [i_0])) ^ (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_2] [(unsigned char)5])))));
                        arr_56 [i_0] [i_2] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)49896);
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    arr_59 [i_1] = ((/* implicit */signed char) var_4);
                    var_32 = ((/* implicit */long long int) ((int) arr_53 [i_1] [i_1]));
                }
                /* LoopNest 3 */
                for (unsigned char i_14 = 2; i_14 < 15; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (int i_16 = 0; i_16 < 18; i_16 += 3) 
                        {
                            {
                                arr_69 [i_15] [i_15] [9ULL] = ((/* implicit */unsigned int) ((((long long int) var_12)) - ((+((-9223372036854775807LL - 1LL))))));
                                var_33 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_63 [i_1] [i_14] [i_14 - 1])) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (_Bool)1)))));
                                var_34 = ((/* implicit */unsigned long long int) (+((~(((unsigned int) arr_0 [i_14]))))));
                                var_35 = ((/* implicit */short) min((((arr_15 [i_15] [i_1] [i_14] [i_0] [i_14]) * (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) -8)), (min((var_3), (arr_64 [i_0] [i_0] [i_1] [i_15] [i_15] [i_16]))))))));
                                var_36 = ((/* implicit */unsigned int) max((1837295993), (((/* implicit */int) (unsigned char)249))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
