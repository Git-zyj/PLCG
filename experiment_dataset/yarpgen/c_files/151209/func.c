/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151209
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
    var_11 = var_6;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) / ((-9223372036854775807LL - 1LL))));
        var_12 = ((/* implicit */short) var_4);
        var_13 = ((((min(((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (2916496322U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) + (9223372036854775807LL))) >> (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-57)), ((unsigned char)255)))) - (186))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */short) ((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15343)))));
            /* LoopSeq 3 */
            for (long long int i_2 = 3; i_2 < 9; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        arr_14 [i_2] [i_1] [i_2 - 3] [i_1] [(short)2] = ((/* implicit */long long int) var_1);
                        var_15 = ((/* implicit */unsigned short) 1902748512U);
                    }
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_1 - 1] [i_2 - 1] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 7049303134502276263LL))));
                        var_16 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (unsigned short)48)) : (((/* implicit */int) (unsigned char)186)))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_6] [i_2] [i_2 - 3] [i_2] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned short)25806))));
                        arr_21 [i_0] [i_0] [i_0 + 2] [i_0] [i_2] = ((/* implicit */long long int) arr_2 [i_0 + 1]);
                        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)57))));
                        arr_22 [(signed char)0] [i_1] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32768))))) && (((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)10] [i_0]))));
                    }
                    arr_23 [i_2] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) 3391972499U)) != (arr_8 [i_1 + 1] [i_3])))) ^ (((((/* implicit */_Bool) (unsigned short)15245)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
                }
                arr_24 [i_2] = min((max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)32768))))), (min((((/* implicit */unsigned int) (unsigned char)93)), (18U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((signed char)6), (arr_5 [i_0 - 1] [2LL])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38614)))))))));
                arr_25 [i_1] [i_2] = ((/* implicit */unsigned short) (((-(65408U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)32758)))));
            }
            /* vectorizable */
            for (long long int i_7 = 3; i_7 < 9; i_7 += 4) /* same iter space */
            {
                arr_28 [(short)7] [i_0 - 1] [i_0 - 1] [i_7 - 3] = ((/* implicit */short) var_6);
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) (short)-3736);
                        arr_33 [i_0] [i_1] [i_7] [(unsigned char)8] = ((/* implicit */unsigned short) (unsigned char)255);
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_6))));
                        var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -7072002927310603209LL)) || (((/* implicit */_Bool) (unsigned char)162)))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_10 = 3; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) arr_5 [i_7 + 1] [i_7 + 2]);
                        arr_36 [i_10] [i_8] [i_7 - 3] [i_1 + 1] [i_0 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 2] [9LL])) >> (((((/* implicit */int) (unsigned short)50197)) - (50177))))))));
                        arr_37 [i_8] [i_1 - 1] [i_7] [i_8] [i_10] = ((/* implicit */unsigned short) var_9);
                    }
                    for (long long int i_11 = 3; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) -4532151295514161160LL);
                        arr_42 [i_11] [i_1 - 2] [i_7] [i_1 - 2] [i_11] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3475328846290993086LL)) ? (-858852233272823893LL) : (9223372036854775795LL)));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] [i_12] [7U] [i_0] [i_0] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)1739)) : (((/* implicit */int) (unsigned char)139))))) | (arr_45 [i_0] [i_0] [i_7 - 2] [i_7] [i_7] [i_12])));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13U)) || (((/* implicit */_Bool) (unsigned short)65535))));
                        var_24 = ((/* implicit */_Bool) (~(4133661171428513830LL)));
                    }
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        arr_50 [i_13] [i_8] [i_7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_49 [i_0 + 2] [i_1 - 1] [i_7 + 1] [i_0 + 2] [i_13]) : (arr_49 [i_0 - 1] [(unsigned short)4] [i_7 + 2] [i_8] [i_7 + 2])));
                        var_25 = ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_0 + 2] [8LL] [i_7] [i_7 - 2] [i_13] [i_8]))));
                        var_26 = ((/* implicit */unsigned short) 3643201424U);
                    }
                    for (long long int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        var_27 = -2055117881744606672LL;
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))) : (((/* implicit */int) arr_1 [i_1 + 1]))));
                        var_29 = ((/* implicit */unsigned char) ((1048575LL) % (arr_45 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_14])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 1; i_15 < 7; i_15 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)69))));
                        var_31 = ((/* implicit */unsigned char) var_10);
                        var_32 = ((/* implicit */long long int) var_8);
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))));
                    }
                }
                var_34 = ((/* implicit */signed char) var_4);
                /* LoopSeq 2 */
                for (long long int i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) var_7);
                    arr_58 [i_16] [i_7 + 2] [i_0] [i_0] = ((/* implicit */signed char) (~(arr_56 [i_7 - 2] [i_7] [i_7 - 2] [i_7 + 2])));
                }
                for (long long int i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned int) (unsigned char)246);
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (unsigned short)5496))) <= (((/* implicit */int) var_5))));
                    /* LoopSeq 3 */
                    for (unsigned short i_18 = 4; i_18 < 9; i_18 += 3) 
                    {
                        arr_63 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 45950931U)) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_18 + 1])) : (((/* implicit */int) var_8))));
                        arr_64 [i_0] [i_18] [i_0] [(unsigned short)1] [i_17] [i_18 - 4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)222))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_41 [i_18 - 4] [i_0 - 1] [i_0 - 1])) - (((/* implicit */int) var_1))));
                        arr_65 [i_1] [i_7] [i_18] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)151)) >= (((/* implicit */int) (short)-31963))));
                    }
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)47)) <= (((/* implicit */int) (_Bool)1))));
                        var_40 = ((/* implicit */signed char) ((unsigned int) (_Bool)0));
                        arr_70 [i_0] [i_0] [i_7 - 2] [(unsigned short)0] [i_7 - 2] [(_Bool)0] [i_17] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1]))) ^ (arr_34 [i_0 - 1] [i_1] [i_1 - 1] [i_7] [i_7 - 1])));
                    }
                    for (unsigned char i_20 = 3; i_20 < 9; i_20 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) == (arr_12 [i_0] [(_Bool)1] [(unsigned char)8] [i_1] [i_0])));
                        var_42 = ((/* implicit */unsigned int) var_7);
                        arr_74 [i_17] [i_17] = ((/* implicit */unsigned char) ((long long int) var_6));
                        var_43 = ((/* implicit */unsigned char) var_10);
                        var_44 = ((/* implicit */long long int) arr_39 [i_0] [i_0] [i_1] [i_7 - 2] [i_17] [i_20]);
                    }
                }
            }
            for (long long int i_21 = 3; i_21 < 9; i_21 += 4) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)30348)) <= (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))) : (arr_12 [10LL] [i_21] [i_21 - 2] [i_21 - 2] [i_21]))))));
                var_46 = ((((/* implicit */_Bool) 1781421257U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) : (1048582LL));
            }
        }
        /* vectorizable */
        for (unsigned short i_22 = 2; i_22 < 10; i_22 += 1) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_22 - 1] [i_22] [i_22] [(unsigned char)10]))));
            arr_82 [i_0] [i_22] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (arr_56 [i_22 - 1] [4LL] [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))))) ? (((/* implicit */int) arr_69 [i_0 + 1] [i_0 - 1] [i_0 - 1] [7U] [i_0 + 1] [i_22 + 1] [i_0 + 1])) : (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned short)63))))));
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 11; i_23 += 1) 
            {
                arr_86 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_0 - 1] [i_0] [i_0 + 1] [i_22] [i_23]))) : (arr_79 [i_22] [(unsigned char)3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)61396)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)144))));
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned char)56))));
            }
            arr_87 [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)208)) * (((/* implicit */int) (unsigned short)27845))));
        }
        var_50 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0 - 1])), (max((var_0), (((/* implicit */short) arr_72 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [(unsigned char)9] [i_0] [i_0]))))))) / (((/* implicit */int) ((((/* implicit */int) arr_18 [(short)2] [i_0 + 1] [i_0 + 2] [i_0] [(unsigned short)8] [(unsigned short)6])) != (((/* implicit */int) arr_80 [(unsigned short)8] [i_0 + 2] [(short)4])))))));
    }
    /* vectorizable */
    for (unsigned int i_24 = 0; i_24 < 14; i_24 += 2) 
    {
        var_51 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_88 [i_24]))));
        var_52 = ((long long int) arr_89 [i_24]);
    }
    /* vectorizable */
    for (signed char i_25 = 2; i_25 < 8; i_25 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_26 = 0; i_26 < 10; i_26 += 1) 
        {
            var_53 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_7))));
            arr_95 [i_26] [i_26] = ((/* implicit */unsigned short) var_6);
            var_54 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)147)) >= (((/* implicit */int) (signed char)93))));
        }
        var_55 = ((/* implicit */long long int) (unsigned char)208);
        arr_96 [i_25] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_61 [i_25 + 2] [i_25] [i_25 + 2])) - (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10)))))));
        var_56 = (!(((_Bool) arr_94 [i_25] [i_25] [i_25])));
        /* LoopSeq 1 */
        for (long long int i_27 = 0; i_27 < 10; i_27 += 2) 
        {
            var_57 = ((/* implicit */short) (unsigned char)133);
            /* LoopSeq 3 */
            for (short i_28 = 3; i_28 < 8; i_28 += 4) 
            {
                var_58 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) <= (2513546020U))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (signed char)-91))));
                /* LoopSeq 2 */
                for (unsigned int i_29 = 0; i_29 < 10; i_29 += 4) 
                {
                    arr_104 [i_25] [i_27] [8U] [i_28] [i_29] = ((/* implicit */long long int) var_0);
                    arr_105 [i_25] [i_25] [i_25] [i_25] [i_25 + 1] = ((/* implicit */unsigned int) var_7);
                    var_59 = ((/* implicit */long long int) ((arr_78 [i_25] [i_25]) ? (((((/* implicit */_Bool) arr_26 [(signed char)0] [i_25] [i_25])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)4703)))) : (((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)131))))));
                    var_60 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) % ((~(((/* implicit */int) var_0))))));
                }
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_31 = 0; i_31 < 10; i_31 += 2) 
                    {
                        var_61 = (unsigned char)21;
                        var_62 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned short)63726)))) / (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) var_3))))));
                        var_63 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)199))));
                    }
                    arr_112 [i_25] [i_27] [i_27] [i_28] [i_28 - 3] [i_30] = arr_31 [i_28 - 3] [i_28] [i_28] [i_28 - 3] [i_28 - 1] [i_28 - 1];
                }
                var_64 = ((/* implicit */short) (unsigned char)116);
                arr_113 [i_28] [i_27] [i_27] [i_25] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_81 [i_27])) : (((/* implicit */int) var_3)))));
            }
            for (unsigned short i_32 = 0; i_32 < 10; i_32 += 3) 
            {
                var_65 = ((/* implicit */unsigned int) var_7);
                var_66 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-91))));
                var_67 = ((/* implicit */unsigned char) arr_11 [i_32]);
                var_68 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned short)27101))) & (((/* implicit */int) ((-3883058138947548890LL) == (((/* implicit */long long int) ((/* implicit */int) arr_85 [i_25 + 2] [i_25] [i_25] [i_25 + 2]))))))));
            }
            for (unsigned short i_33 = 3; i_33 < 6; i_33 += 2) 
            {
                var_69 = ((/* implicit */unsigned int) ((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                var_70 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)138)) % (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_7))))));
                /* LoopSeq 2 */
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    arr_123 [i_25 + 2] [i_33] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)250)) - (((/* implicit */int) (unsigned char)179))));
                    var_71 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-8911233780158055112LL)));
                    var_72 = ((/* implicit */short) (((_Bool)0) ? (3361171346U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26862)))));
                }
                for (unsigned char i_35 = 0; i_35 < 10; i_35 += 4) 
                {
                    var_73 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_25] [i_25 + 2] [i_33 + 3] [i_35] [i_35])) && (((/* implicit */_Bool) -8810156095263684054LL))));
                    arr_126 [i_33] [7LL] [i_33 + 3] [i_35] [i_25] = ((/* implicit */unsigned short) (~(arr_119 [i_25] [9U] [i_25 - 2] [i_33] [i_25])));
                    var_74 = ((/* implicit */unsigned char) arr_119 [(signed char)8] [i_27] [(unsigned char)9] [i_33] [i_35]);
                }
            }
        }
    }
}
