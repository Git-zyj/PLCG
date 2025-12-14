/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14076
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_2] [i_2]), ((short)2169))))) : (var_16)))));
                    arr_6 [i_0] [i_0] [i_1] [(short)18] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((2352011867U), (1942955428U)))) * (((unsigned long long int) arr_3 [i_0 + 1] [i_0] [i_0 - 1]))));
                    arr_7 [i_0] [i_0] [19ULL] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 2352011876U)) && (((/* implicit */_Bool) var_2))))) == (((((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) + (2147483647))) << (((var_17) - (1748195646)))))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-4))))) ? (((var_15) << (((var_15) - (1882272657U))))) : (((((/* implicit */_Bool) var_10)) ? (1942955420U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27010)))))))) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [6]))))))) : ((~(((/* implicit */int) arr_2 [i_2])))));
                }
                for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_4 [2LL] [i_0 - 2] [10ULL] [i_3])) ? (((/* implicit */unsigned long long int) var_18)) : (10595847701471827824ULL))), (((/* implicit */unsigned long long int) ((signed char) var_19)))));
                    var_23 -= ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) var_12)) / (-1984813767187891130LL))));
                }
                for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) arr_10 [10LL] [i_1] [0ULL] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_5] [(unsigned short)4] [i_0]))) : (arr_16 [i_0] [(signed char)10] [i_1]))))) ? (((/* implicit */int) max((arr_2 [i_6]), (((/* implicit */unsigned char) arr_8 [i_4] [i_5 - 1] [i_4]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 101615950)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_4] [i_6]))) : (var_0))) > (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-16036))))))))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_4] [i_5])) - (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))) + (14577970584762508014ULL)))) ? (((/* implicit */int) (_Bool)1)) : (-1335285468)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (short i_8 = 3; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) arr_2 [i_0]);
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_9))))))), (arr_18 [i_0] [(unsigned char)10] [18U] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        arr_25 [i_9] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (unsigned short)38541)), (((((/* implicit */_Bool) arr_1 [i_4] [i_9])) ? (arr_10 [(unsigned short)12] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141)))))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_9])) ? (((((/* implicit */_Bool) ((unsigned long long int) (signed char)127))) ? (arr_13 [i_0]) : (min((((/* implicit */unsigned long long int) (signed char)122)), (arr_10 [i_0] [i_1] [i_4] [i_0]))))) : (((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */unsigned long long int) 2352011867U)) : (((((/* implicit */_Bool) (short)2)) ? (((/* implicit */unsigned long long int) var_15)) : (4973402783017976140ULL)))))));
                        arr_26 [i_0] [i_0] [i_4] [i_9] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned int) arr_16 [i_0 + 3] [i_1] [i_0]))) ? (((/* implicit */int) ((var_14) > (((/* implicit */int) (unsigned short)27019))))) : ((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [(short)16])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_14 [i_9] [i_4] [i_0] [i_0] [i_0]))))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((((/* implicit */_Bool) ((long long int) var_4))) ? (min((((/* implicit */unsigned int) arr_2 [i_1])), (arr_20 [(_Bool)1] [i_1] [i_4] [i_1] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_4] [i_0 - 1]))))), (max((var_12), (arr_20 [i_10] [i_9] [i_0 + 2] [i_9] [i_0 + 1]))))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (arr_17 [i_0 + 2] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_22 [i_0 + 2] [i_0 + 3] [i_0 - 1] [i_0 + 3] [(unsigned short)3]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 + 2] [i_0 + 3] [i_0])))))) : (max((0ULL), (((/* implicit */unsigned long long int) arr_17 [i_0 + 2] [i_0 - 2] [i_0] [17LL] [15]))))));
                            arr_30 [i_0] [i_0] [9U] [i_9] [i_9] [i_10] = min((((((_Bool) var_7)) ? (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_9] [15LL] [i_1])))) : ((~(((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_0])))))), (((/* implicit */int) ((unsigned short) max((-508473464), (((/* implicit */int) (unsigned short)26989)))))));
                            var_31 = max((max((arr_1 [i_0] [i_0 + 3]), (((/* implicit */unsigned int) arr_29 [20ULL] [i_0 + 3] [20ULL] [20U] [i_4] [i_10])))), (((unsigned int) arr_1 [i_0] [i_0 + 3])));
                            arr_31 [i_0] [i_1] [i_0] [i_1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (799201062U))), ((-(4294967295U)))))) / (((arr_17 [i_4] [i_4] [i_4] [3ULL] [i_4]) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 21ULL))))))))));
                        }
                        for (unsigned int i_11 = 2; i_11 < 20; i_11 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)110))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_9] [i_0])) ? (((/* implicit */unsigned long long int) 799201073U)) : (arr_13 [i_4])))) ? (min((arr_22 [17] [i_1] [15ULL] [i_9] [i_9]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) : (((min((arr_15 [i_0] [i_1] [(short)14] [i_9] [i_11]), (((/* implicit */long long int) var_1)))) % (((/* implicit */long long int) var_2))))));
                            var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [15U])))))));
                            arr_34 [i_0] [i_9] [i_4] [i_9] [(signed char)2] [i_1] [i_9] = ((/* implicit */short) min(((~(min((var_17), (var_2))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0] [i_9] [i_0])), (arr_27 [0U] [8] [8] [(signed char)2] [8] [(signed char)2])))))))));
                        }
                    }
                    for (long long int i_12 = 3; i_12 < 19; i_12 += 4) /* same iter space */
                    {
                        var_34 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_16) * (arr_33 [6] [i_1] [i_1] [i_0])))) * (((unsigned long long int) var_17))));
                        var_35 = ((/* implicit */unsigned long long int) var_18);
                        var_36 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_2 [i_0]))))));
                    }
                    for (long long int i_13 = 3; i_13 < 19; i_13 += 4) /* same iter space */
                    {
                        arr_40 [i_13 + 2] [i_0] [i_0] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_4)))), (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0]))))));
                        var_37 -= ((/* implicit */signed char) (short)-9108);
                        arr_41 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */signed char) arr_17 [i_0] [i_13 + 2] [(unsigned short)18] [i_1] [i_0]);
                        var_38 *= ((((/* implicit */unsigned long long int) var_14)) | (((((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_4] [i_4]))) ? (((var_5) ? (arr_13 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)235))))))));
                    }
                }
                /* LoopNest 3 */
                for (long long int i_14 = 2; i_14 < 20; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            {
                                var_39 -= ((/* implicit */short) ((((((/* implicit */int) var_19)) >= (((/* implicit */int) arr_28 [i_0 + 1] [i_14 - 2] [i_14 + 1] [i_1] [i_14 + 1])))) ? (((((/* implicit */_Bool) arr_11 [i_14 + 1] [i_15])) ? (((/* implicit */int) arr_28 [i_0 - 2] [i_14 - 1] [i_14 + 1] [i_15] [i_14 + 1])) : (((/* implicit */int) arr_28 [i_0 - 1] [i_14 - 2] [i_14 - 1] [i_15] [i_14 - 2])))) : (((((/* implicit */_Bool) arr_11 [i_14 + 1] [i_15])) ? (((/* implicit */int) arr_11 [i_14 - 1] [i_1])) : (((/* implicit */int) arr_28 [i_0 - 1] [i_14 - 2] [i_14 + 1] [i_15] [i_14 - 1]))))));
                                var_40 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)89)), (6497804628155631294LL)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_17 = 1; i_17 < 19; i_17 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        var_41 -= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38525)) && (((/* implicit */_Bool) 2456870936492663626ULL))))), (((((/* implicit */_Bool) arr_15 [i_1] [(signed char)4] [i_1] [i_17 + 1] [i_17 + 1])) ? (arr_39 [i_17 + 2]) : (var_15))));
                        arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                        var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_5 [(signed char)12] [i_1] [4LL])) : (var_0)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [4ULL]))))))) : (((/* implicit */int) var_19))));
                    }
                    arr_59 [i_0] = ((/* implicit */int) var_19);
                    arr_60 [i_0] [(signed char)12] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_1] [i_0] [(short)10])) ? (((/* implicit */int) arr_53 [i_17 - 1])) : (((/* implicit */int) arr_19 [i_0 + 1] [i_0 - 1] [i_0 + 3])))))));
                }
                var_43 -= ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) | (((/* implicit */int) var_19))));
}
