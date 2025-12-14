/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17284
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (max((((/* implicit */unsigned int) var_14)), (arr_7 [i_0] [18U] [(unsigned char)11]))))) << (((max(((~(876450095749935464ULL))), (((arr_5 [i_0] [i_0] [9]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))))))) - (17570293977959616134ULL))))))));
                            var_16 = ((/* implicit */long long int) max(((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) & (var_2))))), (((/* implicit */unsigned int) arr_12 [i_0] [(_Bool)1] [i_0] [(unsigned char)4] [(_Bool)1] [i_0] [i_3]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_3 + 1])) >= (((/* implicit */int) arr_3 [i_3 + 1]))));
                            var_18 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1 - 4]))));
                            var_19 = var_9;
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_12 [i_1] [i_1 - 4] [i_2] [i_6] [i_6] [i_6] [i_2])))) >> (((((/* implicit */int) ((signed char) arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_1]))) + (113)))));
                            arr_17 [i_0] [(signed char)11] [i_3] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_9 [i_6] [i_3 + 1] [i_2] [i_1] [2U])), (2249600790429696ULL)))))) % (min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)246))))), (max((((/* implicit */unsigned int) arr_4 [i_2])), (arr_6 [i_0] [i_0])))))));
                            arr_18 [i_3] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3] [i_3] [12U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3]))) : (((((/* implicit */_Bool) var_6)) ? (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_3] [i_3] [i_6])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_3] [i_3] [10] [i_6] [i_2])) : (arr_11 [i_0] [i_1] [i_0] [i_2] [12LL] [i_3] [i_6])))) ? (max((((/* implicit */unsigned long long int) 4836392786125481105LL)), (1048574ULL))) : ((+(arr_2 [18ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_13 [i_3] [i_3 + 1] [i_3] [i_3] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) var_13))))))))))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_3] [(unsigned char)10] = ((/* implicit */signed char) (short)-31853);
                            var_21 -= ((/* implicit */signed char) ((unsigned short) max((arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_3 - 1] [i_7]), (((/* implicit */unsigned long long int) 932281139U)))));
                            var_22 &= ((/* implicit */signed char) ((max((13230854346293146554ULL), (((/* implicit */unsigned long long int) var_12)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (arr_21 [i_3 - 1] [i_1 + 1])))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) -10411119)) ? (((/* implicit */unsigned long long int) 10411119)) : (((((/* implicit */unsigned long long int) -1LL)) & (3183374904565137962ULL)))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_3 + 1] [i_7] [i_7] [i_7] [i_1] [i_7])) || (((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) arr_16 [i_3] [i_3 - 1] [i_7] [i_3] [i_7] [i_1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) min((-1633133502101198930LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((((/* implicit */_Bool) 1644133741175112802ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) (unsigned char)47)))))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)252))))) + (((((/* implicit */_Bool) 18444494472919121920ULL)) ? (-7743456247913282598LL) : (arr_1 [i_1] [i_1])))))))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), ((unsigned char)68)));
                        }
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                        {
                            var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_9] [i_2] [i_0]), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) arr_24 [i_0] [6ULL] [(unsigned char)14] [i_1 - 3] [i_9] [i_3 + 1])) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)246)), (arr_24 [i_9] [i_3 + 1] [i_3] [i_2] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_12 [i_0] [8U] [8U] [i_1] [i_1] [i_1] [i_0])), (min((-1221270522667010243LL), (arr_0 [i_3])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_2] [i_3] [i_9]))) | (arr_2 [7ULL])))));
                            arr_31 [(unsigned char)6] [i_3] [(short)5] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) min((var_1), (((/* implicit */unsigned long long int) arr_8 [i_9] [i_2]))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (arr_0 [10U]))))) != (arr_13 [i_10] [i_3 + 1] [i_10] [i_3] [i_3]))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_19 [i_10] [i_3 + 1] [i_0] [i_1] [i_1 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) (-(arr_14 [i_3] [i_10] [(signed char)14] [i_0] [i_10] [i_3 + 1])))))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) arr_1 [i_1 - 2] [i_1 + 1]))));
                        }
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) 18446744073709551615ULL))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (+((-(((/* implicit */int) var_14)))))))));
                            arr_38 [i_1] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_13 [i_3] [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_11]));
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (~(((/* implicit */int) var_12)))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            var_34 = ((/* implicit */_Bool) arr_35 [i_3] [i_12] [i_0]);
                            arr_41 [i_0] [i_2] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_13 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_12]), (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))))), (((((/* implicit */unsigned long long int) (-(7704560335501448798LL)))) + (14774901041953610607ULL)))));
                        }
                    }
                    var_35 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (7555848174050521279LL)))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 4]))))), (max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(_Bool)1] [i_2] [18ULL] [i_1] [i_1]))) : (arr_2 [(_Bool)1]))), (((/* implicit */unsigned long long int) 2966353451U)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        var_36 = arr_29 [i_13] [i_1 - 1] [i_1] [i_0] [i_0];
                        var_37 = ((/* implicit */_Bool) max((var_37), (((((/* implicit */int) ((unsigned char) arr_37 [i_1 - 4] [i_1 - 4] [i_0] [i_13] [i_1 - 4]))) != (((/* implicit */int) arr_37 [i_13] [i_13] [i_2] [i_1 - 3] [i_0]))))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) arr_10 [i_0] [i_1 + 1] [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 17; i_14 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                        {
                            arr_51 [i_0] [i_1] [i_1] [i_0] [i_1] [i_14] = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) >= (-1076512515))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) ((_Bool) var_9)))));
                            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1 - 4])) : (((/* implicit */int) arr_4 [i_1 - 1])))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                        {
                            arr_54 [i_14] [i_1] [i_2] [i_2] [i_14 - 1] [i_16] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                            var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_1 - 1] [i_1] [9ULL] [i_1] [i_16] [i_16] [9ULL]))));
                            var_41 -= ((/* implicit */long long int) var_9);
                            var_42 = ((/* implicit */int) ((arr_21 [i_14 + 1] [i_1 - 4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241)))));
                        }
                        for (long long int i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
                        {
                            var_43 = ((/* implicit */int) arr_15 [i_14 - 1] [i_1 - 1] [i_1 - 2]);
                            var_44 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_29 [i_1] [i_14] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_42 [i_14 - 1] [i_1 - 2] [0ULL] [i_14]))));
                        }
                        for (long long int i_18 = 0; i_18 < 19; i_18 += 2) /* same iter space */
                        {
                            arr_61 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073708503042ULL)) ? (arr_5 [5ULL] [i_14 + 2] [i_1 - 1]) : (var_6)));
                            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (-(arr_36 [i_0] [i_0] [i_2] [i_14] [i_2]))))));
                            var_46 |= ((/* implicit */unsigned long long int) arr_57 [i_0] [i_1] [(unsigned char)3] [i_14] [10LL]);
                            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [i_0] [(unsigned short)16] [i_2] [i_14] [(short)4])) | ((-(((/* implicit */int) (unsigned char)4)))))))));
                        }
                        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) 5447367530717483502LL))));
                        var_49 = ((/* implicit */unsigned char) (+(arr_19 [i_1 - 4] [i_14] [i_14] [i_14 - 1] [i_14 - 1] [i_14])));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_64 [i_1] [i_19] = ((/* implicit */signed char) arr_32 [i_0] [4ULL] [i_2]);
                        /* LoopSeq 2 */
                        for (unsigned int i_20 = 0; i_20 < 19; i_20 += 2) /* same iter space */
                        {
                            arr_68 [i_19] [i_1] [i_1] [i_19] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_19] [(signed char)13] [i_0])) ? (((arr_30 [i_0] [i_1] [i_1] [i_2] [i_19] [i_2] [i_1]) ? (1152921504606846975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_19] [i_0] [i_19] [i_19] [i_20] [i_0] [i_19]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)4096)) != (((/* implicit */int) (signed char)91))))))));
                            var_50 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (16591363280553792838ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10587)) ? (arr_57 [i_20] [i_20] [i_0] [i_20] [i_20]) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_19] [i_19] [i_2] [i_20])))))));
                        }
                        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
                        {
                            var_51 *= ((/* implicit */unsigned char) ((var_1) + (((/* implicit */unsigned long long int) var_2))));
                            arr_72 [i_1] [i_1] [i_1] [5] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */int) arr_43 [i_0])) - (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) var_14))))));
                        }
                        /* LoopSeq 3 */
                        for (short i_22 = 1; i_22 < 18; i_22 += 2) 
                        {
                            arr_75 [i_0] [i_0] [i_1] [i_19] [i_19] [i_22 + 1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 1131519476966249263ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_76 [i_0] [i_0] [i_2] [i_19] [i_19] [i_22] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                            var_52 = ((/* implicit */int) min((var_52), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_42 [(unsigned char)6] [i_22 - 1] [i_19] [i_1 - 3])) : (((/* implicit */int) arr_42 [i_1 - 3] [i_22 - 1] [i_22] [i_1 - 3]))))));
                            arr_77 [i_0] [0] [i_19] [i_19] [i_22] = ((/* implicit */signed char) ((_Bool) var_6));
                        }
                        for (long long int i_23 = 3; i_23 < 18; i_23 += 4) 
                        {
                            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_23] [i_23 - 3])))))));
                            var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) ((arr_1 [i_23 - 2] [i_1 - 2]) & (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_1] [i_0] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_23 + 1]))))))));
                            var_55 = ((/* implicit */long long int) arr_57 [i_23] [i_0] [i_0] [i_1] [i_0]);
                            arr_80 [i_0] [i_0] [i_19] [i_19] [i_23] = ((/* implicit */signed char) ((short) (signed char)-98));
                            var_56 = ((/* implicit */signed char) (+(arr_9 [i_23 - 1] [i_19] [i_2] [i_0] [i_0])));
                        }
                        for (int i_24 = 2; i_24 < 17; i_24 += 2) 
                        {
                            arr_83 [i_0] [i_19] [i_0] [i_0] [i_0] [i_24 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85)))));
                            arr_84 [i_0] [i_0] [i_0] [i_19] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1010132433823607647ULL)))) < (((arr_40 [i_24] [i_19] [i_2] [i_1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (-8388608LL)))));
                        }
                        var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((signed char) (short)-1250))) : (((/* implicit */int) arr_69 [i_0] [i_1] [i_2] [i_0]))));
                    }
                    var_58 = ((/* implicit */unsigned int) min((arr_19 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)194)), (17860461151106042325ULL)))))))));
                }
            } 
        } 
    } 
    var_59 = ((/* implicit */unsigned short) min((var_1), (((/* implicit */unsigned long long int) var_3))));
}
