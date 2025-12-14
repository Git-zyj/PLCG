/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108579
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) var_3);
                                arr_12 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [(unsigned short)2] [(short)7]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 7; i_6 += 2) 
                    {
                        {
                            var_12 = ((((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)238), (((/* implicit */unsigned char) (signed char)0)))))) >= (((arr_8 [i_0] [i_1] [1U] [i_6]) & (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0 - 1])))))) && (((/* implicit */_Bool) (-((-(var_9)))))));
                            arr_21 [i_1] = ((/* implicit */unsigned char) ((signed char) max(((+(16362150609802926093ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 2) 
                {
                    for (short i_8 = 2; i_8 < 8; i_8 += 2) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (1607738045U))), (((/* implicit */unsigned int) arr_14 [i_0 + 2] [i_1] [i_9])))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65513))) <= (540446364U))))))));
                                var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) 2084593463906625523ULL)) ? (((/* implicit */unsigned long long int) -1)) : (16362150609802926089ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [3ULL] [i_7] [i_8 - 1]))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) var_5))))))))))));
                                var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)68)) & (((/* implicit */int) (short)28536)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_8] [i_1] [i_1])) ? (((/* implicit */unsigned int) 1616069907)) : (var_2)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 2) 
    {
        for (short i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 1; i_12 < 10; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((unsigned int) min((2687229246U), (((/* implicit */unsigned int) (signed char)117)))));
                            arr_39 [i_10 + 1] [i_13] [i_12] [0U] [i_12] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_9))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_14 = 2; i_14 < 11; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            {
                                arr_50 [i_10 + 1] [i_11] [i_14] [i_10] [i_14] [i_14] [i_15] = ((/* implicit */short) var_5);
                                arr_51 [i_10] [i_11] [i_11] [i_15] [i_14] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_40 [i_10] [i_10] [i_10] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13LL)))))) : (((((/* implicit */long long int) var_2)) ^ (arr_48 [i_16] [i_15] [i_14] [i_11] [i_11] [(signed char)7] [i_10])))))) ^ (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), (max((arr_47 [i_10] [i_14] [(unsigned char)3]), (((/* implicit */unsigned long long int) arr_45 [6U] [i_11] [i_14] [i_15] [i_16]))))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))) : (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (16362150609802926082ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_30 [i_10] [i_11]))) < (((/* implicit */int) ((((/* implicit */long long int) var_6)) <= (arr_43 [i_10] [i_11] [(unsigned short)8] [i_15]))))))) : (((/* implicit */int) ((var_7) >= (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_5)))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            for (unsigned int i_19 = 3; i_19 < 19; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 20; i_20 += 2) 
                    {
                        for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2680828825U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_60 [i_19] [i_19] [i_19] [i_18] [i_17])))), (arr_55 [i_19 - 1] [i_18] [i_19 - 1])))) ? (((/* implicit */int) (!(((((/* implicit */int) var_8)) != (((/* implicit */int) (short)(-32767 - 1)))))))) : (max((((/* implicit */int) ((unsigned char) (signed char)-1))), ((-(((/* implicit */int) (unsigned char)252))))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-29885)) < (((/* implicit */int) (unsigned char)42)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32743))) != (18446744073709551599ULL)))) : (((/* implicit */int) (unsigned short)18059))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1616069908)) ? (-700811005) : (1616069923))) & (((/* implicit */int) arr_56 [i_17] [i_19] [i_21]))))) : (2084593463906625522ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        for (unsigned int i_23 = 0; i_23 < 20; i_23 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((signed char) var_4));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_1))) < (((/* implicit */int) min((((/* implicit */unsigned short) max((arr_59 [i_17] [i_18] [i_23] [i_19 - 3] [i_23] [i_23]), (((/* implicit */short) var_1))))), (var_5))))));
                                var_22 ^= max((((((/* implicit */_Bool) ((unsigned long long int) (signed char)87))) ? (((var_7) + (((/* implicit */int) arr_56 [i_19] [(unsigned short)14] [i_19 + 1])))) : (var_0))), (((((((/* implicit */int) (signed char)-99)) & (((/* implicit */int) (signed char)-63)))) & ((-(((/* implicit */int) arr_64 [i_17])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_24 = 3; i_24 < 18; i_24 += 2) 
                    {
                        for (unsigned int i_25 = 1; i_25 < 18; i_25 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-100)), ((unsigned short)32768)))), (((unsigned long long int) var_2)))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_65 [i_19] [i_19] [(unsigned short)0] [i_19 - 3]))))))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_2), (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967290U)))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10)))) ? (((var_7) / (((/* implicit */int) arr_56 [i_18] [3] [i_25])))) : (((((/* implicit */_Bool) 1472310516U)) ? (((/* implicit */int) (short)-7841)) : (((/* implicit */int) (short)-2))))))) ? ((-(((/* implicit */int) arr_69 [i_17] [(short)17] [i_19] [(_Bool)1] [(short)1])))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (signed char)87))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_26 = 0; i_26 < 20; i_26 += 2) 
                    {
                        for (unsigned char i_27 = 1; i_27 < 17; i_27 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                                var_27 = min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_7)) ? (var_2) : (var_2))))), ((-(((var_6) * (((/* implicit */unsigned int) var_9)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        for (unsigned long long int i_29 = 1; i_29 < 13; i_29 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_30 = 0; i_30 < 15; i_30 += 2) 
                {
                    for (unsigned int i_31 = 0; i_31 < 15; i_31 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)-63), ((signed char)-10)))) / (((/* implicit */int) arr_62 [i_28] [i_29 + 1] [i_30] [i_31] [i_31]))))), (min((((((/* implicit */unsigned long long int) var_0)) / (arr_83 [i_28] [i_28]))), (((/* implicit */unsigned long long int) var_3))))));
                            arr_87 [i_29] [i_29] [i_29 - 1] [i_30] [i_31] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (max((var_2), (((/* implicit */unsigned int) arr_63 [i_30] [i_30] [i_30] [i_30] [i_29] [i_28])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))))))));
                            var_29 = ((/* implicit */unsigned short) ((int) 2646871621U));
                            var_30 = ((/* implicit */short) ((((arr_66 [i_29] [i_29] [i_29 - 1] [(_Bool)1] [i_29]) != (var_9))) ? (((((/* implicit */_Bool) (signed char)101)) ? (2147483647) : (((/* implicit */int) (short)-24287)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (arr_66 [i_29] [i_29] [i_29 - 1] [i_29] [i_29]))))));
                            var_31 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    for (unsigned int i_33 = 0; i_33 < 15; i_33 += 2) 
                    {
                        for (unsigned short i_34 = 0; i_34 < 15; i_34 += 2) 
                        {
                            {
                                arr_96 [i_29] [i_29] [i_34] [(signed char)0] [i_29] [i_34] [4U] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_2)))) < (((unsigned long long int) (unsigned short)65526))))) > ((-((~(((/* implicit */int) (signed char)-85))))))));
                                var_32 |= ((/* implicit */unsigned char) ((signed char) (~(((((/* implicit */_Bool) var_10)) ? (arr_80 [i_28] [(unsigned short)5] [i_33]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
    {
        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_37 = 0; i_37 < 14; i_37 += 2) 
                {
                    for (unsigned char i_38 = 0; i_38 < 14; i_38 += 2) 
                    {
                        {
                            var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_77 [i_35] [i_36]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) - (arr_57 [i_35] [i_36] [i_37]))))))) * (((((/* implicit */_Bool) max(((short)-727), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                            arr_106 [(unsigned char)13] [i_36] [i_35] [i_37] [i_38] = ((/* implicit */short) min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)160)) && (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) (-(arr_54 [(unsigned short)18]))))))), (((unsigned short) ((((/* implicit */unsigned long long int) 5654181066303936416LL)) & (arr_80 [(unsigned char)3] [(unsigned short)13] [i_38]))))));
                            var_34 += ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)18059));
                            var_35 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) arr_95 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_39 = 0; i_39 < 14; i_39 += 2) 
                {
                    for (short i_40 = 0; i_40 < 14; i_40 += 2) 
                    {
                        {
                            arr_111 [i_36] [i_35] [(unsigned short)8] [i_36] = ((/* implicit */unsigned long long int) ((((int) ((long long int) (_Bool)1))) > (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)250)))), ((!(((/* implicit */_Bool) 3095071805U)))))))));
                            var_36 -= ((/* implicit */unsigned short) (-(((/* implicit */int) max((((unsigned short) var_9)), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (arr_61 [13U] [(short)19] [i_39] [i_39])))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_41 = 0; i_41 < 14; i_41 += 2) 
                {
                    for (short i_42 = 0; i_42 < 14; i_42 += 2) 
                    {
                        for (unsigned int i_43 = 0; i_43 < 14; i_43 += 2) 
                        {
                            {
                                arr_120 [i_43] [i_35] [i_42] [(unsigned char)2] [i_41] [i_35] [i_35] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) var_9)) < (((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_109 [3U] [i_36] [i_35])))))))) != ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))) < (4294967295U))))))));
                                arr_121 [(signed char)3] [i_43] [i_35] [i_35] [i_36] [i_35] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4196916616327982601ULL)) ? (((/* implicit */long long int) 2646871621U)) : (-5LL)))));
                                arr_122 [i_35] [i_36] [i_35] [i_42] [10U] = ((/* implicit */unsigned char) max((arr_114 [i_35] [(_Bool)1] [i_41] [i_42] [i_43]), (10228237664050554171ULL)));
                                arr_123 [i_35] [i_36] [i_36] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)64)) < (((/* implicit */int) (signed char)17)))))) <= (26388279066624ULL))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (1199895490U)))) || (((/* implicit */_Bool) 2646871621U))))));
                                var_37 *= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_35] [(unsigned char)13]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 60536128)), (2646871621U)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_89 [i_35] [(short)3] [i_35] [i_35]))))) : (((/* implicit */int) arr_81 [i_35] [i_36]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
