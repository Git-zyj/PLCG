/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186850
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
    var_19 -= ((/* implicit */unsigned char) var_0);
    var_20 |= ((/* implicit */_Bool) var_10);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 |= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_1])))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] |= (-(((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 1])));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)16] [i_1]))) / (var_3))))));
                        var_24 &= ((/* implicit */short) ((long long int) arr_0 [i_2 - 1]));
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3] [i_2 + 2] [i_2 + 2] [(_Bool)1] [i_1] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-25777)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((var_18) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((var_13) ^ (((/* implicit */unsigned int) (((-(4194303))) / ((-(((/* implicit */int) arr_2 [i_4] [i_4]))))))))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_28 = arr_11 [i_6] [i_6] [i_6];
                        var_29 -= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4]))) : (((((/* implicit */unsigned long long int) arr_14 [i_5])) ^ (var_3))))) ^ ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))) - (10ULL)))))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_9 [i_5]))));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) min((36638886), (((/* implicit */int) var_1))))) ? ((+(((/* implicit */int) var_14)))) : ((~(2146837198))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_11 [i_7 + 1] [i_7 - 1] [i_6]))));
                            arr_24 [i_5] [i_5] [i_6] [i_7] &= ((/* implicit */signed char) (((!(arr_0 [i_7 - 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [i_4] [i_5] [(_Bool)1] [i_7 - 1])) : (var_2))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_10)) < (arr_5 [22U] [i_7]))))))) : (arr_3 [(_Bool)1] [i_5] [i_7])));
                            var_33 |= ((/* implicit */unsigned int) max((var_2), (var_10)));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 3) 
                        {
                            var_34 |= ((/* implicit */unsigned char) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_10 - 2] [i_8] [i_10 + 1] [i_10])))));
                            var_35 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1966351363033784995LL))));
                            var_36 = ((/* implicit */unsigned long long int) 4193845217429880782LL);
                            arr_34 [i_0] [(unsigned char)11] [i_8] [18ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_10 - 1])) - (((/* implicit */int) var_1))));
                        }
                        var_37 = ((/* implicit */long long int) arr_0 [i_0]);
                        arr_35 [i_0] [i_4] [i_8] [i_4] [i_8] = ((/* implicit */int) arr_10 [i_0] [i_4] [11LL] [i_8] [i_9] [(unsigned short)12]);
                        var_38 |= (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (_Bool)1))))));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (0ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_23 [i_9] [i_9] [(signed char)5] [i_0] [i_9]) : (arr_23 [i_0] [i_4] [i_4] [i_0] [i_9]))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_9])) ? (arr_23 [i_0] [i_0] [7U] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 524286))))));
                    }
                } 
            } 
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_39 [10] [i_11] [i_0] = ((/* implicit */unsigned int) max((arr_17 [(unsigned char)17] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_11])) || (((/* implicit */_Bool) var_11)))))));
            var_40 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_11] [i_0] [i_0] [i_11])) || (((/* implicit */_Bool) ((unsigned long long int) var_10)))))), (var_13)));
            var_41 = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_11] [i_0]);
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_32 [i_0] [i_0]))));
            arr_42 [i_0] = ((/* implicit */unsigned short) ((arr_36 [i_0] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_12])))));
            arr_43 [12] [i_12] &= ((/* implicit */_Bool) ((((((/* implicit */int) var_16)) - (((/* implicit */int) arr_11 [i_12] [8LL] [8LL])))) + (((/* implicit */int) arr_6 [i_0] [21LL] [21LL] [i_12]))));
        }
        var_43 += ((/* implicit */unsigned short) var_5);
        /* LoopSeq 3 */
        for (unsigned int i_13 = 2; i_13 < 21; i_13 += 1) 
        {
            var_44 += ((/* implicit */short) ((13269523317816107068ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
            /* LoopNest 2 */
            for (int i_14 = 4; i_14 < 20; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    {
                        arr_51 [(unsigned short)12] [i_15] [i_13 + 2] [(short)20] [(unsigned short)12] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_15] [i_13 - 2])) ? (arr_44 [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) && (((/* implicit */_Bool) arr_3 [(unsigned char)11] [i_13] [i_14 + 2]))))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((var_16), (var_16)))) : ((-(((/* implicit */int) var_18)))))) : ((((+(((/* implicit */int) arr_7 [i_13])))) ^ (((((/* implicit */int) var_1)) & (var_2)))))));
                        var_45 ^= ((/* implicit */long long int) (+((-(((/* implicit */int) arr_33 [i_14 + 3] [i_13 + 2] [i_13 - 1] [i_13 - 1]))))));
                        var_46 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) - ((+(((/* implicit */int) var_16))))))));
                        var_47 = ((/* implicit */short) ((arr_50 [i_13 + 1] [i_13] [i_13 + 1] [i_13 - 2] [i_13 - 2]) ? (arr_26 [i_15]) : (((/* implicit */int) (unsigned char)6))));
                    }
                } 
            } 
        }
        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) /* same iter space */
        {
            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_16]))))) + ((-(((((/* implicit */_Bool) 18446744073709551602ULL)) ? (2047U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))))))))));
            var_49 |= ((/* implicit */long long int) var_6);
            var_50 |= ((/* implicit */unsigned char) ((((arr_52 [i_0] [i_16]) || (var_18))) && (((/* implicit */_Bool) ((arr_19 [i_16]) >> (((/* implicit */int) var_5)))))));
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                arr_58 [i_0] [(unsigned short)10] [10] [i_17] |= ((/* implicit */int) (-(arr_14 [i_16])));
                var_51 = ((/* implicit */_Bool) (-(max(((+(((/* implicit */int) arr_2 [i_0] [i_17])))), ((+(((/* implicit */int) var_16))))))));
                /* LoopSeq 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) var_17))));
                    var_53 += ((/* implicit */unsigned long long int) 134152192);
                    var_54 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)146))));
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 1; i_19 < 22; i_19 += 4) 
                    {
                        arr_66 [i_16] [i_18] [i_16] [i_16] [i_16] [i_0] |= ((/* implicit */unsigned short) (signed char)1);
                        arr_67 [i_0] [i_17] [i_18] = ((/* implicit */long long int) max((((/* implicit */int) arr_27 [i_16])), ((((+(((/* implicit */int) arr_45 [i_0] [i_16] [i_17])))) & (((var_2) * (((/* implicit */int) var_17))))))));
                    }
                }
                for (int i_20 = 0; i_20 < 23; i_20 += 1) 
                {
                    arr_70 [i_17] [i_17] [i_17] [i_20] [i_20] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((((/* implicit */int) var_6)) | (var_2)))))) / (((arr_60 [i_20] [i_0] [i_0] [(unsigned char)4] [i_0] [i_20]) >> (((((((/* implicit */unsigned int) var_10)) - (arr_3 [(unsigned char)10] [i_16] [i_17]))) - (2008911971U)))))));
                    var_55 += (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0] [i_17])))));
                    var_56 = ((/* implicit */long long int) (-(min(((+(((/* implicit */int) (unsigned char)151)))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_17])) ? (var_2) : (((/* implicit */int) var_4))))))));
                }
            }
            var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_16] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_16] [i_16] [i_16])))))) : ((~(0ULL)))))))))));
        }
        for (unsigned char i_21 = 0; i_21 < 23; i_21 += 2) /* same iter space */
        {
            arr_75 [i_21] [i_21] |= ((/* implicit */short) max((((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_21])) ? (arr_36 [i_21] [i_21] [i_21]) : (arr_36 [i_21] [i_0] [i_21]))), (((/* implicit */long long int) ((short) arr_61 [i_21] [i_0])))));
            var_58 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_0] [i_21])) ? (arr_57 [i_21] [i_21]) : (arr_57 [i_0] [i_21])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 844424930131968ULL)))) : (max((arr_57 [i_0] [i_21]), (arr_57 [i_21] [i_21])))));
            /* LoopSeq 1 */
            for (short i_22 = 0; i_22 < 23; i_22 += 2) 
            {
                var_59 = ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_4 [i_0] [i_0])), (1955720400))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_9 [i_0]))))));
                var_60 = ((/* implicit */unsigned char) min((var_60), (arr_45 [i_21] [i_21] [i_22])));
                var_61 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
            }
            arr_80 [i_0] = ((/* implicit */_Bool) arr_40 [i_0] [i_0]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_23 = 2; i_23 < 22; i_23 += 2) 
        {
            arr_84 [i_0] [i_23 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_23 - 1] [i_23 - 2])) ? (((/* implicit */int) arr_22 [i_23 - 1] [i_23 - 2])) : (((/* implicit */int) (signed char)-59))));
            var_62 = ((/* implicit */int) max((var_62), (((/* implicit */int) ((((/* implicit */_Bool) arr_71 [9] [i_23 - 2])) || (var_17))))));
        }
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 17; i_24 += 3) 
    {
        arr_87 [i_24] = ((/* implicit */int) ((((/* implicit */_Bool) arr_86 [i_24] [i_24])) ? (((/* implicit */long long int) arr_82 [i_24])) : (3448588194661047643LL)));
        var_63 = ((/* implicit */long long int) ((var_11) > (((/* implicit */long long int) -1274921856))));
        var_64 = ((/* implicit */int) max((var_64), (((/* implicit */int) ((var_17) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_40 [10] [i_24]))))));
        var_65 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_24] [(unsigned short)9] [i_24] [i_24]))));
        /* LoopSeq 2 */
        for (unsigned char i_25 = 0; i_25 < 17; i_25 += 4) 
        {
            var_66 = ((/* implicit */unsigned int) arr_88 [i_25]);
            var_67 = ((/* implicit */_Bool) max((var_67), (((/* implicit */_Bool) (-(-1274921856))))));
            arr_92 [12ULL] [12ULL] [i_24] |= ((/* implicit */short) (-(var_3)));
        }
        for (unsigned char i_26 = 1; i_26 < 14; i_26 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_27 = 1; i_27 < 14; i_27 += 2) 
            {
                arr_97 [i_27] [i_27] = ((/* implicit */unsigned char) var_5);
                var_68 = ((/* implicit */_Bool) min((var_68), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [(signed char)14] [(unsigned char)12] [(unsigned char)12] [i_24])) ? (arr_59 [i_27 + 2] [(_Bool)1] [(_Bool)1] [10]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
            }
            var_69 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_54 [i_26 + 1] [i_26 + 2]))));
            /* LoopNest 2 */
            for (unsigned short i_28 = 0; i_28 < 17; i_28 += 4) 
            {
                for (unsigned int i_29 = 1; i_29 < 15; i_29 += 4) 
                {
                    {
                        arr_102 [i_29] [i_28] [i_26] [i_24] = ((/* implicit */int) ((((/* implicit */unsigned int) 234881024)) > (var_12)));
                        arr_103 [i_29] [i_29 - 1] [(unsigned char)11] [i_29] = ((/* implicit */int) ((arr_96 [i_28] [i_26] [i_29 + 1]) <= (var_10)));
                        var_70 = ((/* implicit */int) ((((/* implicit */_Bool) (short)21003)) && (((/* implicit */_Bool) arr_64 [i_28]))));
                        arr_104 [i_29] [i_28] [i_26 + 2] [i_24] = ((/* implicit */unsigned short) (short)25770);
                        var_71 = arr_31 [i_29] [i_24] [i_28] [i_26] [i_24] [i_24];
                    }
                } 
            } 
            arr_105 [i_24] [i_24] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_32 [i_26 - 1] [i_26 + 3])) : (((/* implicit */int) var_17))));
        }
    }
    /* vectorizable */
    for (long long int i_30 = 1; i_30 < 14; i_30 += 3) 
    {
        var_72 = ((/* implicit */unsigned char) ((long long int) var_8));
        arr_108 [i_30] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_37 [(unsigned char)20] [i_30 + 1] [i_30 + 2])) == (((((/* implicit */_Bool) (short)-25759)) ? (arr_90 [i_30] [i_30] [i_30]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
    /* vectorizable */
    for (unsigned int i_31 = 0; i_31 < 24; i_31 += 1) 
    {
        var_73 = ((/* implicit */unsigned char) 21);
        var_74 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)41804)) && (((/* implicit */_Bool) arr_109 [i_31]))));
    }
    var_75 -= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -21)), (var_12)))) || (((/* implicit */_Bool) var_8)));
}
