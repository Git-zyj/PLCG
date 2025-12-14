/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106311
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min(((signed char)-62), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)-115)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52779)) % (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((int) var_6))) : (var_8)))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_10)), (var_2))), (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_1 + 1] [i_2] [(unsigned char)3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */int) (_Bool)1))))))) : (min((min((var_8), (((/* implicit */unsigned long long int) var_5)))), (min((var_2), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0]))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 1]), (((/* implicit */unsigned short) var_9)))))) : ((+(((arr_5 [(unsigned short)19] [i_1] [(unsigned short)19] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [10ULL] [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        arr_19 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_3] [i_4] [i_3])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_3] [8U] [8U])) : (((/* implicit */int) arr_15 [i_5 - 1] [i_3])))) : (((((/* implicit */_Bool) (short)-19564)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)961))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_18 [i_6] [i_3] [i_4] [i_3])))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_4))))))))));
                        arr_20 [3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((arr_15 [i_3] [i_3]) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)2029)), (arr_9 [i_5])))) : (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned long long int) 697461343U)) : (18446744073709551614ULL))))) | (((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_1)))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            arr_28 [i_3] [i_4] [i_5] [i_3] [i_8] = ((/* implicit */signed char) ((((100943689) - (max((((/* implicit */int) var_5)), (arr_22 [i_3] [i_4] [i_5] [(unsigned char)14]))))) - ((-(((/* implicit */int) var_10))))));
                            arr_29 [i_3] [i_4] [i_3] [14U] [i_8] = ((/* implicit */_Bool) var_7);
                            arr_30 [i_7] [i_4] = ((/* implicit */signed char) max((arr_9 [i_3]), (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)440)))) * (((((/* implicit */_Bool) 4292870144U)) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) var_1))))))));
                        }
                        arr_31 [i_3] [i_3] = ((/* implicit */short) var_9);
                        arr_32 [i_3] [i_3] [i_5] [(unsigned short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((arr_23 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) arr_16 [(signed char)4] [i_4] [i_4])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_18 [6] [9] [6] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43432))))))))) : ((-(((/* implicit */int) min(((unsigned char)239), ((unsigned char)178))))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(-447239839))))))) <= (((/* implicit */int) arr_0 [i_3]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_38 [i_5] [i_4] [i_5] [i_9] [i_10] [(signed char)19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40185)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_3] [i_5] [11]))))) ? (-43455554) : (15)))) ? (386669465U) : (((/* implicit */unsigned int) 432311023))));
                            arr_39 [i_4] [i_4] = ((/* implicit */_Bool) var_4);
                            arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (arr_1 [i_10])));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_3] [i_3] [i_5] [i_11] [i_3] |= ((/* implicit */signed char) min((((((long long int) arr_33 [i_3] [i_4])) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)4)))) ? (max((((/* implicit */unsigned int) var_9)), (arr_23 [2] [2] [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)54694))))))))));
                        arr_44 [i_11] [i_4] [i_5] [(signed char)7] = min(((unsigned short)65535), (((/* implicit */unsigned short) min(((short)22), (((/* implicit */short) var_10))))));
                        arr_45 [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_3)), (var_2))) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (3913788108U)))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            arr_51 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) var_7))));
                            arr_52 [i_12] [11] = ((/* implicit */_Bool) (+(7785118190263181904ULL)));
                        }
                        arr_53 [i_12] [(_Bool)1] [i_4] [i_4] [i_3] = ((/* implicit */signed char) arr_1 [i_5]);
                        arr_54 [i_4] = ((/* implicit */short) 5419303341547623422ULL);
                    }
                }
            } 
        } 
    } 
    var_12 = var_7;
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            {
                arr_61 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) var_10);
                arr_62 [i_14] [(unsigned short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_14] [i_14])) || (((/* implicit */_Bool) var_3))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        {
                            arr_68 [i_14] [i_15] [i_15] [i_17] = ((/* implicit */unsigned long long int) arr_23 [i_14] [i_16] [i_14] [i_14]);
                            arr_69 [i_16] [i_16] [(signed char)9] [i_15] = ((unsigned short) ((((/* implicit */int) (unsigned char)56)) * (((/* implicit */int) (unsigned char)1))));
                            arr_70 [i_14] [i_15] [i_17] [(unsigned short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (7831284270451223375ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_15])) ? (arr_55 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            arr_71 [i_14] [i_15] [i_15] [i_16] [i_15] = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))));
                            arr_72 [i_14] = ((/* implicit */long long int) (-(var_2)));
                        }
                    } 
                } 
                arr_73 [i_14] [i_15] [i_14] = ((/* implicit */unsigned short) min(((-(2582939597U))), (((/* implicit */unsigned int) var_10))));
                arr_74 [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)67), ((unsigned char)107)))) ? (((((/* implicit */_Bool) ((arr_60 [i_15]) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((~(var_0))) : ((~(3158273397489503575ULL))))) : ((~(max((8258118285537406783ULL), (((/* implicit */unsigned long long int) arr_33 [(_Bool)1] [i_14]))))))));
            }
        } 
    } 
}
