/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158767
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */int) var_3)) & (-1561494304))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                for (short i_5 = 2; i_5 < 12; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_21 [i_4] [1] [i_4] [4U] [1] [4U] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) (unsigned short)52250)) ? (1959026609334572131ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_3] [(signed char)6] [i_6]))))));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [(_Bool)1] [i_0] [i_0 - 1] [i_5 - 1] [i_6])) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-114))))));
                            arr_22 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_3 [i_0] [i_3]) / (var_10)));
                            var_14 = ((/* implicit */unsigned int) var_4);
                        }
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            arr_27 [i_4] [i_4] = ((/* implicit */unsigned char) (-2147483647 - 1));
                            arr_28 [i_5] [i_4] [i_4] [8ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_3] [i_0] [i_5] [i_7])) ? (16487717464374979484ULL) : (min((((/* implicit */unsigned long long int) ((short) (short)96))), (var_6)))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_13 [i_3] [7ULL] [i_3])) : (((/* implicit */int) var_5))))) ? (min((((((/* implicit */_Bool) 1665023504)) ? (arr_14 [i_7] [i_5] [i_4 - 1] [i_3] [(signed char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52256))))), (arr_14 [i_0 - 1] [i_0 - 1] [(signed char)12] [i_5 + 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16487717464374979497ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)97)))) + (((/* implicit */int) ((_Bool) var_10))))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [(signed char)2] [i_4 - 1] [i_5] [(short)0])) && (((/* implicit */_Bool) max((-1978263022), (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_23 [7] [7] [7] [i_4] [i_3] [i_0] [i_0 - 1]) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (unsigned short)46654)) ? (2168274317158686310ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            arr_31 [i_5] [i_5] [i_4] [1LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 1978263005)) : (7624591173787957009LL)))) ? (((/* implicit */int) (unsigned short)40998)) : (arr_30 [i_8] [i_3] [i_4] [i_4] [i_8] [i_0] [i_8])));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                        {
                            arr_34 [i_0] [i_0 - 1] [2LL] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_9)) : (var_6)))) ? (1972217067056195830LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_0)))) ? (((((/* implicit */_Bool) 7129776675604514172ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_3)))))));
                            var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) + (1979129957277091508LL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))));
                        }
                        var_20 += ((/* implicit */_Bool) (+(((1321406682) >> (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 6715244218334793406LL)))))))));
                    }
                } 
            } 
        } 
        arr_35 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 619954866U)) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1])))))) ? (-6715244218334793400LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((signed char) var_0))), (((short) var_3))))))));
        arr_36 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (6715244218334793417LL)))));
    }
    for (signed char i_10 = 2; i_10 < 13; i_10 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_10])) || (((_Bool) (short)-32742))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 13; i_11 += 1) 
        {
            for (long long int i_12 = 2; i_12 < 13; i_12 += 1) 
            {
                {
                    arr_44 [i_10] = ((/* implicit */short) max((-1198567009), (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_43 [i_10] [i_10] [i_10] [i_10 - 2])) : (3758096384U))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))))))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_11 - 1] [i_10 - 2]))) : (((((/* implicit */_Bool) (short)-26406)) ? (-6436563850794943993LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14260)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_4)), (var_7)))) ? (((/* implicit */int) var_5)) : (max((((/* implicit */int) arr_41 [i_10] [i_10])), (var_0)))))) : (((min((var_6), (((/* implicit */unsigned long long int) 0)))) >> (((3758096384U) - (3758096358U))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            arr_49 [(short)8] [i_13] = (unsigned char)28;
                            var_24 = ((/* implicit */signed char) (_Bool)0);
                        }
                        for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            arr_52 [i_10] [i_13] [i_10 - 1] [i_10] = ((/* implicit */unsigned char) (signed char)-2);
                            arr_53 [4U] [i_10 + 1] [i_11 - 2] [i_12] [4U] [i_13] [i_15] = ((/* implicit */int) (signed char)64);
                            var_25 += ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (6436563850794943992LL)));
                            arr_54 [i_10] [i_11] [i_13] [(signed char)2] [i_15] [i_11] = ((((/* implicit */int) (unsigned char)227)) % (((/* implicit */int) (_Bool)1)));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) arr_46 [i_16]);
                            var_27 &= ((((((/* implicit */_Bool) 3142507238U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_47 [i_10] [i_10] [5LL] [i_13] [i_10] [i_13])))) & (((((/* implicit */_Bool) arr_56 [i_16] [3LL] [i_13] [i_12 + 1] [i_11] [i_10] [i_10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)220)))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_2))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_42 [i_16] [i_11 + 1]))));
                        }
                        for (short i_17 = 0; i_17 < 14; i_17 += 3) /* same iter space */
                        {
                            arr_60 [i_11 - 1] [i_13] [i_10] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((((/* implicit */_Bool) var_2)) ? (925308838) : (((/* implicit */int) (short)12))))));
                            arr_61 [i_13] [3ULL] [i_12 - 2] [i_13] = ((/* implicit */_Bool) (signed char)126);
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) : (var_10)));
                            arr_62 [i_10 - 2] [i_10 - 2] [i_10] [i_10] [i_13] = ((/* implicit */unsigned short) (-(var_0)));
                        }
                        for (short i_18 = 0; i_18 < 14; i_18 += 3) /* same iter space */
                        {
                            var_31 += ((/* implicit */_Bool) ((arr_41 [i_12 + 1] [i_12 + 1]) ? (((/* implicit */unsigned int) 925308838)) : (((((/* implicit */_Bool) arr_66 [i_10] [i_11] [i_12] [i_13] [i_13] [i_18])) ? (3649051604U) : (arr_39 [i_10])))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_55 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))));
                        }
                        var_33 += ((/* implicit */unsigned int) ((6436563850794943992LL) >> (((((/* implicit */int) (short)6918)) - (6902)))));
                        var_34 += ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (1633727322) : (((/* implicit */int) var_3))));
                    }
                    arr_67 [i_11] [i_11] [i_10] = ((long long int) min((1997361889), (max((((/* implicit */int) (unsigned char)210)), (872711264)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            for (short i_20 = 4; i_20 < 12; i_20 += 4) 
            {
                for (signed char i_21 = 2; i_21 < 10; i_21 += 1) 
                {
                    {
                        arr_78 [i_10] [i_20] [i_20] [i_21] [i_20] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (unsigned char i_22 = 0; i_22 < 14; i_22 += 3) /* same iter space */
                        {
                            var_35 &= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_10 - 2] [i_20 - 3] [i_20] [i_21 + 3])) ? (var_0) : (((/* implicit */int) arr_51 [i_19] [i_19] [(unsigned char)9] [i_19] [i_20] [i_21 - 2] [11ULL]))))), (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_7))))) ? (max((arr_63 [i_10] [i_10]), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))));
                            var_36 = ((/* implicit */int) arr_63 [i_10 - 1] [12ULL]);
                            var_37 += ((/* implicit */signed char) max((max((((((var_10) + (9223372036854775807LL))) >> (((arr_75 [i_10] [i_10] [i_21] [i_22]) - (684248766))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-6436563850794943969LL))))), (((/* implicit */long long int) min((var_0), (((/* implicit */int) (signed char)-116)))))));
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (max((min((var_10), (((/* implicit */long long int) arr_57 [i_10] [(signed char)8])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_19] [i_19 - 1])) ? (((/* implicit */int) var_1)) : (arr_46 [i_10 - 1])))))) : (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (short)-6532)))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_45 [i_10] [i_19] [i_20] [i_21] [i_21] [(unsigned short)4])))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_23 = 0; i_23 < 14; i_23 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) -3045969595538191820LL))));
                            arr_83 [i_10] [4U] [i_10] [i_21] [9U] = ((/* implicit */short) arr_50 [i_10] [i_19 - 1] [i_10 + 1] [i_19 - 1]);
                        }
                    }
                } 
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) var_9))));
}
