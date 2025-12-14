/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138867
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [9] = ((/* implicit */short) var_10);
        arr_3 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) (unsigned char)156)) / (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1))))))))) ? (max((((/* implicit */int) ((unsigned short) var_8))), ((-(((/* implicit */int) (signed char)127)))))) : ((-(((/* implicit */int) (signed char)126))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_11 = ((/* implicit */_Bool) arr_0 [i_0]);
            var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (signed char)127)))))));
            var_13 = ((/* implicit */signed char) (-(var_6)));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-127);
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_14 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned long long int) var_9)) : (1944716425586779067ULL))))));
                        arr_15 [(unsigned char)7] [i_2] = ((/* implicit */signed char) var_6);
                        arr_16 [i_0] [i_2] [i_3] [i_0] = ((((/* implicit */_Bool) (signed char)-126)) ? (-5926156704242114398LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                } 
            } 
            arr_17 [(signed char)8] = ((/* implicit */short) (+(((((/* implicit */int) (unsigned short)16380)) + (((/* implicit */int) var_1))))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (short i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        {
                            arr_25 [i_5] = ((short) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */long long int) ((int) (_Bool)1))) : ((~(-402565668758485203LL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_8 = 1; i_8 < 8; i_8 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                var_16 = ((/* implicit */unsigned int) var_0);
                arr_32 [i_8] [(short)2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_4)))));
                var_17 = ((/* implicit */int) ((_Bool) var_9));
            }
            for (short i_10 = 2; i_10 < 6; i_10 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned char) arr_6 [i_0] [i_8]);
                var_19 = ((/* implicit */unsigned int) ((_Bool) (signed char)127));
                arr_36 [i_8] [i_8] [i_10] = ((/* implicit */short) (_Bool)1);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    arr_41 [i_0] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)127)) : ((~(((/* implicit */int) arr_21 [(unsigned short)3]))))));
                    var_20 = (signed char)-127;
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((signed char) arr_31 [i_10 - 1] [i_10])))));
                    arr_42 [i_8] [(signed char)2] [i_10] [(unsigned char)1] [i_10] = ((/* implicit */long long int) ((unsigned short) arr_19 [i_10 + 1] [i_10 + 1]));
                    var_22 = ((/* implicit */int) (short)32766);
                }
            }
            for (short i_12 = 2; i_12 < 6; i_12 += 4) /* same iter space */
            {
                var_23 = ((unsigned char) (~((~(((/* implicit */int) (short)32759))))));
                arr_46 [i_0] [i_8] [i_12 + 4] = ((/* implicit */long long int) (~(((/* implicit */int) (short)5754))));
            }
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)65498)))) * (((/* implicit */int) ((signed char) 0)))))) ? (((/* implicit */unsigned long long int) (~((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10)))))) : (2482048732365079202ULL)));
            var_25 = ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65498)) : (((/* implicit */int) (unsigned char)73)))))));
            arr_47 [i_8] = ((/* implicit */unsigned char) ((signed char) (((~((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) (-(((/* implicit */int) (short)-32766))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_26 = ((signed char) (unsigned char)73);
                        var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_14 + 1] [i_13] [i_14]))));
                        /* LoopSeq 4 */
                        for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            arr_57 [i_0] [8LL] [i_14] [i_0] [i_16] = (~(((/* implicit */int) (signed char)-41)));
                            arr_58 [(unsigned short)8] [i_13] = ((/* implicit */unsigned short) (short)-32759);
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)182))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            var_29 = ((/* implicit */short) ((long long int) arr_45 [i_14 + 1]));
                            var_30 = ((/* implicit */unsigned short) ((var_6) % (var_6)));
                            arr_61 [1LL] [(short)3] [(short)3] [8LL] [i_17] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_44 [i_17] [2LL] [6LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32759))) : (arr_14 [i_13] [i_15])))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_31 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) arr_26 [i_18])) / (arr_62 [i_18])))));
                            var_32 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_60 [i_14 + 1] [(unsigned char)8] [(short)3] [i_15] [7] [2LL] [(unsigned short)1])) ? (((/* implicit */int) (short)-26337)) : (((/* implicit */int) (short)32759)))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 10; i_19 += 4) 
                        {
                            arr_69 [i_0] = ((/* implicit */int) ((unsigned int) (short)-2843));
                            arr_70 [i_0] [i_13] [i_14] [i_14] [(unsigned short)7] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                            var_33 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_14 + 1]))));
                        }
                        arr_71 [i_15] [i_15] [i_15] [(signed char)7] = ((/* implicit */unsigned char) (-(var_10)));
                    }
                } 
            } 
            arr_72 [i_0] [(unsigned short)9] = ((/* implicit */short) ((long long int) arr_31 [i_0] [0LL]));
            var_34 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_67 [(signed char)9] [i_0] [i_13] [(signed char)9] [8LL] [i_13] [i_13])) - (((/* implicit */int) (_Bool)1))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 3) 
        {
            arr_75 [i_0] [i_20] [i_20] = (+(max((min((((/* implicit */long long int) (_Bool)1)), (6939301475919261650LL))), (((/* implicit */long long int) ((4100401932U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            arr_76 [i_0] [(short)3] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3324333457491980209LL)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)230))))));
        }
    }
    for (long long int i_21 = 0; i_21 < 25; i_21 += 2) 
    {
        arr_80 [(signed char)5] [i_21] = ((/* implicit */_Bool) ((var_6) % (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29704))))))))));
        arr_81 [i_21] [i_21] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_79 [i_21] [i_21])) ? (arr_79 [i_21] [i_21]) : (arr_79 [i_21] [i_21]))) + (((/* implicit */long long int) (-(max((var_9), (((/* implicit */unsigned int) arr_77 [(unsigned char)12])))))))));
    }
    for (signed char i_22 = 0; i_22 < 12; i_22 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (long long int i_24 = 0; i_24 < 12; i_24 += 3) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        arr_94 [i_22] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -761495517670553086LL)))) ? (((/* implicit */long long int) (~(arr_88 [(_Bool)1])))) : (6939301475919261650LL)));
                        arr_95 [i_23] [i_25] = max((((761495517670553074LL) | (var_10))), (((/* implicit */long long int) (-(((/* implicit */int) var_8))))));
                        arr_96 [i_22] [i_23] [i_23] [i_25] [i_25] = ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) - (arr_89 [(signed char)11] [i_23]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_26 = 1; i_26 < 11; i_26 += 2) 
        {
            var_35 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_77 [i_26 + 1])))) != (((/* implicit */int) max((arr_77 [i_26 - 1]), (arr_77 [i_26 + 1]))))));
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_78 [i_22] [i_26 - 1])), (arr_92 [(unsigned short)8] [(unsigned short)8] [i_26 - 1] [(unsigned short)8])))) ? ((+(((/* implicit */int) (unsigned short)3836)))) : (((/* implicit */int) ((unsigned short) (signed char)126)))));
            arr_99 [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(var_3))), (((/* implicit */int) (signed char)0))))) || ((_Bool)1)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_27 = 0; i_27 < 12; i_27 += 3) 
            {
                var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))));
                arr_102 [(unsigned char)1] [i_26] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_83 [i_26 - 1]))));
            }
        }
        /* vectorizable */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            var_38 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)73))));
            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (unsigned char)238))));
        }
        arr_105 [i_22] [(short)5] = ((/* implicit */_Bool) ((max((arr_85 [i_22] [i_22]), (((/* implicit */unsigned int) arr_100 [i_22] [4U] [i_22] [i_22])))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_22] [i_22])) ? (arr_89 [i_22] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))) || (((/* implicit */_Bool) arr_86 [(unsigned char)4] [i_22]))))))));
        arr_106 [i_22] = var_4;
        var_40 &= ((/* implicit */signed char) -761495517670553086LL);
    }
    /* vectorizable */
    for (long long int i_29 = 0; i_29 < 13; i_29 += 4) 
    {
        arr_110 [8LL] = ((/* implicit */unsigned char) var_2);
        var_41 = ((/* implicit */int) max((var_41), (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) arr_108 [i_29])) : (((/* implicit */int) arr_108 [i_29]))))));
        var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((-317141000) - (((/* implicit */int) (_Bool)1)))))));
        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((unsigned short) var_5)))));
        arr_111 [i_29] = ((/* implicit */long long int) (_Bool)1);
    }
    var_44 = ((/* implicit */unsigned long long int) var_8);
}
