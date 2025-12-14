/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163342
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
    var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)36)) << (((/* implicit */int) (unsigned char)5))))));
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) - (13345322412844941693ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
        var_21 -= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 + 1]))), (arr_1 [i_0 + 1]))), (((arr_1 [i_0 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
        var_22 |= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) 5591732173023261033ULL))))), ((~(((/* implicit */int) (signed char)-123))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) ((((arr_2 [i_1] [i_1]) < (((/* implicit */unsigned long long int) arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))) ? (arr_2 [i_1] [i_1]) : (arr_1 [i_1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) arr_8 [i_1] [i_1] [i_1] [i_1]);
                    var_25 -= 13845351812944010789ULL;
                }
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            var_26 = ((/* implicit */short) arr_0 [i_4]);
            var_27 = ((/* implicit */signed char) var_10);
        }
        /* LoopSeq 4 */
        for (int i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 4; i_7 < 10; i_7 += 3) 
            {
                arr_21 [i_4] [(_Bool)1] [i_7] [i_6 + 3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))) <= (arr_2 [i_7] [i_6]))))) == ((~(arr_16 [i_4 + 1] [i_7 - 1])))))) + ((~(arr_19 [i_7])))));
                var_28 = ((/* implicit */_Bool) max((var_28), (((((/* implicit */_Bool) arr_19 [(short)2])) && (((/* implicit */_Bool) max((15U), (max((var_9), (((/* implicit */unsigned int) arr_11 [i_4 + 1])))))))))));
                arr_22 [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned char)191), (((/* implicit */unsigned char) arr_15 [i_4] [i_4] [i_4]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251)))))));
                arr_23 [3ULL] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((unsigned char) (unsigned char)251))), (min(((unsigned short)12425), (((/* implicit */unsigned short) (short)-919))))))) ? (min((207986581U), (((/* implicit */unsigned int) arr_19 [i_7])))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) * (((/* implicit */int) var_0))))) ? (3225124697U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_7 - 4] [i_7]))))))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_4 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)126))))) >= (4086980739U)));
                var_30 = ((((/* implicit */_Bool) arr_12 [i_4] [i_6 + 1])) ? (4086980714U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (signed char)-90))))));
            }
            for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 1; i_10 < 11; i_10 += 4) 
                {
                    var_31 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_9 [i_4] [(short)0] [i_9] [i_10]), (((/* implicit */unsigned short) var_16))))), (379827748U)))), (((((/* implicit */_Bool) min((3976060687U), (((/* implicit */unsigned int) var_17))))) ? (max((((/* implicit */unsigned long long int) arr_18 [(unsigned short)7] [i_6] [i_9] [i_10])), (arr_1 [i_10 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55)))))));
                    arr_35 [i_9] [i_9] = ((/* implicit */unsigned char) (-((-(var_14)))));
                }
                var_32 ^= ((/* implicit */signed char) ((((((/* implicit */int) arr_13 [i_4] [(unsigned short)2])) + (2147483647))) << (((var_2) - (1733868296U)))));
            }
            var_33 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [(_Bool)1])) ? (var_7) : (((/* implicit */unsigned int) arr_32 [i_4] [i_4 + 1] [i_4] [i_4] [i_4])))))), (((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_6] [i_6])) ? ((~(((/* implicit */int) (unsigned char)102)))) : ((~(var_4)))))));
        }
        for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 3) 
        {
            var_34 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_20 [i_4 - 1])) ? (arr_2 [i_4 + 1] [i_11 - 1]) : (((/* implicit */unsigned long long int) arr_20 [i_4 + 1])))), (min((arr_2 [i_4 + 1] [i_11 - 1]), (((/* implicit */unsigned long long int) arr_20 [i_4 - 1]))))));
            var_35 &= max(((unsigned short)34569), (((/* implicit */unsigned short) max(((signed char)-44), (arr_36 [i_11 - 1] [i_4 - 1] [i_11 + 1])))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_13 = 1; i_13 < 11; i_13 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_0))));
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 1])) ? (var_14) : (((/* implicit */int) arr_25 [i_4 - 1]))));
            }
            for (unsigned short i_14 = 1; i_14 < 11; i_14 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) 763316062U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)63)))), (((((/* implicit */_Bool) arr_19 [i_14])) ? (2147483647) : (((/* implicit */int) var_6)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 1544848309U))))) ^ (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (unsigned short)65535))))))));
                var_39 = ((/* implicit */signed char) ((((/* implicit */int) ((max((1188421341U), (((/* implicit */unsigned int) 1046955256)))) == (((/* implicit */unsigned int) 826646446))))) & (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_14] [i_14] [i_12] [i_14] [i_4]))))), (arr_26 [i_4 - 1] [i_4 - 1] [i_14 - 1])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    var_40 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_12])) <= (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 1; i_16 < 11; i_16 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned int) min((min((-6), (((/* implicit */int) max((arr_46 [i_14] [i_16] [i_14] [i_14] [i_12] [i_4]), (arr_38 [i_4] [i_4] [i_4])))))), ((~(((((/* implicit */_Bool) arr_6 [i_4] [i_12])) ? (((/* implicit */int) arr_25 [i_4])) : (((/* implicit */int) (signed char)0))))))));
                        arr_53 [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) -1046955232)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) 1080102004))));
                        var_42 ^= ((/* implicit */unsigned int) arr_38 [i_14] [i_15] [i_16]);
                        arr_54 [i_12] [i_12] [10U] [i_12] [i_12] [i_12] [i_14] = ((/* implicit */unsigned int) arr_8 [i_4 + 1] [i_12] [i_14] [i_15]);
                        var_43 = ((/* implicit */unsigned short) ((unsigned long long int) arr_33 [i_14] [i_12] [(unsigned char)3] [i_12] [i_14]));
                    }
                }
                for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_18 = 2; i_18 < 10; i_18 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_42 [i_18 - 1] [i_4] [i_4]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_57 [i_4 - 1] [i_12] [i_12] [i_12] [i_17] [i_17] [i_18]))))))))) >= (13835058055282163712ULL))))));
                        var_45 = ((/* implicit */signed char) ((min((max((((/* implicit */unsigned int) 440772053)), (arr_10 [i_4]))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)57222)), ((-2147483647 - 1))))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_4 + 1] [i_4 + 1] [i_14 - 1]))))))));
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_18] [i_4] [i_4])) ^ (((((/* implicit */int) (unsigned short)57205)) ^ (((/* implicit */int) min((((/* implicit */signed char) var_6)), (var_8))))))));
                        var_47 = ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_14] [i_14]))) ? (arr_1 [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_4] [i_12] [i_14] [i_17]))));
                        var_48 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((_Bool) arr_9 [i_4] [i_14] [i_14] [i_18 + 2]))), (2525885242678777186ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) var_4)) <= (207986557U)))))))));
                    }
                    for (unsigned int i_19 = 2; i_19 < 8; i_19 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned int) max((arr_11 [i_4]), (min((((/* implicit */signed char) ((0LL) <= (((/* implicit */long long int) arr_32 [(signed char)10] [6ULL] [i_14] [6ULL] [6ULL]))))), (max((var_3), (((/* implicit */signed char) var_17))))))));
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) arr_32 [i_19 + 2] [i_19] [i_4 - 1] [i_4] [i_4]))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_4 - 1] [i_12] [i_12] [i_4])) ? (((/* implicit */int) arr_13 [i_4 + 1] [i_12])) : (((/* implicit */int) arr_60 [i_12] [i_12]))))), (max((((/* implicit */unsigned int) (unsigned short)34042)), (arr_10 [i_17]))))) : (((/* implicit */unsigned int) 0)))))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        var_51 += max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4 + 1] [i_14] [i_14])) ? (((/* implicit */int) arr_61 [i_4] [3] [i_14] [3] [i_20] [i_14])) : (((/* implicit */int) arr_40 [i_12] [i_12] [i_20]))))), (16309455630238711719ULL))), (min((((/* implicit */unsigned long long int) arr_38 [(signed char)4] [i_4 + 1] [i_14 + 1])), (arr_6 [i_4 - 1] [i_4 - 1]))));
                        var_52 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_43 [i_12])) ? (arr_43 [i_20]) : (arr_43 [i_12])))));
                    }
                    /* vectorizable */
                    for (short i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        arr_68 [i_4 + 1] [i_12] [i_14] [i_14] [i_21] [(unsigned short)10] |= ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_4 - 1]))));
                        arr_69 [i_14] = (-(9272041733635398599ULL));
                        var_53 = ((/* implicit */unsigned short) arr_14 [i_4 - 1]);
                    }
                    arr_70 [i_4] [i_4] [i_12] [i_14] [i_17] [i_17] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_17])))))))), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (12029538129802337138ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_4 + 1] [i_14])))))));
                }
                /* LoopNest 2 */
                for (signed char i_22 = 1; i_22 < 11; i_22 += 2) 
                {
                    for (unsigned char i_23 = 0; i_23 < 12; i_23 += 4) 
                    {
                        {
                            var_54 += ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
                            var_55 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_52 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1] [i_14]), (arr_52 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_14])))) & (((/* implicit */int) max((((/* implicit */signed char) arr_52 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_14])), ((signed char)-105))))));
                            var_56 *= ((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) min((arr_74 [i_23] [(short)8] [i_14] [i_14 + 1] [i_22 + 1]), (arr_74 [i_23] [i_23] [i_14] [i_14 + 1] [i_22 + 1]))))));
                            var_57 |= ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) (unsigned short)65514)), (arr_16 [i_22] [i_23])))));
                        }
                    } 
                } 
            }
            var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) ((min((-1080102010), (((/* implicit */int) arr_64 [i_4 - 1] [7U] [i_4] [i_4] [i_4 - 1])))) != ((-(-492400033))))))));
            var_59 = ((/* implicit */signed char) var_6);
        }
        for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 4) /* same iter space */
        {
            var_60 = ((/* implicit */unsigned long long int) max((var_60), (((((/* implicit */unsigned long long int) 4294967284U)) + (((((/* implicit */_Bool) min((((/* implicit */long long int) 1413878120)), (arr_7 [i_4 + 1] [8ULL] [i_24])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_4]))) ^ (0ULL))) : (((/* implicit */unsigned long long int) arr_76 [i_4] [4ULL] [i_4 + 1] [i_24] [i_24] [i_24] [i_24]))))))));
            var_61 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) ((unsigned int) var_10))))));
        }
        arr_81 [i_4] [i_4] = ((/* implicit */long long int) (unsigned short)34582);
    }
}
