/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185015
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
    var_11 = ((/* implicit */signed char) ((unsigned char) var_2));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned short) max(((unsigned char)14), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18233)) ? (((/* implicit */unsigned int) 507904)) : (268435456U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) (short)13647))))), (var_6)));
        arr_6 [(unsigned short)14] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -1983769829)) : (268435448U)))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1 - 1]))) : (((/* implicit */int) ((short) arr_4 [i_1] [i_1])))));
    }
    /* LoopSeq 2 */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            var_13 = ((/* implicit */int) (signed char)121);
            var_14 = ((/* implicit */_Bool) var_6);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) 
            {
                arr_18 [i_2] [i_4 + 1] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)254))));
                var_15 = ((/* implicit */signed char) (-((~(268435456U)))));
                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_8 [i_5])))));
                var_17 = ((/* implicit */unsigned char) 4026531848U);
            }
            arr_19 [i_2] = ((/* implicit */int) ((((((/* implicit */int) (short)15734)) + (((/* implicit */int) (short)27063)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = (~(((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (short)13458))));
                        arr_29 [i_2] [i_2] [i_4] [i_8] [i_7 - 1] [i_7] [i_8] = ((/* implicit */int) (short)15733);
                        var_19 = ((/* implicit */unsigned int) (unsigned short)65520);
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((var_6) | (((/* implicit */unsigned long long int) 4294967291U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_6] [i_8])) : (((/* implicit */int) (signed char)-14)))))));
                    }
                    arr_30 [i_2] [i_7 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(3133959329U)))) == (((((/* implicit */_Bool) arr_13 [i_2] [i_4] [i_6])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_4] [i_6] [i_7] [i_7])))))));
                }
                for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (signed char)64))));
                    var_22 = -1051110582;
                }
                var_23 = ((/* implicit */int) (_Bool)1);
            }
            for (signed char i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_11 = 2; i_11 < 18; i_11 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) (signed char)-20);
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-549648778) ^ (((/* implicit */int) arr_16 [i_11] [i_4] [i_11] [i_11]))))) ? (((-1983769829) ^ (((/* implicit */int) (short)32757)))) : (((/* implicit */int) ((unsigned char) (unsigned short)7593)))));
                    arr_41 [i_4 + 2] [i_4] [i_10] [i_11 - 2] [i_4] [i_10] = ((/* implicit */unsigned char) -1379077211);
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)-124))))) ? (((/* implicit */int) (short)-23020)) : (((/* implicit */int) (signed char)122)))))));
                }
                for (unsigned short i_12 = 2; i_12 < 18; i_12 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) var_3);
                    arr_44 [i_2] [i_10] [i_12] [i_10] = ((/* implicit */signed char) ((((unsigned int) (short)-19830)) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)3442)) <= (((/* implicit */int) var_8))))))));
                }
                /* LoopSeq 4 */
                for (signed char i_13 = 2; i_13 < 19; i_13 += 4) 
                {
                    var_28 = ((/* implicit */short) (signed char)7);
                    arr_48 [i_10] [i_13 - 1] = ((/* implicit */int) 0ULL);
                    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_2] [i_4])) && (((/* implicit */_Bool) -2107811590)))) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10890))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_13 + 1] [i_13] [i_13] [i_13])))));
                    var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_2] [i_10] [i_13]))));
                }
                for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    arr_52 [i_2] [i_2] [i_2 - 2] [i_2] [i_14] = ((/* implicit */short) (unsigned short)8073);
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-84)) || ((!(((/* implicit */_Bool) (signed char)83))))));
                    var_32 &= ((/* implicit */signed char) 2147483644);
                    arr_53 [i_2] [i_14] [i_10] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)32749))) % (3373032867U))) - ((+(3455740979U)))));
                }
                for (signed char i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                    arr_56 [i_2] [i_4] [i_10] [i_15] = ((/* implicit */unsigned short) (((+(var_5))) == (((((/* implicit */int) arr_21 [i_4])) ^ (((/* implicit */int) (short)32329))))));
                    var_34 = ((/* implicit */unsigned short) arr_54 [i_2] [i_2] [i_2 + 2] [i_4 + 2] [i_4] [i_4 + 1]);
                    var_35 = ((/* implicit */int) arr_28 [i_2] [i_10] [i_15]);
                }
                for (int i_16 = 2; i_16 < 18; i_16 += 1) 
                {
                    arr_59 [i_16] [i_10] [i_4 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)10890)) - (((/* implicit */int) ((((/* implicit */_Bool) (short)1)) || (((/* implicit */_Bool) (unsigned short)36041)))))));
                    arr_60 [i_2] [i_4] [i_10] [i_16] &= (short)0;
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 3; i_17 < 17; i_17 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_2] [i_16] [i_17])))))));
                        var_37 = ((/* implicit */signed char) (-(((/* implicit */int) arr_54 [i_17 + 2] [i_17] [i_17] [i_16] [i_16] [i_16 + 2]))));
                        arr_63 [i_2 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)0))));
                    }
                    arr_64 [i_2] [i_4] [i_10] [i_16] = ((/* implicit */signed char) (short)-16082);
                }
                var_38 = ((/* implicit */short) ((((((/* implicit */int) var_2)) | (((/* implicit */int) arr_20 [i_2])))) | (((/* implicit */int) ((signed char) var_6)))));
                var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (short)15585)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (signed char)-9)))))));
                var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_50 [i_2] [i_4] [i_4] [i_4 + 2] [i_4]))));
            }
        }
        var_41 = ((/* implicit */unsigned short) (signed char)0);
        var_42 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (1210274890) : (((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 2] [i_2]))))))), (var_7)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_18 = 0; i_18 < 20; i_18 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                var_43 = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) (signed char)127)))));
                var_44 |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (unsigned short)510)))));
            }
            for (int i_20 = 0; i_20 < 20; i_20 += 3) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (signed char)-75))));
                arr_74 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (signed char)110);
            }
            for (int i_21 = 0; i_21 < 20; i_21 += 3) /* same iter space */
            {
                var_46 = ((/* implicit */int) arr_37 [i_2] [i_2] [i_21] [i_2]);
                arr_77 [i_2 + 1] = ((/* implicit */short) (signed char)45);
                var_47 = ((/* implicit */unsigned char) -1051110582);
            }
            var_48 = ((/* implicit */short) -635429829);
            var_49 = ((/* implicit */signed char) max((var_49), (((signed char) ((((/* implicit */_Bool) arr_10 [i_18])) ? (((/* implicit */int) arr_21 [i_18])) : (((/* implicit */int) arr_57 [i_18] [i_2])))))));
            arr_78 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53748)) || (((/* implicit */_Bool) arr_40 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_18]))));
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            arr_83 [i_2 - 2] [i_22] = (~(((/* implicit */int) (unsigned char)195)));
            var_50 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 17029461373605875228ULL)) ? (((/* implicit */int) (unsigned short)37048)) : (((/* implicit */int) (short)-31002)))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)8160)) : (((/* implicit */int) (short)-8161))))));
            /* LoopSeq 1 */
            for (unsigned int i_23 = 1; i_23 < 17; i_23 += 3) 
            {
                arr_86 [i_2] [i_22] [i_23] = ((/* implicit */unsigned char) ((signed char) (signed char)-36));
                arr_87 [i_2 - 2] [i_22] = ((/* implicit */unsigned char) -1705832763);
                var_51 = ((/* implicit */signed char) 498944243U);
                /* LoopSeq 1 */
                for (unsigned char i_24 = 1; i_24 < 19; i_24 += 3) 
                {
                    var_52 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1701533715))));
                    /* LoopSeq 2 */
                    for (unsigned int i_25 = 0; i_25 < 20; i_25 += 3) /* same iter space */
                    {
                        var_53 = ((/* implicit */short) (signed char)-123);
                        var_54 = ((/* implicit */signed char) 3796023032U);
                    }
                    for (unsigned int i_26 = 0; i_26 < 20; i_26 += 3) /* same iter space */
                    {
                        var_55 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_2] [i_23] [i_23 + 3] [i_2 - 1] [i_26] [i_22]))));
                        var_56 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 - 2] [i_23] [i_24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_2])))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_23] [i_22] [i_23] [i_24] [i_26]))) : (14717312560495645334ULL)))));
                    }
                    var_57 -= ((/* implicit */unsigned char) (short)-8161);
                    /* LoopSeq 1 */
                    for (signed char i_27 = 1; i_27 < 18; i_27 += 3) 
                    {
                        var_58 = ((/* implicit */unsigned short) (signed char)22);
                        arr_98 [i_2] [i_22] [i_23] [i_24] [i_27] = ((short) 15672545502723253354ULL);
                        var_59 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-6415)) && (((/* implicit */_Bool) (unsigned short)65524))));
                        var_60 = ((/* implicit */unsigned long long int) (~(54550139)));
                    }
                    var_61 = ((signed char) (signed char)2);
                }
            }
        }
    }
    for (signed char i_28 = 2; i_28 < 18; i_28 += 4) /* same iter space */
    {
        var_62 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (short)-8170))))));
        arr_101 [i_28] [i_28] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((signed char) (short)18213))), (max((((/* implicit */unsigned short) var_0)), (((unsigned short) (signed char)-61))))));
        var_63 ^= ((/* implicit */signed char) (unsigned char)112);
        var_64 += ((/* implicit */short) (unsigned char)43);
    }
    var_65 = 2147483647;
}
