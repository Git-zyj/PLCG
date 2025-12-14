/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170872
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
    var_18 = ((/* implicit */short) min((((/* implicit */signed char) ((_Bool) var_13))), (var_5)));
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) (signed char)58))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_0] [i_1]))), (max((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0])), (arr_5 [i_0] [(_Bool)1]))))))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2988866928U)))))) != (1306100368U))))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) var_5);
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2988866935U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (var_17))))) : ((-(1306100381U)))))), ((+(min((((/* implicit */long long int) arr_9 [i_2] [i_3])), (var_15)))))));
                var_25 = ((/* implicit */unsigned short) ((var_17) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)32512)))))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
            {
                var_26 *= ((/* implicit */signed char) var_16);
                arr_17 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [(short)10] [i_2] [i_2] [i_0])) + (((/* implicit */int) var_5))));
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_27 &= ((/* implicit */unsigned char) ((((1306100386U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_4]))))) ? (((((/* implicit */_Bool) 2988866910U)) ? (2988866927U) : (2988866935U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99)))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) - ((((_Bool)1) ? (7438172346916686685ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    var_29 = ((/* implicit */_Bool) var_12);
                }
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483633)) ? ((-(870262648))) : ((+(((/* implicit */int) var_5))))));
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-2147483647 - 1)) & (((/* implicit */int) var_2))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7] [i_6])))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32752)) ? (arr_9 [i_7] [10U]) : (arr_21 [i_6] [10ULL] [8LL]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((803854877U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_2] [i_0] [i_7]))))))))))));
                        var_33 = ((/* implicit */short) arr_23 [i_2] [i_6] [i_0] [i_0] [i_2]);
                    }
                    for (short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) ((1306100361U) % (2988866910U)));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [2LL] [12U]) * (((/* implicit */unsigned long long int) var_17))))) ? (((((/* implicit */_Bool) 2988866935U)) ? (8943758742897686820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((var_6) * (1306100367U)))))))));
                        var_36 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)231))));
                        var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_0] [i_2] [i_2] [(_Bool)1]))));
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) var_6))));
                    }
                    for (short i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                    {
                        arr_29 [i_9] [i_2] [i_4] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)56))))) * ((-(2988866913U)))));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [5U]))) > (var_15)))) : (((/* implicit */int) arr_4 [i_2] [i_4] [i_9]))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2988866922U)) ? (5411065292263825883ULL) : (((/* implicit */unsigned long long int) 2147483647))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        var_41 ^= ((/* implicit */unsigned long long int) ((_Bool) var_17));
                        var_42 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)181));
                    }
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        var_43 = (((-(var_12))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14617))));
                        var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 12; i_12 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_2] [6] [i_12 - 1] [i_12 - 1] [i_12 - 1] [(unsigned short)9]))));
                        var_46 = ((/* implicit */short) arr_22 [i_2]);
                    }
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [(_Bool)1] [i_2])) ? (((/* implicit */long long int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_2])) : (var_10)));
                    var_48 += ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)64)) / (((/* implicit */int) var_0))))) : (((var_12) ^ (((/* implicit */unsigned long long int) var_17))))));
                }
                for (unsigned char i_13 = 3; i_13 < 12; i_13 += 3) 
                {
                    var_49 = ((/* implicit */short) 2988866905U);
                    var_50 = ((/* implicit */short) (_Bool)1);
                    var_51 = ((/* implicit */signed char) (+(((/* implicit */int) (short)32767))));
                }
                for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < (((((/* implicit */_Bool) 10811023902339256352ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-32767))))));
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3812957039U)) ? (2988866928U) : (var_3)));
                        arr_42 [i_0] [i_2] [i_2] [i_4] [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)54820))));
                        var_54 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) > ((+(((/* implicit */int) arr_22 [i_2]))))));
                        var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) (((_Bool)0) ? (1306100391U) : (((/* implicit */unsigned int) 1228230100)))))));
                    }
                    var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_14])))))));
                }
            }
            for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_17 = 4; i_17 < 11; i_17 += 4) 
                {
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        {
                            var_57 = arr_22 [i_2];
                            var_58 &= ((/* implicit */short) (unsigned char)231);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned char i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        {
                            arr_55 [i_2] [i_2] [(_Bool)1] [i_19] [(_Bool)1] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-50)))))));
                            var_59 += ((/* implicit */long long int) arr_10 [i_20] [i_20]);
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 3) 
            {
                for (int i_23 = 0; i_23 < 13; i_23 += 1) 
                {
                    {
                        var_60 += ((/* implicit */unsigned int) arr_24 [(signed char)10] [i_21] [i_22] [i_23] [i_0] [i_0]);
                        arr_62 [i_0] [(signed char)10] [i_0] [i_22] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)20567)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_52 [i_0] [i_21] [i_22])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-125))))));
                        var_61 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_23] [i_22] [i_21] [i_22] [i_0])) * (((/* implicit */int) (unsigned char)183))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_22] [i_21] [i_0] [i_23] [i_0]))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_6)))))));
                        var_62 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                        var_63 ^= ((/* implicit */short) (((_Bool)1) ? ((((~(((/* implicit */int) arr_52 [i_0] [i_21] [i_22])))) & (((/* implicit */int) arr_13 [(signed char)7] [i_21] [i_22])))) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_49 [i_0] [i_22] [i_22] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 2) 
                {
                    {
                        var_64 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((var_17) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))) > (arr_38 [i_24] [i_26]))), (arr_46 [i_26] [i_24] [i_24] [i_0])));
                        var_65 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_0] [i_24] [i_25] [(signed char)8]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_24] [i_24] [(signed char)11] [i_0] [i_0] [i_26])) >= (((/* implicit */int) arr_63 [i_26] [i_24] [i_0]))))), (((long long int) 6570430346161470308ULL))))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) (signed char)-17))))) ? (((((/* implicit */_Bool) (unsigned char)135)) ? (var_12) : (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        arr_70 [i_24] [i_24] [i_25] [i_26] [i_24] = ((/* implicit */signed char) var_14);
                        var_66 = ((/* implicit */unsigned int) var_1);
                        var_67 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_27 = 0; i_27 < 13; i_27 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 4) /* same iter space */
        {
            var_68 = ((/* implicit */signed char) var_16);
            var_69 = ((/* implicit */unsigned short) arr_3 [i_27] [i_28]);
        }
        for (unsigned long long int i_29 = 0; i_29 < 13; i_29 += 4) /* same iter space */
        {
            arr_79 [9] = ((/* implicit */unsigned int) arr_68 [i_29] [i_29] [i_29] [i_29] [i_27]);
            arr_80 [i_27] = ((/* implicit */unsigned char) (short)32739);
        }
        for (unsigned long long int i_30 = 0; i_30 < 13; i_30 += 4) /* same iter space */
        {
            var_70 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [2ULL] [3LL] [10] [10] [i_30] [i_30])) ? (2795518997U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)56)))))));
            var_71 = ((/* implicit */signed char) (_Bool)0);
            var_72 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_30] [i_30] [i_30] [(unsigned short)11] [i_27] [i_27]))));
        }
        var_73 = ((/* implicit */unsigned char) max((var_73), (((/* implicit */unsigned char) ((signed char) arr_13 [i_27] [i_27] [i_27])))));
    }
    var_74 = ((/* implicit */unsigned long long int) ((var_17) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) 41119923U)))))))))));
}
