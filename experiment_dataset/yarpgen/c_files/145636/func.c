/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145636
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [4])), (((127) << (((((/* implicit */int) var_13)) - (5113)))))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (arr_3 [(short)2]) : (((/* implicit */unsigned long long int) -1LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)16])))));
        var_21 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) arr_2 [i_0])) - (149)))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 18446744073709551611ULL)))) : (9223372036854775807LL)))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) << (((((((/* implicit */int) arr_2 [i_0])) - (149))) + (34)))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 18446744073709551611ULL)))) : (9223372036854775807LL))));
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((-1), (((/* implicit */int) arr_2 [12]))))) ? ((~(arr_3 [8]))) : (((((/* implicit */_Bool) arr_2 [4ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_3 [0ULL])))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_5 [i_1 - 1]);
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18111341078836647199ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19682))) : (18446744073709551615ULL)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (_Bool)1))))) ? (arr_7 [i_1] [i_2 + 3] [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 33554431U)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_0 [(unsigned short)16] [(unsigned short)16])))))));
                var_25 = ((/* implicit */int) min((arr_3 [i_3]), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                arr_15 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                arr_16 [i_1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(max((((/* implicit */int) var_0)), (arr_14 [7] [i_1] [i_1] [i_1])))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_0 [i_4] [i_4]))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))))))));
                arr_17 [i_1] = ((/* implicit */unsigned int) arr_11 [i_4] [i_2] [i_1]);
            }
            var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)26270)) : (-2147483644)));
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_27 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)119))))) < (((/* implicit */int) ((arr_6 [i_2]) < (((/* implicit */int) var_0)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(signed char)8] [i_2] [i_5] [i_5])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) (-2147483647 - 1)))))), ((+(arr_3 [0ULL])))))));
                var_28 = ((/* implicit */unsigned short) min((4294967295U), ((~(var_7)))));
                var_29 -= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) 2147483644)) ? (arr_6 [i_5]) : (var_9))))) % (max((arr_20 [i_1 - 1] [i_2] [0ULL]), (((((/* implicit */int) var_17)) & (arr_9 [i_5] [i_5])))))));
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    var_30 = ((/* implicit */_Bool) min((max((min((arr_6 [i_1]), (((/* implicit */int) arr_2 [i_5])))), (arr_6 [i_6 + 1]))), (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_6]))));
                    arr_24 [i_6] [i_5] [1LL] = ((/* implicit */unsigned long long int) (~(((-1) * (min((414363610), (((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((max((0ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) (signed char)122))));
                        var_32 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_28 [(unsigned short)2] [(unsigned short)2] [8LL] [i_6] [i_7])))) ? (4294967295U) : (((/* implicit */unsigned int) arr_14 [11] [i_2 - 3] [i_5] [i_6 + 2]))))) ? (((arr_4 [i_6 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)7)) << (((((/* implicit */int) arr_23 [i_1 - 1] [0U] [i_2 - 1] [i_6 + 2])) - (132))))))));
                        var_33 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)16128)))) ? (18446744073709551615ULL) : (7ULL)));
                    }
                    for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_10 [i_1 + 1] [2])) : (((/* implicit */int) arr_10 [i_1 + 1] [i_2 + 4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 3] [i_8]))) : ((-(arr_5 [i_1 - 1])))));
                        var_35 = ((/* implicit */unsigned int) ((max((arr_7 [i_1 + 2] [i_2 + 2] [i_6 - 1]), (var_2))) >> (((((max((((/* implicit */unsigned long long int) var_9)), (18446744073709551600ULL))) | (((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))) : (18446744073709551601ULL))))) - (18446744073709551567ULL)))));
                        arr_32 [i_5] [i_6 - 1] [i_6] [i_1 + 2] [i_2] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(31U)))) ^ (18446744073709551615ULL)));
                        arr_33 [i_1] [i_2] [i_5] [i_6] [i_1] = (+(31U));
                        var_36 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((arr_7 [i_6] [i_6] [i_1]) + (9223372036854775807LL))) << (((arr_4 [i_1]) - (1801842489U))))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_37 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_1 + 2] [i_1 + 1] [i_2 + 1] [i_9] [i_2 + 2] [i_6 + 2] [i_6 + 1])) ? (((/* implicit */int) ((unsigned char) (signed char)-1))) : ((((-2147483647 - 1)) / (((/* implicit */int) (short)-13706))))))) ? ((+((-(9223372036854775807LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (short)19474))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (4294967295U))))))));
                        var_38 = ((((/* implicit */_Bool) arr_20 [i_5] [i_2 - 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) : (((18446744073709551611ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_6 + 1] [i_5] [i_6] [i_9] [i_1 + 1]))))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 4; i_10 < 16; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_5] [i_10 + 1] [i_5] [i_5] [i_5] [i_2 + 1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                        var_39 |= ((/* implicit */unsigned short) (~((~(arr_38 [i_1 + 1] [(short)14] [i_1] [i_10] [i_2 - 1])))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_1 - 1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_12] [i_1 + 1] [i_5] [i_5] [2ULL] [i_2 + 3] [i_1 + 1])) && (((/* implicit */_Bool) arr_3 [i_5]))));
                        arr_45 [i_5] [i_10 + 1] [i_5] [i_2] [i_5] = ((/* implicit */unsigned char) (-((+(8ULL)))));
                        var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_5] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_10]))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) 414363610)) : (15U)))));
                    }
                    arr_46 [i_5] [i_2] [i_5] [i_10 - 2] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)32747))) % (4294967292U));
                }
                for (int i_13 = 1; i_13 < 15; i_13 += 1) 
                {
                    var_41 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_2 + 1] [i_5] [i_1] [i_13 - 1]))) - (arr_27 [(signed char)15] [i_2] [i_5] [i_5] [i_5] [i_5] [i_13 - 1])));
                    var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) <= (18446744073709551600ULL))))) & (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 2] [i_2]))) : (12956431693195962017ULL)))))))))));
                }
            }
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                var_43 = ((/* implicit */unsigned int) ((signed char) var_0));
                var_44 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [2LL])) : (((/* implicit */int) var_17)))))));
                /* LoopSeq 1 */
                for (int i_15 = 3; i_15 < 16; i_15 += 2) 
                {
                    var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_14]))));
                    var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1))));
                    var_47 = ((/* implicit */unsigned char) 1ULL);
                }
            }
        }
        for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 1) 
        {
            var_48 = ((/* implicit */int) -830699643984333272LL);
            var_49 = ((/* implicit */_Bool) ((5490312380513589587ULL) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_1] [i_1]))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)85))))) : ((+(18446744073709551609ULL)))))));
        }
        var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) : (arr_28 [4LL] [i_1] [i_1] [i_1] [i_1]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_52 [i_1] [i_1 + 1] [i_1]))))))), (((/* implicit */unsigned int) (((-(var_16))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)170)))))))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_51 = ((/* implicit */signed char) var_14);
        var_52 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [4ULL]))))) ? (((/* implicit */long long int) (~(31U)))) : (((((/* implicit */_Bool) -1853133556888899002LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-2146731050329438123LL)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            var_53 = ((/* implicit */short) ((arr_19 [i_18] [i_18] [12] [(signed char)0]) ? (((/* implicit */int) arr_19 [i_18] [(unsigned char)10] [(unsigned char)10] [i_17])) : (arr_6 [i_17])));
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_65 [i_19] [i_17] [i_17] = ((/* implicit */short) arr_31 [12] [12] [i_19]);
                var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_18] [i_18] [i_19] [17LL])) ? (arr_14 [i_17] [i_17] [i_18] [17ULL]) : (arr_14 [i_17] [i_18] [i_19] [10])));
            }
            var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_17] [(unsigned short)14] [(unsigned char)0] [(unsigned short)14]))))) ? (((/* implicit */long long int) arr_20 [i_17] [i_17] [(_Bool)0])) : ((-(arr_48 [i_17] [i_18] [i_18])))));
        }
    }
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 23; i_20 += 4) 
    {
        var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_20]))) / (var_10))) : (((/* implicit */unsigned int) -1398767646))));
        /* LoopSeq 3 */
        for (signed char i_21 = 3; i_21 < 22; i_21 += 4) 
        {
            var_57 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned char)237))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_20] [i_21 - 3]))) : (((12956431693195962034ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_21 - 3])))))));
            arr_72 [i_20] [i_21] [i_20] = ((/* implicit */unsigned int) ((signed char) arr_66 [12]));
        }
        for (long long int i_22 = 0; i_22 < 23; i_22 += 2) 
        {
            var_58 *= ((/* implicit */short) arr_67 [i_20]);
            arr_75 [i_22] = ((/* implicit */unsigned long long int) arr_68 [i_20] [i_20]);
            var_59 = (+(((/* implicit */int) arr_73 [i_20])));
            var_60 = ((/* implicit */unsigned char) (+(-2147483636)));
        }
        for (int i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            var_61 = ((/* implicit */unsigned short) (+(var_2)));
            var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_73 [i_20])) || (((/* implicit */_Bool) arr_76 [i_20]))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_24 = 0; i_24 < 23; i_24 += 2) 
        {
            var_63 |= ((/* implicit */short) (-(((/* implicit */int) arr_68 [(unsigned short)5] [i_24]))));
            var_64 &= ((/* implicit */unsigned int) ((((((arr_79 [2]) % (((/* implicit */int) arr_80 [i_20] [i_24] [i_20])))) + (2147483647))) << (((var_2) - (3751487201949813911LL)))));
            var_65 |= (((~(((/* implicit */int) (short)0)))) ^ (((/* implicit */int) arr_66 [i_24])));
        }
        var_66 |= ((/* implicit */unsigned long long int) arr_76 [i_20]);
    }
}
