/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109411
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) (signed char)-34);
                                var_19 = ((/* implicit */short) ((min((arr_11 [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3]), (arr_11 [i_3] [(_Bool)1] [i_4] [i_4 + 2] [i_3]))) == (min((arr_11 [i_3] [i_4] [i_4 + 2] [i_4 - 1] [i_3]), (((/* implicit */int) (_Bool)1))))));
                                var_20 = (-(var_10));
                                var_21 |= ((/* implicit */unsigned short) ((min((arr_8 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1]), (arr_8 [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 + 1]))) / ((+(arr_8 [i_4 + 2] [(_Bool)1] [i_4 - 1] [i_4 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_22 = (i_6 % 2 == 0) ? (((/* implicit */unsigned int) (((((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0] [i_0] [i_1] [i_2] [i_6] [i_0]))) << ((((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((long long int) -4723798633221244709LL))) : (((((/* implicit */_Bool) 11395414341112738432ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_0] [14LL] [14LL] [i_5] [i_6]))))) - (1ULL)))))) : (((/* implicit */unsigned int) (((((((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0] [i_0] [i_1] [i_2] [i_6] [i_0]))) + (9223372036854775807LL))) << ((((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((long long int) -4723798633221244709LL))) : (((((/* implicit */_Bool) 11395414341112738432ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_0] [14LL] [14LL] [i_5] [i_6]))))) - (1ULL))))));
                                arr_19 [i_6 - 1] [i_5] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_5] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */int) arr_12 [i_5 - 2] [17LL] [i_6] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) (_Bool)1))))) ? (68719476735LL) : (min((-849724588570325286LL), (((/* implicit */long long int) arr_12 [i_5 + 1] [i_6] [i_6] [i_6 - 1] [i_6]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8] [i_0])) ? (arr_22 [i_7 - 2] [(short)1]) : (arr_22 [i_7 - 2] [i_2])))) ? (((/* implicit */unsigned long long int) (+(arr_22 [i_2] [i_8 + 3])))) : (((unsigned long long int) arr_22 [i_0] [i_1]))));
                                var_24 = min((((/* implicit */long long int) arr_12 [(signed char)9] [(signed char)9] [(_Bool)1] [(_Bool)1] [i_8 - 1])), (((((/* implicit */long long int) ((/* implicit */int) (short)-31885))) & (((4168902509668809081LL) & (((/* implicit */long long int) 32766)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_9 = 1; i_9 < 24; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 4) 
        {
            for (unsigned int i_11 = 1; i_11 < 23; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 24; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 4; i_13 < 24; i_13 += 2) 
                        {
                            {
                                arr_39 [i_9 + 1] [(_Bool)1] [i_11] [i_12] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24535))) : (arr_36 [i_11] [i_11] [i_11] [i_11] [i_13 - 3] [i_12 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_12]))) : (min((arr_35 [i_9] [22] [i_10 + 1] [i_10 + 1] [i_9 + 1] [i_9]), (arr_28 [i_9])))));
                                arr_40 [i_12 - 3] [i_10] [i_11] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10] [i_10 + 2] [(short)11] [i_12])) ? (((/* implicit */long long int) arr_37 [(_Bool)1] [i_10 + 1] [(_Bool)1] [i_12 - 2])) : (4168902509668809080LL)))) ? (((arr_37 [i_13] [i_11 + 2] [i_10] [i_9]) - (arr_37 [i_9] [i_10 - 1] [i_12] [i_13]))) : (((((/* implicit */_Bool) arr_37 [i_13 - 4] [i_11] [i_9 + 1] [i_9 + 1])) ? (arr_37 [i_13 - 2] [i_9 + 1] [i_11] [i_12 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_9]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 22; i_15 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_42 [i_10 - 1] [i_11] [i_14] [i_15])))))))));
                                arr_45 [(unsigned char)0] [i_10] [i_11] [i_11] [i_10] [i_15] [i_11 + 2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1228217134U)), (-4168902509668809080LL)))) ? ((-(((((/* implicit */_Bool) -11)) ? (-4168902509668809080LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) -1875902467))));
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((+(((((/* implicit */_Bool) 1228217115U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11371))) : (-4168902509668809080LL))))) : (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 1368647575))))), (arr_33 [i_11 + 2] [i_10] [i_15 - 1] [i_9 - 1] [i_10 + 2]))))));
                                arr_46 [i_9 + 1] [i_10] [i_10] [i_14] [i_10] [i_15] &= ((/* implicit */short) ((((min((((/* implicit */long long int) arr_43 [i_9 - 1] [i_9 - 1] [i_11] [8LL] [i_9 - 1])), (4168902509668809079LL))) + (9223372036854775807LL))) >> ((((((~(arr_30 [i_10]))) >> ((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_15 + 2]))) : (var_9))) - (4294967203U))))) - (2197016404290LL)))));
                                var_28 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_9] [i_10] [i_10 + 2] [i_14] [i_11 - 1] [i_9])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 4; i_17 < 24; i_17 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */int) ((((((9223372036854775797LL) << (((((-4168902509668809068LL) + (4168902509668809089LL))) - (21LL))))) / (((/* implicit */long long int) (-(-1377786705)))))) << (((4168902509668809081LL) - (4168902509668809064LL)))));
                                arr_54 [i_9] [(signed char)19] [i_9] [i_9] = ((/* implicit */_Bool) ((long long int) arr_31 [(short)3]));
                                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 12414850426833263783ULL)) && (((/* implicit */_Bool) 13058153893021893377ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 3) 
    {
        for (long long int i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 1; i_21 < 12; i_21 += 1) 
                    {
                        for (int i_22 = 3; i_22 < 11; i_22 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_6 [18] [i_19]))));
                                var_32 = ((/* implicit */unsigned char) max((((arr_9 [i_22 + 1] [i_22 + 2] [8LL] [i_22] [i_21 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_21 - 1] [i_22 - 1]))))), (((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_7 [i_18] [i_19] [i_22] [i_21]))))))));
                                var_33 |= ((/* implicit */short) ((_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 287667426198290432LL))))), ((-(4611685880988434432LL))))));
                                arr_68 [i_18] [i_19] [i_20] [i_21 + 1] [i_19] [i_20] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -4168902509668809086LL)) ? (((/* implicit */long long int) var_15)) : (-5783343709067529615LL)))) ? (3628702384U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (short)(-32767 - 1))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 13; i_23 += 2) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 13; i_24 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-106)) == (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-108))))) ? (((((/* implicit */int) (signed char)64)) / ((-2147483647 - 1)))) : (((/* implicit */int) ((signed char) 1073741823)))))));
                                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3066750145U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((17228001600207052960ULL), (3160969084323599040ULL)))) ? (((/* implicit */int) (short)9561)) : ((~(((/* implicit */int) (_Bool)1)))))))));
                                var_36 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) arr_29 [i_20])), (arr_51 [i_18] [i_19] [i_20] [i_20] [i_24]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
    {
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_27 = 0; i_27 < 12; i_27 += 1) 
                {
                    for (short i_28 = 0; i_28 < 12; i_28 += 1) 
                    {
                        for (unsigned int i_29 = 0; i_29 < 12; i_29 += 3) 
                        {
                            {
                                var_37 = (~(15285774989385952550ULL));
                                var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_29]), (((/* implicit */unsigned char) arr_76 [i_28]))))) ? (((/* implicit */int) (unsigned short)43560)) : (((/* implicit */int) ((8809350062119862803ULL) < (((/* implicit */unsigned long long int) var_14))))))))));
                                arr_91 [i_26] [i_26] [i_26] [i_27] [i_28] [i_26] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)116)), (9637394011589688813ULL)))) ? (max((arr_10 [i_25] [i_25] [i_26] [i_27] [i_26] [i_26]), (((/* implicit */long long int) (signed char)127)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (signed char)-65))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_30 = 0; i_30 < 12; i_30 += 2) 
                {
                    for (int i_31 = 0; i_31 < 12; i_31 += 3) 
                    {
                        {
                            arr_98 [i_25] [i_26] [i_30] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((7079854705234167260LL), (arr_66 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) : ((+(((arr_79 [i_26]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80)))))))));
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((arr_24 [i_25 + 1] [i_25] [i_25 + 1] [i_31] [i_31] [i_31]) / (((/* implicit */long long int) ((/* implicit */int) (short)13581))))) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_31] [(unsigned short)11]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_32 = 0; i_32 < 12; i_32 += 1) 
                {
                    for (long long int i_33 = 2; i_33 < 11; i_33 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_31 [i_25 + 1])) ? (arr_31 [i_25 + 1]) : (arr_31 [i_25 + 1])))));
                            arr_105 [i_25] [(unsigned short)8] [i_25] [i_26] = ((/* implicit */short) arr_73 [i_25] [i_26] [i_26] [i_33 - 1] [i_33 - 2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    for (unsigned int i_35 = 0; i_35 < 12; i_35 += 2) 
                    {
                        {
                            arr_112 [i_35] [i_26] [i_35] [i_35] [i_34] |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_90 [(short)7] [i_26] [(short)7] [i_26] [(signed char)5] [i_26])) != (min((((/* implicit */int) (unsigned short)65535)), (2147483643)))))) ^ (((((/* implicit */_Bool) (~(arr_51 [i_25] [i_25 + 1] [i_25] [i_35] [i_25])))) ? (((((/* implicit */int) var_17)) | (((/* implicit */int) (signed char)-21)))) : (((/* implicit */int) arr_74 [i_25 + 1] [i_25 + 1] [i_34] [i_26]))))));
                            arr_113 [i_25] [i_26] [i_26] [i_26] [i_26] = ((((/* implicit */int) (signed char)-27)) | (((/* implicit */int) ((((unsigned long long int) arr_13 [i_25 + 1] [i_25 + 1] [i_25 + 1])) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21)))))));
                            arr_114 [i_25] [i_25] [i_35] [i_25] &= ((/* implicit */unsigned long long int) (short)-10920);
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)238))))) : (((((/* implicit */_Bool) ((arr_35 [i_25] [i_26] [i_25] [(_Bool)1] [i_25] [i_26]) * (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) & (-2LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_109 [0] [0] [i_25 + 1] [i_25 + 1])))))));
                            arr_115 [i_26] [i_26] [i_26] [6U] [i_35] = ((/* implicit */unsigned int) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 663678037))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_36 = 0; i_36 < 12; i_36 += 4) 
                {
                    for (long long int i_37 = 0; i_37 < 12; i_37 += 3) 
                    {
                        {
                            arr_120 [i_26] [i_36] [i_36] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25])) ? (((/* implicit */int) max((arr_16 [i_25 + 1] [i_25] [i_25] [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1]), (arr_16 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1] [11ULL])))) : (((((/* implicit */int) arr_16 [i_25 + 1] [i_25] [i_25] [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1])) + (((/* implicit */int) arr_16 [i_25 + 1] [i_25] [i_25] [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1]))))));
                            arr_121 [i_26] = (~(((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) + (arr_41 [i_25] [i_25] [i_25] [i_25] [i_25] [i_26]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
