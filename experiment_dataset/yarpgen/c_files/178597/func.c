/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178597
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) max((((unsigned int) (-2147483647 - 1))), (((/* implicit */unsigned int) ((int) arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)81)))))) : (min((4094ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_3 [i_0 + 1]) != (arr_3 [i_0 - 2])))) >= (((/* implicit */int) ((short) var_4)))));
            var_11 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (unsigned short)42772)), (2147483647))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_4 [i_0])))))));
            var_12 += ((/* implicit */_Bool) arr_1 [i_1]);
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((long long int) arr_0 [i_0])), (((/* implicit */long long int) max(((short)20494), (((/* implicit */short) var_1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_1 [i_0])) - (84)))))) ? (18446744073709547522ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((long long int) arr_0 [i_0])), (((/* implicit */long long int) max(((short)20494), (((/* implicit */short) var_1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((((/* implicit */int) arr_1 [i_0])) - (84))) + (229)))))) ? (18446744073709547522ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (((/* implicit */int) arr_0 [i_0 + 4])) : (((/* implicit */int) var_9)))), ((~(((/* implicit */int) (short)-5742))))));
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_2)), (8185979894208545240ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9))))))) ? (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (4088ULL)))), (min((arr_0 [10ULL]), (((/* implicit */signed char) var_4))))))) : (((/* implicit */int) min((var_9), ((short)-20471))))));
            var_15 = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2341140269U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1))))), ((-(3901499492U))))), (((/* implicit */unsigned int) (short)-5702))));
        }
        /* LoopSeq 2 */
        for (short i_3 = 3; i_3 < 8; i_3 += 4) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) (-2147483647 - 1))) - (arr_10 [i_0 - 2] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27)))))) ? (((((/* implicit */long long int) ((arr_3 [i_3]) + (((/* implicit */int) var_4))))) + (arr_4 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_3 + 1])))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                var_17 ^= ((/* implicit */long long int) (short)32767);
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 4] [i_3])) ? (((((/* implicit */_Bool) 2455336999U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)0)))))));
                arr_15 [i_0] [(signed char)10] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709547522ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)247))));
                var_19 = ((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned char)62)))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_20 ^= ((/* implicit */int) -7794670536416858695LL);
                var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)0]))))), (((var_7) / (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_9)) ? (arr_4 [4ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            }
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            var_22 = ((/* implicit */int) var_8);
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31025)) ? (((/* implicit */int) arr_12 [i_8] [i_7] [i_6 + 1])) : (arr_18 [i_0] [i_6 + 1])));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [i_0 + 3] [i_0] [(_Bool)1] [i_7] [i_0] [i_7])) + (((/* implicit */int) arr_7 [i_8] [8LL] [i_8])))) - (((int) arr_16 [i_0] [i_6 - 2] [i_7] [i_7])))))));
                            arr_32 [i_0] [i_6] [i_0 - 1] [i_6] [i_6] [i_0] = (unsigned short)41308;
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_10 [i_0 + 2] [i_6 - 1])) : (arr_4 [i_0])));
                        var_25 ^= ((/* implicit */int) (+(arr_4 [i_8])));
                    }
                } 
            } 
            arr_33 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((arr_20 [i_0 + 1]) >> (((arr_27 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0]) - (1507955400)))))) : (((/* implicit */short) ((arr_20 [i_0 + 1]) >> (((((arr_27 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0]) - (1507955400))) + (1331166462))))));
            var_26 = ((/* implicit */int) var_4);
            /* LoopSeq 3 */
            for (short i_10 = 3; i_10 < 9; i_10 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned short) arr_34 [i_0] [(signed char)10] [i_0]);
                var_28 = ((/* implicit */int) ((arr_36 [i_6 - 1] [i_0] [4U]) + (arr_36 [i_6 - 1] [i_0] [i_6])));
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    arr_42 [(unsigned char)2] [i_0] = ((((/* implicit */_Bool) arr_19 [i_6 + 1] [i_6 - 1] [i_6 + 1])) ? (arr_19 [i_6 + 1] [i_6 - 1] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                    arr_43 [i_0] [i_6] [i_6] [i_6] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((long long int) 393467803U)) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0 - 2] [i_0] [i_10] [i_10 - 3] [i_0] [i_0 - 2])))));
                    var_29 = ((/* implicit */short) ((arr_34 [i_10 - 2] [i_6 + 1] [i_0 + 2]) ? (((/* implicit */unsigned long long int) (+(var_3)))) : (var_8)));
                    var_30 = ((/* implicit */unsigned long long int) var_4);
                    var_31 = ((/* implicit */int) min((var_31), (((int) ((unsigned int) (signed char)103)))));
                }
            }
            for (short i_12 = 3; i_12 < 9; i_12 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_13 = 1; i_13 < 8; i_13 += 3) 
                {
                    var_32 = ((/* implicit */int) arr_30 [i_0]);
                    arr_49 [4] [(short)3] [i_12 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(var_4)))) : (((/* implicit */int) ((arr_41 [i_0 + 4] [i_6]) != (((/* implicit */long long int) arr_26 [i_0] [(short)1] [i_12] [i_13])))))));
                    var_33 = ((/* implicit */long long int) ((signed char) arr_7 [i_0] [i_12] [(signed char)5]));
                }
                arr_50 [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_37 [(_Bool)1] [i_0 + 1]));
            }
            for (short i_14 = 3; i_14 < 9; i_14 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 2; i_15 < 8; i_15 += 2) 
                {
                    for (short i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */short) ((int) ((arr_34 [i_16] [i_16] [i_14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))));
                            var_35 ^= ((short) (unsigned char)10);
                            var_36 = ((/* implicit */int) var_6);
                        }
                    } 
                } 
                var_37 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6] [i_6 + 1] [i_14 + 1] [i_14 - 1])) ? (arr_26 [i_6] [i_6 + 1] [i_14 + 2] [i_14 + 1]) : (((/* implicit */int) (short)14040))));
            }
        }
    }
    for (int i_17 = 1; i_17 < 12; i_17 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_18 = 1; i_18 < 12; i_18 += 1) 
        {
            var_38 = ((/* implicit */unsigned long long int) var_3);
            var_39 ^= ((/* implicit */long long int) (short)-3577);
        }
        for (long long int i_19 = 1; i_19 < 13; i_19 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_20 = 2; i_20 < 10; i_20 += 1) 
            {
                arr_71 [i_20] [i_19 + 1] [i_20 + 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((3901499500U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_69 [i_20 + 4] [i_19 - 1] [i_17 - 1])) ? (((/* implicit */int) arr_65 [0ULL] [i_20])) : (((/* implicit */int) (unsigned char)29)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -69797825)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_60 [(unsigned short)6]))))) - (13368831187623830578ULL))) : (((/* implicit */unsigned long long int) var_7))));
                arr_72 [(short)0] |= ((/* implicit */unsigned char) 63);
            }
            for (int i_21 = 1; i_21 < 12; i_21 += 3) 
            {
                var_40 = ((/* implicit */signed char) arr_59 [i_17 + 1]);
                var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_59 [i_17 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_73 [i_17 + 2] [i_17 + 1] [i_19 - 1] [i_21 + 1]) : (((/* implicit */int) arr_59 [i_17 + 1]))))) : (((unsigned int) arr_59 [i_17 + 1])))))));
            }
            for (unsigned int i_22 = 1; i_22 < 12; i_22 += 4) 
            {
                arr_77 [i_17] [i_19] [i_22 + 1] [6ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_73 [10LL] [10LL] [10LL] [i_22 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)241))))) : (((/* implicit */int) ((short) ((_Bool) arr_63 [i_17] [(_Bool)1] [(_Bool)1]))))));
                var_42 = ((/* implicit */unsigned char) (short)31024);
                /* LoopNest 2 */
                for (int i_23 = 4; i_23 < 13; i_23 += 4) 
                {
                    for (unsigned long long int i_24 = 4; i_24 < 10; i_24 += 1) 
                    {
                        {
                            arr_83 [i_22] = ((/* implicit */long long int) max((((unsigned long long int) 3797068242267090947LL)), (((/* implicit */unsigned long long int) (signed char)-49))));
                            arr_84 [i_17] [i_17] [i_22] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */short) 1710594088);
                            arr_85 [i_19] [i_19] [i_24] [i_23] [(signed char)0] [i_22] [i_22] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_76 [i_22])) : (((/* implicit */int) arr_59 [i_19 + 1])))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_73 [i_17 - 1] [i_19 + 1] [i_22 + 1] [i_22 + 1]))))), ((+(arr_70 [i_22])))));
            }
            for (unsigned short i_25 = 1; i_25 < 12; i_25 += 4) 
            {
                arr_88 [i_25] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) -337637680)) ? (((/* implicit */unsigned long long int) 1700793003)) : (2275055371338606027ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3732484424U)) ? (((/* implicit */int) arr_79 [(unsigned char)7] [(unsigned short)5] [i_19] [i_17])) : (((/* implicit */int) var_1))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_17 + 2] [i_17 + 1])))));
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 14; i_26 += 4) 
                {
                    for (short i_27 = 0; i_27 < 14; i_27 += 1) 
                    {
                        {
                            var_44 ^= ((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((((long long int) arr_69 [i_26] [i_25] [5ULL])) - (134LL)))));
                            arr_94 [i_17 + 2] [i_17] [(unsigned short)4] [(unsigned char)4] [2U] [(_Bool)1] [i_26] |= ((/* implicit */unsigned char) arr_79 [i_27] [i_26] [(unsigned char)5] [i_19]);
                        }
                    } 
                } 
                arr_95 [(signed char)12] [i_17] [(signed char)12] [i_25 + 1] |= ((/* implicit */long long int) arr_65 [(signed char)0] [i_19 + 1]);
                arr_96 [i_25] [i_19] [i_19] = ((/* implicit */int) var_1);
            }
            var_45 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_92 [(unsigned char)0] [i_19 + 1] [i_19 + 1] [i_19 - 1])) ? (((/* implicit */int) arr_92 [(_Bool)1] [i_19 - 1] [i_19 - 1] [i_19 - 1])) : (((/* implicit */int) arr_92 [(short)10] [i_19 + 1] [i_19 + 1] [i_19 + 1])))));
        }
        arr_97 [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((657571922) < (((int) var_0))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_76 [12LL]))))))));
        var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) arr_82 [i_17] [i_17] [i_17 - 1]))));
    }
    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) min((var_7), (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) 69797824)) ? (((/* implicit */long long int) -1700793010)) : (-7733656931757126467LL)))))) ? (((((/* implicit */_Bool) var_7)) ? (((unsigned int) 69797824)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (signed char i_28 = 0; i_28 < 20; i_28 += 1) 
    {
        var_48 ^= arr_99 [i_28] [i_28];
        arr_101 [i_28] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) min((arr_99 [i_28] [i_28]), (((/* implicit */unsigned char) (signed char)-37))))) ^ (((/* implicit */int) ((unsigned short) arr_100 [i_28])))))) <= (((unsigned int) arr_99 [i_28] [i_28]))));
        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_98 [2LL])))) % (((/* implicit */int) (unsigned char)24))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_99 [i_28] [(signed char)18])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0)))))));
    }
    for (signed char i_29 = 3; i_29 < 10; i_29 += 1) 
    {
        arr_106 [6U] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_87 [i_29 - 1] [i_29 - 1] [i_29 - 1] [i_29 + 1])))) == (min((2172028554U), (((/* implicit */unsigned int) -69797810)))));
        var_50 = ((/* implicit */unsigned char) ((var_8) > (((/* implicit */unsigned long long int) -2147483621))));
    }
    var_51 = ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) ? (max((1506751892U), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) var_6))));
    var_52 = ((/* implicit */_Bool) var_1);
}
