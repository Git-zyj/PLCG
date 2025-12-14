/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183171
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_10 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-(min((var_6), (var_0))))) : (((/* implicit */long long int) max((((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (598232256))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            var_11 *= ((/* implicit */unsigned int) ((arr_1 [(short)2] [i_1]) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2793770941104477183ULL))))));
            var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1 + 1])))))));
            var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)0] [i_1 + 2])))))) : (((-5841215512072825084LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-30271)))))));
        }
        for (unsigned short i_2 = 3; i_2 < 8; i_2 += 2) 
        {
            var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) min((919937590), (((/* implicit */int) var_4))))) >= (((unsigned long long int) arr_4 [i_0] [i_0] [i_0])))))));
            arr_8 [i_0] [i_2 - 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 2]))) : (var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (368458749U)))));
        }
        var_15 = ((/* implicit */int) min((((min((((/* implicit */long long int) (unsigned short)15556)), (-4603855831240331813LL))) | (((/* implicit */long long int) (~(-473388698)))))), (((/* implicit */long long int) min((((/* implicit */signed char) (!(var_5)))), (((signed char) var_0)))))));
        arr_9 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))), (min((((/* implicit */long long int) (signed char)97)), (5841215512072825091LL)))));
        arr_10 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-598232257)));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 9; i_4 += 2) 
        {
            arr_17 [i_3] = ((/* implicit */long long int) ((_Bool) arr_2 [i_3] [i_4]));
            arr_18 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_4 - 1])) << (((var_3) + (687665357730619059LL)))));
        }
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [0LL] [i_3])))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (signed char)-16))));
        arr_19 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) -5841215512072825086LL)) && (((/* implicit */_Bool) 473388697))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)15579))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (long long int i_8 = 2; i_8 < 10; i_8 += 1) 
                {
                    {
                        arr_31 [i_5] [i_6] [i_5] [i_7] [i_8 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_8 - 2] [i_8 - 2] [i_5] [i_8 + 1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_28 [i_5])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) arr_0 [i_8 - 1])))));
                        var_18 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        arr_32 [i_5] = ((((/* implicit */_Bool) arr_29 [i_5] [i_8 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)));
                    }
                } 
            } 
        } 
    }
    var_19 = ((var_2) ^ (((/* implicit */long long int) (+((~(((/* implicit */int) (short)32762))))))));
    /* LoopSeq 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)189)))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -473388698)) ? (516096LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-93)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_35 [i_9])) : (var_3)))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))))) : (((/* implicit */unsigned long long int) (-(var_0))))));
            arr_38 [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((max((var_1), (((/* implicit */unsigned long long int) 19U)))) == (((/* implicit */unsigned long long int) max((-1648040896017774598LL), (var_0))))))) >= ((-(((/* implicit */int) var_4))))));
            arr_39 [i_9] = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_34 [i_9]))))), ((-(5266836658577024532LL))));
            arr_40 [i_9] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_33 [i_9] [i_9])))))));
        }
        for (short i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) -1727123693)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((((/* implicit */long long int) 473388697)) ^ (var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_35 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_35 [i_9])))));
            var_23 ^= ((/* implicit */_Bool) ((((max((arr_42 [i_11] [4]), (arr_42 [i_9] [6]))) + (9223372036854775807LL))) << (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (var_2)))), (((((/* implicit */_Bool) (short)-10590)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (2247654958645870156ULL)))))));
        }
        for (short i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_24 = ((/* implicit */long long int) min((473388698), (((/* implicit */int) (_Bool)0))));
            var_25 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1403004699)) ? (((/* implicit */int) (unsigned char)115)) : (-473388697)))))), (((((/* implicit */_Bool) arr_41 [i_12])) ? (arr_41 [i_12]) : (((/* implicit */unsigned long long int) var_0))))));
            /* LoopSeq 3 */
            for (unsigned short i_13 = 1; i_13 < 18; i_13 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_14 = 1; i_14 < 18; i_14 += 1) 
                {
                    arr_54 [i_9] [i_9] [i_9] [i_9] [(_Bool)1] [i_9] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_6) > (var_7)))), (arr_37 [i_13 + 2] [i_9])))) ? (((((/* implicit */_Bool) (+(598232256)))) ? (0ULL) : (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_52 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (var_3) : (arr_50 [i_9] [i_12] [i_12] [i_14 + 2]))) | (((((/* implicit */_Bool) var_6)) ? (-9LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    var_26 = ((/* implicit */unsigned int) min((var_7), (((((((/* implicit */_Bool) var_4)) ? (var_6) : (arr_50 [17ULL] [8LL] [i_12] [(unsigned short)18]))) - (((/* implicit */long long int) (-(arr_51 [i_9] [i_9]))))))));
                    var_27 = ((/* implicit */unsigned int) arr_34 [i_9]);
                }
                for (short i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    arr_57 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 54046147950453998LL)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned short)15525))));
                    arr_58 [i_12] [i_12] [i_12] [i_9] [i_12] = ((/* implicit */unsigned short) min((473388698), (((/* implicit */int) (signed char)-97))));
                }
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        {
                            arr_63 [i_9] [2LL] [i_9] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_9] [i_12] [i_12] [(signed char)6] [i_12] [i_12])))))));
                            var_28 ^= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (597914072U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-98), (((/* implicit */signed char) (_Bool)1)))))) : (((min((((/* implicit */unsigned long long int) var_8)), (var_1))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)140))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_18 = 1; i_18 < 18; i_18 += 1) /* same iter space */
            {
                arr_66 [i_9] [i_9] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_42 [i_12] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15563))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) % (arr_51 [i_18] [i_12])))));
                arr_67 [i_9] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) >= ((-(var_6))));
                var_29 = ((unsigned int) 17793924805929342980ULL);
            }
            for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                arr_72 [i_9] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */long long int) var_5)), (var_7))))) ? (((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */long long int) ((int) var_7))) : (min((arr_52 [i_9] [1U] [i_19] [i_19] [i_9] [i_19]), (((/* implicit */long long int) arr_45 [i_9] [i_9] [i_9])))))) : (min((max((-1202695064923925316LL), (var_7))), (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_9] [i_12] [i_12] [i_12] [i_12] [i_12])))))))));
                arr_73 [i_9] [i_9] [i_12] [i_19] = (!(((/* implicit */_Bool) var_1)));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_20 = 1; i_20 < 18; i_20 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    arr_79 [i_9] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_46 [i_20 + 2] [i_20 + 1])) | (((((/* implicit */_Bool) arr_69 [i_9] [i_12] [i_9])) ? (var_3) : (var_6)))));
                    arr_80 [i_9] [i_20] [i_20 - 1] [i_9] [i_9] = ((/* implicit */unsigned short) ((unsigned char) ((var_2) <= (-8885902386234235415LL))));
                    /* LoopSeq 1 */
                    for (int i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        arr_83 [i_9] [i_20 + 2] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_55 [i_9] [i_9] [i_20] [i_20 - 1] [i_20] [i_20 + 1])) < (((/* implicit */int) arr_48 [i_9] [i_20 + 2] [i_20 + 2]))));
                        arr_84 [i_9] [2LL] [2LL] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) var_7);
                    }
                    arr_85 [i_20] [i_9] [i_20 + 1] [(unsigned char)12] = ((unsigned int) var_9);
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) arr_64 [i_9])));
                    arr_88 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (-(var_7));
                    arr_89 [i_9] [i_9] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) ((short) var_1))) ? (var_1) : (((/* implicit */unsigned long long int) ((var_7) / (var_2)))));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_53 [i_9]))))) ? (arr_91 [i_9]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_20] [i_24])))))));
                    var_32 = ((/* implicit */unsigned short) var_0);
                }
                var_33 = ((/* implicit */long long int) ((17428979377292779763ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_20 - 1] [i_9] [i_20])))));
                arr_94 [i_9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9238138661396434848ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1296455504U)))))) : (982055046509609656LL)));
            }
            arr_95 [i_9] [i_12] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
        }
        arr_96 [i_9] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_3)) : (652819267780208611ULL))))) | (((/* implicit */unsigned long long int) (-(473388698))))));
        arr_97 [i_9] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) var_4)), (((long long int) var_0))))));
    }
    /* vectorizable */
    for (short i_25 = 2; i_25 < 15; i_25 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_26 = 0; i_26 < 17; i_26 += 1) 
        {
            for (signed char i_27 = 0; i_27 < 17; i_27 += 3) 
            {
                {
                    var_34 = ((/* implicit */_Bool) arr_71 [i_25] [i_25] [(unsigned short)7] [i_25]);
                    arr_104 [i_25] [5U] [16LL] [i_27] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_44 [i_25] [i_26])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                }
            } 
        } 
        arr_105 [i_25] [i_25] = ((/* implicit */unsigned char) var_5);
        var_35 -= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -7737933082540424481LL)))))));
    }
}
