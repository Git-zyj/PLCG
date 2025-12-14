/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15587
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((67320058359267827ULL) != (0ULL))) ? (((0ULL) << (((((/* implicit */int) (short)-16133)) + (16155))))) : (var_15)));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) arr_0 [i_1]);
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (0ULL)));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2])))))));
        arr_13 [i_2] [(short)0] = ((/* implicit */unsigned char) ((int) 4116045162U));
        arr_14 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_3 [i_2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2])))))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 18; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 130816U)) ? (((/* implicit */int) (unsigned short)18979)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-83)), (arr_20 [i_3])))) : (((/* implicit */int) arr_18 [i_3])))) != (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_20 [i_4])) : (((/* implicit */int) var_14)))))))));
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) var_13);
                                var_23 = ((/* implicit */short) (((!(((/* implicit */_Bool) 7638085434144739476ULL)))) || (((/* implicit */_Bool) ((4110451381599248722ULL) | (18446744073709551609ULL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_22 [i_3] [i_3] [i_3] [(signed char)19]))) << (((((/* implicit */_Bool) arr_23 [i_3] [i_5] [i_8])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))) | (18446744073709551608ULL)));
                        arr_30 [i_3] [(signed char)12] = ((/* implicit */short) max(((~(((var_15) >> (((((/* implicit */int) var_17)) - (45236))))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_29 [i_3] [i_4] [i_5] [i_5] [i_5])))))))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        arr_33 [i_3] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (short)-32763))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_27 [i_9 + 2] [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9])))) ? ((~(max((((/* implicit */unsigned long long int) arr_22 [i_9] [i_3] [i_3] [i_3])), (var_9))))) : (((/* implicit */unsigned long long int) 1455452638U))));
                        arr_34 [i_3] [i_3] [i_5] [i_9] [i_5] = (i_3 % 2 == 0) ? (((/* implicit */_Bool) ((((((((/* implicit */int) arr_22 [i_3 - 1] [i_3] [i_5] [(signed char)6])) + (2147483647))) >> (((var_10) - (13034530725634255977ULL))))) << (((((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_4] [i_4] [i_3] [i_3] [i_3 + 3])) ? (arr_27 [i_9] [i_5] [i_9] [i_5] [i_3] [i_3] [i_3 + 2]) : (arr_27 [i_5] [i_5] [i_5] [i_4] [i_4] [i_3 + 3] [i_3 + 3]))) - (1638064518U)))))) : (((/* implicit */_Bool) ((((((((((/* implicit */int) arr_22 [i_3 - 1] [i_3] [i_5] [(signed char)6])) - (2147483647))) + (2147483647))) >> (((var_10) - (13034530725634255977ULL))))) << (((((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_4] [i_4] [i_3] [i_3] [i_3 + 3])) ? (arr_27 [i_9] [i_5] [i_9] [i_5] [i_3] [i_3] [i_3 + 2]) : (arr_27 [i_5] [i_5] [i_5] [i_4] [i_4] [i_3 + 3] [i_3 + 3]))) - (1638064518U))))));
                        var_26 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) ((signed char) 471997269))) : ((~(var_13)))));
                    }
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        arr_37 [i_3 - 2] [i_3 - 2] [i_3] [i_10] = ((/* implicit */unsigned int) ((arr_15 [i_3] [i_3 + 3]) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_3] [i_3 + 2] [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 1]))) + (var_8))))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_7)) - (18262)))))))) == (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned long long int) 130816U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_3] [i_4] [i_4] [i_4] [i_5] [i_3]))) & (arr_15 [i_10] [i_3]))))))))));
                        var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)29)) ? ((((~(18446744073709551599ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_21 [i_10] [i_4] [i_4] [i_10]), (((/* implicit */unsigned short) arr_17 [i_5])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4110451381599248722ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_36 [i_10] [i_4] [i_5] [i_5] [i_10]))))) ? ((~(arr_19 [i_3] [i_5] [i_10]))) : (min((7ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    }
                    arr_38 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_16);
                    arr_39 [i_3] [i_4] [i_4] [3U] = ((/* implicit */signed char) ((arr_19 [(short)16] [(short)16] [i_5]) != (((/* implicit */unsigned long long int) max((-1842940736), (((/* implicit */int) (unsigned char)40)))))));
                }
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_35 [i_3] [i_3 - 2] [i_3 - 2] [i_4] [i_4] [i_3]))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_3 - 1] [i_3] [i_3 - 2])) && (((/* implicit */_Bool) arr_28 [i_3 - 1] [i_3 + 2] [i_3]))))))))));
                    var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_11] [i_4] [i_3])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_42 [(_Bool)0] [(_Bool)0] [(_Bool)0])) : (((/* implicit */int) arr_36 [(_Bool)1] [i_3] [i_4] [i_4] [i_3])))) : (max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_28 [(short)6] [i_4] [i_11])) : (((/* implicit */int) (signed char)19))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_3] [i_11] [i_4] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_18 [i_12 - 1]), (arr_18 [i_12 - 1]))))));
                        var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 3819623159U)) <= (18446744073709551615ULL))))));
                        var_32 = ((/* implicit */_Bool) arr_32 [i_12 - 1] [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 3]);
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_49 [(unsigned short)13] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (_Bool)1))) << (((((/* implicit */int) (unsigned char)10)) & (((/* implicit */int) arr_21 [i_3] [i_4] [i_11] [i_13 - 1]))))))) ? (((/* implicit */unsigned int) ((int) arr_26 [i_3] [18U] [i_11] [i_13 - 1] [i_3] [i_11] [i_13 - 1]))) : (((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)75)))) : ((~(var_1)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 1; i_14 < 19; i_14 += 4) 
                        {
                            arr_53 [i_3] [i_11] [i_14] = ((/* implicit */signed char) ((short) var_1));
                            var_33 = ((/* implicit */unsigned long long int) min((arr_27 [3ULL] [i_4] [i_11] [i_13 - 1] [i_14] [i_3 - 1] [i_3]), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)40)))))))));
                            arr_54 [i_3] [i_4] [i_4] [(unsigned short)10] [i_3] = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) arr_36 [i_3] [i_4] [i_11] [i_13] [i_11])))));
                        }
                        var_34 *= ((/* implicit */unsigned long long int) (((~(arr_43 [i_3] [i_4] [i_11] [(signed char)0]))) + (max((arr_27 [i_3 - 2] [i_3 - 1] [i_3] [i_3 - 2] [i_3] [i_3] [i_3 - 1]), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_57 [i_3] [i_15] [i_15 - 1] [i_11] [i_4] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_3 + 1]))));
                        arr_58 [i_3] [(signed char)9] [i_11] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128))));
                        var_35 = ((/* implicit */short) arr_15 [i_3] [i_11]);
                    }
                }
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((unsigned long long int) arr_51 [i_16 - 1] [i_16 - 1] [i_3 - 2] [i_3] [i_3 - 2])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_51 [i_16 - 1] [i_16 - 1] [i_3 - 2] [i_3 + 1] [i_3 + 3]), (((/* implicit */unsigned short) (unsigned char)216)))))))))));
                        arr_64 [i_3] [i_4] [i_3] [i_17] = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)142))));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_17] [(_Bool)1] [i_17] [i_16 - 1] [(_Bool)1] [i_3 + 3])) ? (((/* implicit */int) arr_32 [i_17] [(short)0] [i_16 - 1] [i_16 - 1] [(short)0] [i_3 + 3])) : (((/* implicit */int) arr_32 [i_17] [(_Bool)1] [i_17] [i_16 - 1] [(_Bool)1] [i_3 + 3]))))) != (((unsigned int) arr_32 [i_17] [(_Bool)1] [i_16] [i_16 - 1] [(_Bool)1] [i_3 + 3])))))));
                        var_38 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_51 [i_3 + 2] [i_3 + 2] [i_16] [i_16 - 1] [i_16 - 1])) > (((/* implicit */int) arr_51 [i_3 - 1] [i_3 + 2] [i_16] [i_16 - 1] [i_16 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_19 [i_3 + 2] [i_17] [i_16])))) : (((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)226))))) ? (max((var_16), (((/* implicit */unsigned int) arr_29 [i_3] [i_3] [i_16] [i_17] [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_3 + 3] [i_16 - 1] [i_17] [i_17])))))));
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 18; i_18 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_23 [i_3] [i_4] [i_16]))));
                        arr_67 [i_3] [i_4] [i_3] [i_18] = ((/* implicit */_Bool) arr_22 [i_18] [i_3] [i_3] [i_3]);
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */_Bool) max(((((_Bool)1) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (arr_48 [i_3 - 2] [i_3] [i_16 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned char i_20 = 0; i_20 < 21; i_20 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) max((var_1), (((/* implicit */unsigned int) arr_36 [i_3] [(signed char)16] [i_16 - 1] [i_4] [i_4])))))) >= (((((/* implicit */_Bool) 2310201235U)) ? (((/* implicit */int) arr_18 [i_3 + 3])) : (((/* implicit */int) arr_68 [i_16] [i_16 - 1]))))));
                            var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned char)197))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (706729707U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_20] [i_4])) ^ (((/* implicit */int) arr_16 [i_20] [i_20]))))))) ^ (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) ((var_16) != (var_11))))))))))));
                            var_43 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_36 [i_3] [i_4] [i_3 + 2] [i_4] [i_20])) ? (3933120410413473412ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_3]))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)56974)))), (((/* implicit */int) var_4)))))));
                            arr_72 [i_3] [i_4] [i_16] [i_3 - 1] = ((/* implicit */_Bool) var_11);
                            arr_73 [i_20] [i_19] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (unsigned char)197)) / (((/* implicit */int) (unsigned short)28657)))))) ? (max((((((/* implicit */int) (signed char)69)) * (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((short) ((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73)))))))));
                        }
                        arr_74 [1U] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) ((short) arr_20 [i_19 + 1]));
                    }
                    var_44 = ((/* implicit */unsigned int) (unsigned char)118);
                    var_45 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_24 [i_16] [i_16] [i_16] [i_16 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_24 [i_3] [i_3] [i_16] [i_16 - 1]))))));
                }
                /* vectorizable */
                for (int i_21 = 4; i_21 < 20; i_21 += 2) 
                {
                    var_46 ^= ((/* implicit */short) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_3 + 3] [i_4] [i_21] [i_21 - 4] [i_3 + 2])))));
                    var_47 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)59)) & (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0))));
                    arr_77 [i_3] [i_3] [(short)3] [i_3] = ((/* implicit */unsigned long long int) (signed char)0);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_22 = 0; i_22 < 24; i_22 += 3) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                {
                    var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((_Bool) (~(max((2136617445U), (((/* implicit */unsigned int) arr_79 [i_22]))))))))));
                    arr_86 [i_23] [i_22] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_81 [i_23])) & (((/* implicit */int) arr_81 [i_23]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_81 [i_23])) ^ (((/* implicit */int) arr_81 [i_23]))))) : (((unsigned int) var_11))));
                }
            } 
        } 
    } 
    var_49 = ((/* implicit */unsigned int) 18446744073709551615ULL);
    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (_Bool)0)), (var_6))) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))))) : (((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) >= (var_10)))))))));
}
