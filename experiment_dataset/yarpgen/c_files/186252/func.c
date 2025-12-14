/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186252
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
    var_15 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((var_11), (((/* implicit */unsigned short) var_13)))), (var_7))))) % (((((/* implicit */_Bool) ((1441699465U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (var_5))) : (((/* implicit */unsigned long long int) var_14))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_0)), (arr_1 [i_0])))))) ? (((((/* implicit */int) ((unsigned char) (unsigned short)17262))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-24)), ((unsigned short)3445))))));
        var_17 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))))))), (((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) var_11))))) % (11875194218931517402ULL)))));
        var_18 = ((/* implicit */long long int) max(((signed char)-1), (((/* implicit */signed char) ((_Bool) (short)8741)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_5 [i_1] [i_2] [i_2]))) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_1])) : (((((/* implicit */int) (signed char)0)) % (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_5 [i_1] [i_2] [(unsigned char)22])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_1])))) & (((((/* implicit */int) (short)-8736)) ^ (((/* implicit */int) var_0)))))), (max((((/* implicit */int) (unsigned char)90)), (((((/* implicit */_Bool) arr_6 [(signed char)2])) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) arr_6 [(short)0])))))))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) var_3)), (arr_6 [i_2])))) != (((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */unsigned char) (_Bool)1))))))))) ^ (((((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))))) ? (((unsigned int) arr_6 [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        }
        var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [16ULL])) % (((/* implicit */int) arr_4 [i_1]))))) || ((_Bool)1)))) : (((/* implicit */int) var_3))));
        var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_4 [i_1]))))))), ((((-(4ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) (short)8769);
        arr_9 [(unsigned short)19] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_3] [(unsigned short)22] [(_Bool)1]))));
        arr_10 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((((((/* implicit */_Bool) arr_3 [21LL] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0)))) | (((((/* implicit */int) (unsigned short)46009)) ^ (((/* implicit */int) arr_7 [i_3]))))))));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_4 [i_3]))))))));
        arr_11 [i_3] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) arr_8 [i_3] [i_3])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1])))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) min((var_26), (max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) / (((/* implicit */int) arr_7 [i_4]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)67)))) : (((620035337) >> (((/* implicit */int) (_Bool)1))))))), ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) : ((-9223372036854775807LL - 1LL)))) + (max((((/* implicit */long long int) arr_4 [i_4])), (-5404714813249689370LL)))))))));
        var_27 |= min(((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4]))) : (arr_12 [i_4]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_4]) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [18LL]))))))))), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [16ULL])), ((unsigned short)46009)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        var_28 |= ((/* implicit */unsigned char) (_Bool)1);
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 3; i_7 < 12; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            arr_26 [(signed char)0] [i_7] [i_8] [i_9] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_23 [(unsigned char)8] [(unsigned char)8] [i_7 + 2] [i_9]))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_5 + 3])) % (((/* implicit */int) arr_7 [i_5 + 1]))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */signed char) arr_5 [i_5 - 1] [i_5 + 1] [i_5 + 3]);
            var_31 *= ((/* implicit */unsigned int) arr_23 [8LL] [i_5] [i_5] [i_6]);
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-8741)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-1)))) < (((/* implicit */int) arr_3 [i_5 + 2] [i_6])))))));
            var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (arr_1 [i_5 - 1])));
        }
        for (short i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
        {
            arr_30 [i_5] [i_10] = ((/* implicit */unsigned long long int) var_9);
            /* LoopSeq 3 */
            for (unsigned int i_11 = 1; i_11 < 12; i_11 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) max((var_34), ((((+(var_9))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 + 3])))))));
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -359031169)) ? (12277359834057323462ULL) : (2047ULL)))))))));
            }
            for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                arr_36 [i_5] [i_10] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */int) arr_32 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) (unsigned short)0)))))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_5]))) - (arr_29 [i_5] [i_5])))) ? (((((/* implicit */_Bool) var_9)) ? (3722495761263840855ULL) : (((/* implicit */unsigned long long int) arr_12 [i_10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
            }
            for (unsigned int i_13 = 3; i_13 < 12; i_13 += 3) 
            {
                arr_40 [8ULL] [i_5] [9U] = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_5 + 2]))));
                arr_41 [0ULL] [i_13] [i_5 + 1] [0ULL] |= ((/* implicit */long long int) arr_20 [i_5] [i_5] [i_10] [12]);
            }
            var_37 |= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_18 [i_5] [(short)0]))) <= (((/* implicit */int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_10]))))))));
        }
        var_38 = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_16 [i_5] [i_5]))) * (((/* implicit */int) ((((/* implicit */long long int) 1282724185)) > (arr_14 [i_5]))))));
        var_39 *= ((/* implicit */short) (signed char)-38);
        var_40 -= ((/* implicit */long long int) ((arr_29 [6ULL] [i_5 + 1]) == (arr_29 [0U] [i_5 - 1])));
    }
    for (long long int i_14 = 2; i_14 < 22; i_14 += 3) 
    {
        arr_44 [(unsigned short)19] = ((/* implicit */unsigned int) (+(((((((/* implicit */int) (signed char)-49)) - (((/* implicit */int) (unsigned char)150)))) + ((+(((/* implicit */int) (unsigned short)65535))))))));
        arr_45 [i_14 + 2] |= min((min((((/* implicit */unsigned int) (unsigned char)36)), (arr_12 [i_14 - 1]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_14] [i_14])) && (((/* implicit */_Bool) arr_6 [(unsigned short)16])))) && (((((/* implicit */_Bool) arr_12 [22U])) || (((/* implicit */_Bool) -904343958))))))));
        var_41 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1210)) ? (-1) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709549567ULL)) && ((_Bool)1)))) : (((/* implicit */int) arr_6 [20ULL]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_15 = 3; i_15 < 21; i_15 += 1) 
        {
            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5759))) : (1ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65527))) : (516823223U))))));
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                for (unsigned int i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    {
                        arr_56 [i_15] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */int) arr_4 [i_15 + 1])) : (((/* implicit */int) (short)-23322))))));
                        /* LoopSeq 2 */
                        for (long long int i_18 = 0; i_18 < 24; i_18 += 1) 
                        {
                            var_43 += ((/* implicit */_Bool) ((((_Bool) arr_3 [i_15] [i_16])) ? ((-(((/* implicit */int) arr_55 [i_14] [i_14] [1ULL] [i_14] [i_14])))) : (((/* implicit */int) arr_43 [i_14 - 1] [i_14 + 1]))));
                            var_44 = ((/* implicit */signed char) ((unsigned long long int) ((516823223U) + (0U))));
                        }
                        for (signed char i_19 = 1; i_19 < 23; i_19 += 3) 
                        {
                            arr_61 [i_14 + 2] [7ULL] [i_15] [i_17] [i_19 + 1] = ((/* implicit */signed char) ((long long int) ((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_19 + 1] [i_15] [i_15] [4ULL]))))));
                            arr_62 [i_14] [i_14] [i_14] [i_15] [(unsigned char)9] [i_19] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_14] [i_15] [i_15] [i_17] [i_19]))) - (((((/* implicit */_Bool) arr_48 [i_19 + 1] [i_16] [i_15 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (770430440U)))));
                        }
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (2662822558142584706LL) : (((/* implicit */long long int) ((((((/* implicit */int) arr_13 [(unsigned char)11])) + (2147483647))) << (((((/* implicit */int) arr_42 [(short)19])) - (9231))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_20 = 1; i_20 < 22; i_20 += 1) 
        {
            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) min((((arr_12 [i_14 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [(unsigned char)20] [i_14 + 2] [i_14] [i_20 - 1]))))), (((((33554432U) << (((((/* implicit */int) (short)8729)) - (8699))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))))))))));
            var_47 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((signed char) 1034110630980201200LL))) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) var_13)))), ((-(((/* implicit */int) arr_5 [i_14] [i_14 + 1] [i_20 + 2]))))));
            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)-17413), (((/* implicit */short) (signed char)-49))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29159)) ? (-1034110630980201182LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) max((1134907106097364992LL), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8741))))) : (((/* implicit */int) arr_51 [i_14 + 1] [i_14 - 1] [6U]))))));
            /* LoopSeq 4 */
            for (unsigned int i_21 = 3; i_21 < 23; i_21 += 3) 
            {
                var_49 = ((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned short)1023)))), (((/* implicit */int) (((!(((/* implicit */_Bool) -202291209)))) && (((((/* implicit */int) var_13)) <= (((/* implicit */int) (unsigned char)11)))))))));
                var_50 = ((/* implicit */unsigned char) max((var_50), (arr_7 [i_20 - 1])));
                arr_70 [i_21] [(signed char)2] = ((/* implicit */int) (_Bool)1);
                var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((-1034110630980201180LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)46009)) - (46009)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_14 + 2] [i_20 + 2]))))) : (((unsigned long long int) ((((/* implicit */int) arr_42 [i_14])) > (((/* implicit */int) var_13)))))));
            }
            for (unsigned short i_22 = 1; i_22 < 21; i_22 += 1) /* same iter space */
            {
                var_52 |= min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (17422308663941054245ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) | ((-(((/* implicit */int) (_Bool)1))))))));
                arr_74 [i_14] [6LL] [i_22 + 3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_20]) + (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_22] [5U] [i_14])) || (((/* implicit */_Bool) arr_13 [3]))))) : (((/* implicit */int) arr_4 [i_14 - 1])))))));
            }
            for (unsigned short i_23 = 1; i_23 < 21; i_23 += 1) /* same iter space */
            {
                arr_79 [i_23] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_73 [i_23] [i_23 + 3] [i_23 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_23 + 1] [i_23] [i_23 + 1]))) : (-9196209039708130035LL)))));
                arr_80 [i_14 + 1] [i_23] [i_23] [8LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18090502001916695688ULL)) ? (((((/* implicit */_Bool) 3778144072U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)74))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3820)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2147483647U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_23 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) : (arr_78 [i_23] [i_23] [i_23])))) : (min((arr_50 [i_23] [i_23]), (((/* implicit */unsigned long long int) arr_75 [i_23]))))))));
            }
            for (unsigned short i_24 = 1; i_24 < 21; i_24 += 1) /* same iter space */
            {
                var_53 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)30)), (arr_76 [i_14 - 1] [i_14 - 2] [(_Bool)1] [i_14])))) ? (((((/* implicit */_Bool) (unsigned short)30459)) ? (32766U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55438))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_14] [i_20] [i_20])))))));
                var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1645259203)) || ((_Bool)1)));
                arr_84 [i_24] = ((/* implicit */short) max((((/* implicit */unsigned int) (signed char)108)), (((((/* implicit */_Bool) ((unsigned long long int) arr_55 [i_14] [(_Bool)1] [i_20] [i_24] [i_24]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)183))))) : (((((/* implicit */_Bool) 3778144073U)) ? (156309510U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4802)))))))));
            }
            var_55 ^= ((/* implicit */short) (unsigned short)35085);
        }
    }
}
