/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102680
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) (unsigned short)10227)) ? (var_15) : (8576987546482975655ULL))))), (((/* implicit */unsigned long long int) (unsigned char)154)))))));
    var_19 = ((/* implicit */unsigned short) max(((((+(((/* implicit */int) (unsigned short)55308)))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16)))))), (min((((var_10) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) var_14)))), ((+(((/* implicit */int) var_17))))))));
    var_20 -= ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)41266))))), (((unsigned int) (signed char)29)))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)56019)) ^ (((/* implicit */int) (unsigned char)74))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_21 = (-(min((((((/* implicit */int) var_17)) / (((/* implicit */int) (signed char)52)))), (((((/* implicit */int) (signed char)12)) * (((/* implicit */int) (short)32767)))))));
            arr_4 [i_0] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) 8324774630529105292LL)) ? (((unsigned long long int) max((arr_1 [(unsigned short)11] [i_1]), (((/* implicit */int) (short)28210))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (9471074629448779025ULL))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                var_22 = ((/* implicit */unsigned long long int) arr_0 [i_1 + 1]);
                var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-6748)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511))) : (308089365U)));
            }
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                arr_15 [(unsigned char)2] [i_3] [(unsigned char)2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25)) ^ (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) ((signed char) var_12))) : (arr_3 [i_3] [i_3])));
                var_24 = ((arr_3 [i_0] [i_0]) << (((arr_3 [i_3] [i_3]) - (475469110))));
                var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            }
            for (unsigned short i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31354)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1272169024U)) == (var_3)))) : (((/* implicit */int) arr_16 [i_0] [i_5 - 1] [i_3] [i_0]))));
                var_27 = ((/* implicit */unsigned int) ((unsigned char) arr_16 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5]));
            }
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                var_28 = ((/* implicit */int) (+(1142966987644725375ULL)));
                arr_23 [i_6] [10] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-57)) % (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_3] [i_0])) : (((((/* implicit */_Bool) -6016808757481515707LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned short)5] [i_6] [(signed char)2]))) : (arr_10 [i_0]))));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (short)1703))));
                var_30 = ((/* implicit */short) ((((((/* implicit */int) arr_12 [i_0] [18ULL])) == (arr_14 [i_3] [i_6]))) || (((/* implicit */_Bool) (+(15610528210148834174ULL))))));
                var_31 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)15768)) == (((/* implicit */int) (signed char)68))));
            }
            arr_24 [i_0] [17LL] [4ULL] = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) 15610528210148834174ULL))));
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    var_32 = ((/* implicit */unsigned char) (signed char)-34);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49831)) && (((/* implicit */_Bool) arr_13 [i_8 - 1] [i_8] [i_8] [i_8 - 1]))));
                        var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) 14101935711268500751ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (5804495100099529896ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_3] [i_3])))));
                        var_35 = ((/* implicit */unsigned int) ((unsigned long long int) arr_32 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 + 1]));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_13 [i_8] [i_8 - 1] [i_8] [i_8]))) - (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_18 [(signed char)0] [i_3] [i_3] [(signed char)0])))))))));
                    }
                    var_37 ^= ((/* implicit */unsigned long long int) ((short) ((5804495100099529896ULL) != (((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned char)1])))));
                }
                var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)46080)) % (((((/* implicit */_Bool) arr_2 [(unsigned short)1] [(unsigned char)8])) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned short)65535))))));
                /* LoopSeq 2 */
                for (unsigned short i_10 = 3; i_10 < 17; i_10 += 4) 
                {
                    arr_37 [i_0] [i_0] [18U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34065))))) ? (arr_13 [i_0] [i_3] [i_7] [i_10 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10 + 3] [i_3] [i_7] [i_7] [(short)14])))));
                    arr_38 [i_0] [(unsigned short)13] [i_0] [(unsigned short)13] = ((/* implicit */unsigned long long int) var_11);
                    /* LoopSeq 1 */
                    for (short i_11 = 2; i_11 < 19; i_11 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned short) var_12);
                        var_40 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_33 [i_10 + 3] [i_11] [(short)15] [i_10 + 3] [i_11] [i_3])) != (((/* implicit */int) arr_30 [i_7] [i_11] [i_7] [i_11] [i_0]))))) * (((/* implicit */int) arr_32 [i_11] [i_11] [i_11 + 1] [i_11] [i_11 - 2]))));
                        var_41 ^= ((/* implicit */unsigned char) ((arr_14 [i_0] [i_11 - 1]) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) arr_29 [i_0] [(unsigned short)13]))))));
                    }
                }
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((((/* implicit */_Bool) var_4)) ? (2836215863560717442ULL) : (17303777086064826241ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */unsigned long long int) arr_9 [i_13] [i_7] [(unsigned short)11])))))));
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [(signed char)0] [i_3] [i_7] [13ULL])) ? (((((/* implicit */_Bool) 17303777086064826253ULL)) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_7] [i_3])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1142966987644725362ULL)))))));
                    }
                    var_45 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_16 [i_12] [i_7] [i_3] [4LL])) / (((/* implicit */int) arr_43 [(unsigned char)7] [i_3] [i_0])))));
                    arr_49 [(signed char)15] [i_3] [i_3] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_40 [i_12] [i_0] [i_3] [i_12] [i_3])))));
                }
            }
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                arr_53 [(unsigned short)0] [(unsigned short)0] [i_14] = ((/* implicit */unsigned char) ((arr_0 [i_14]) == (arr_0 [i_0])));
                /* LoopSeq 3 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned short) 6ULL);
                    var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2836215863560717441ULL)) ? (((/* implicit */long long int) 3945794052U)) : (((((/* implicit */_Bool) (signed char)-60)) ? (-8324774630529105315LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-76)))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_48 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)34065))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        arr_61 [i_0] [i_3] [i_14] [i_14] [i_17] &= ((/* implicit */unsigned int) (unsigned char)186);
                        var_49 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_43 [i_16] [i_3] [(unsigned short)4])))));
                        var_50 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)70))))) ? (arr_51 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))));
                        var_51 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-60)) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)31485)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))))) - (18446744073709551593ULL)))));
                    }
                    for (unsigned long long int i_18 = 2; i_18 < 19; i_18 += 4) 
                    {
                        var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2308691984U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_18 - 2]))) : (var_15)));
                        var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_14] [i_0])) ? (((/* implicit */int) (unsigned short)31485)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_20 [i_3] [i_18] [i_16])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_18] [i_3]))))) : (((/* implicit */unsigned long long int) arr_60 [(unsigned char)8] [i_18 + 1] [4ULL] [i_16] [(signed char)5] [(unsigned char)8]))));
                        var_54 |= ((/* implicit */short) (((-(((/* implicit */int) arr_21 [i_0] [(unsigned short)3] [1U] [i_0])))) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)6544)) < (arr_60 [i_0] [i_0] [17ULL] [17ULL] [i_0] [i_0]))))));
                        var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) (((-(((/* implicit */int) arr_18 [i_14] [i_3] [i_3] [(unsigned char)19])))) ^ (((/* implicit */int) arr_46 [i_18] [i_18] [i_16] [i_14] [i_3] [(unsigned short)19] [i_0])))))));
                        var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? ((-(-155570609))) : (((((/* implicit */int) (unsigned char)184)) * (((/* implicit */int) var_0)))))))));
                    }
                    var_57 = ((/* implicit */_Bool) var_11);
                    var_58 |= ((/* implicit */unsigned char) ((int) ((short) (unsigned short)24558)));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) ((arr_59 [i_19] [i_19] [i_14] [i_3] [i_3] [i_0]) == (arr_59 [i_0] [i_3] [17U] [i_0] [i_14] [i_14]))))));
                    var_60 = ((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_19]);
                    /* LoopSeq 1 */
                    for (signed char i_20 = 1; i_20 < 19; i_20 += 1) 
                    {
                        var_61 = ((/* implicit */unsigned int) ((arr_68 [i_20 + 1] [i_20] [(unsigned char)4] [i_20 + 1] [i_20 - 1] [i_20] [13]) ? (((/* implicit */int) arr_62 [i_20 + 1] [(signed char)12] [i_20] [i_20] [i_20 - 1])) : (((/* implicit */int) arr_68 [i_20 + 1] [i_20] [i_20 + 1] [i_20 + 1] [i_20 - 1] [i_20] [i_20 + 1]))));
                        var_62 = ((/* implicit */unsigned long long int) ((arr_13 [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_20 + 1]) >> (((/* implicit */int) arr_5 [i_19] [i_19] [i_19] [i_0]))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_21 = 1; i_21 < 17; i_21 += 1) 
                    {
                        var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) (unsigned char)70))));
                        var_64 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_21 + 1] [(_Bool)1] [(_Bool)1] [i_3] [i_21])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_63 [i_3] [i_21 + 3] [i_21] [i_21 + 2] [i_21 + 1]))));
                        arr_71 [i_0] [i_19] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)16529)) | (((/* implicit */int) arr_18 [i_21 + 2] [i_21] [i_21 + 1] [i_21]))));
                        arr_72 [i_0] [i_3] [14LL] [i_3] [i_19] [i_0] [i_21] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (_Bool)0)) : (arr_0 [(signed char)2]))));
                        var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) arr_22 [i_0] [i_0] [11ULL]))));
                    }
                }
                var_66 = ((/* implicit */signed char) (-(var_13)));
                arr_73 [(unsigned char)16] [i_14] [0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned char)153)))))));
                arr_74 [i_0] [i_3] [i_14] [i_3] = ((/* implicit */short) ((unsigned char) -931616783));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_67 = ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) arr_21 [i_0] [i_3] [i_22] [i_3])));
                /* LoopSeq 2 */
                for (unsigned short i_23 = 0; i_23 < 20; i_23 += 3) 
                {
                    var_68 = ((/* implicit */unsigned char) max((var_68), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_36 [i_0] [(short)6] [i_22] [i_3])) : (((/* implicit */int) (signed char)106)))))));
                    var_69 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_5)) + (arr_0 [i_22]))) : (((int) var_4))));
                    arr_80 [i_0] [i_3] [i_22] [i_23] = ((/* implicit */long long int) (short)0);
                    arr_81 [i_0] [(unsigned char)1] [i_22] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (signed char)0)) / (((/* implicit */int) arr_21 [i_0] [7ULL] [7ULL] [i_23])))) : ((+(((/* implicit */int) arr_21 [(_Bool)1] [i_3] [i_3] [i_23]))))));
                }
                for (unsigned char i_24 = 2; i_24 < 17; i_24 += 4) 
                {
                    var_70 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (arr_76 [i_0] [i_0] [0]) : (((/* implicit */int) (signed char)58))));
                    var_71 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_50 [7LL] [i_3] [i_22] [(unsigned short)11]))));
                }
                arr_84 [i_0] [i_0] [i_3] [i_22] = ((/* implicit */unsigned short) (-(4294967295U)));
            }
            arr_85 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_3] [i_3] [i_0] [i_3]))))) ? (((/* implicit */int) (unsigned short)58992)) : (((/* implicit */int) var_0))));
        }
        for (signed char i_25 = 3; i_25 < 18; i_25 += 1) 
        {
            arr_88 [i_25] = ((/* implicit */unsigned short) arr_83 [(unsigned char)11] [3ULL] [(unsigned char)11] [i_25] [(unsigned char)11] [i_25 - 1]);
            var_72 ^= ((/* implicit */signed char) (((+(((((/* implicit */int) var_0)) - (arr_1 [i_0] [i_25 - 1]))))) % ((-((-(((/* implicit */int) arr_11 [i_0] [i_25] [i_25]))))))));
        }
        var_73 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_79 [i_0] [i_0]))))));
        var_74 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)115)) >> (((/* implicit */int) (signed char)31)))) << (((((/* implicit */int) (unsigned short)57984)) - (57976)))));
    }
}
