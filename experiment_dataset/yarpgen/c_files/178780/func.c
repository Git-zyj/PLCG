/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178780
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
    var_10 = ((/* implicit */short) max((var_10), (var_1)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_1] = (unsigned short)2;
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1])) ? (((/* implicit */int) (short)-22581)) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) /* same iter space */
            {
                arr_11 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)29044))));
                    var_13 += (-(((/* implicit */int) arr_12 [(unsigned short)10] [i_3 + 1] [i_2])));
                    var_14 &= ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_1 [i_0])) <= (-3050213544542950986LL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [i_2])) <= (((/* implicit */int) var_9)))))));
                }
                var_15 *= var_3;
            }
            for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (signed char)-105))) ? (((/* implicit */int) arr_12 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    arr_18 [4ULL] = (+(((/* implicit */int) arr_4 [i_5] [i_5 - 1])));
                    arr_19 [(_Bool)1] [i_5 - 1] [i_6] &= ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
                    arr_20 [i_6] [i_0] [i_0] [i_0] = (signed char)104;
                }
                arr_21 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2])) + (((/* implicit */int) arr_10 [i_2]))));
                arr_22 [i_5] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (short)32766);
            }
            var_17 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2]))) != (var_5)));
        }
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (short i_9 = 1; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            arr_38 [i_10] [(short)9] [i_10] [i_10] [4ULL] [i_0] [i_7] &= ((/* implicit */short) ((signed char) 2254147532U));
                            var_18 = arr_12 [i_9 - 1] [i_9 + 1] [i_8];
                            var_19 = ((/* implicit */short) ((((/* implicit */int) (signed char)117)) % (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (short)(-32767 - 1))))))));
                            var_20 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) <= (((/* implicit */int) (short)32761))))) - (((/* implicit */int) (!((_Bool)1))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) (short)-32756);
            arr_39 [i_0] [(signed char)7] [(signed char)7] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (signed char)-45)))));
        }
        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61921))))) > (((/* implicit */int) ((1091640867) >= (((/* implicit */int) var_8)))))));
                            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65515))));
                            var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)28)) : (((/* implicit */int) arr_33 [i_0] [(short)4] [i_0] [i_0]))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) 2386139411U);
                            var_26 = ((/* implicit */unsigned long long int) var_4);
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (31ULL)))));
                            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                        }
                        var_29 = ((/* implicit */unsigned long long int) var_6);
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_0] [i_11] [i_11]))));
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 3; i_17 < 10; i_17 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */int) arr_43 [i_17] [i_17 + 1] [i_17 + 1])) : (((/* implicit */int) var_4)))))));
                            arr_64 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_2))) ? (((/* implicit */int) ((short) var_0))) : (((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (unsigned short)41326))))));
                            arr_65 [i_18] [i_0] [i_16] [(short)0] [i_0] = ((/* implicit */unsigned char) 5064144775957656959ULL);
                            arr_66 [i_18] [i_0] [i_16] [2LL] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)26)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (2472649846U)));
                        }
                        for (unsigned char i_19 = 2; i_19 < 10; i_19 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_11] [i_17 - 1] [i_19 + 1] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2312853448U)));
                            arr_69 [i_0] [i_0] [i_0] [i_0] [i_17] [(short)2] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_54 [i_16] [i_19] [i_16] [i_17]))))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (18446744073709551601ULL)))) < (((/* implicit */int) var_8))));
                        }
                        for (unsigned char i_20 = 2; i_20 < 10; i_20 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_7 [i_11] [i_11]))) + (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)65507)))))));
                            var_35 = ((/* implicit */unsigned short) var_2);
                            arr_73 [i_0] [i_11] [i_17 - 3] [i_17] = ((((/* implicit */int) (signed char)56)) == (((/* implicit */int) var_9)));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_21 = 4; i_21 < 8; i_21 += 3) /* same iter space */
                        {
                            arr_78 [i_0] [i_0] [i_0] [i_16] [i_17 - 3] [(signed char)3] [i_21] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)3)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_16] [i_17 + 1])) && (((/* implicit */_Bool) var_5)))))));
                            arr_79 [i_0] [i_21] [i_16] [i_17 + 1] [i_17 + 1] [i_17 + 1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)65507))));
                            var_36 += ((/* implicit */unsigned char) (signed char)-121);
                            arr_80 [i_16] [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) (short)-29048))))) != (arr_32 [i_21] [i_21 - 1] [i_21 - 4] [i_21] [i_21 - 4])));
                        }
                        for (signed char i_22 = 4; i_22 < 8; i_22 += 3) /* same iter space */
                        {
                            arr_84 [i_22] [i_22] [i_22] [i_11] [i_22] = ((/* implicit */unsigned char) (~(4079555698U)));
                            var_37 = ((/* implicit */signed char) (unsigned short)65514);
                            var_38 &= ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) arr_54 [i_0] [i_16] [i_17 + 1] [i_22])) : (((/* implicit */int) var_0))))));
                        }
                        for (unsigned char i_23 = 0; i_23 < 11; i_23 += 3) 
                        {
                            var_39 = ((/* implicit */long long int) var_6);
                            var_40 = ((/* implicit */signed char) (short)-1025);
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147479552U)) ? (((/* implicit */int) (unsigned short)27)) : (((/* implicit */int) (signed char)-86))))) || (((/* implicit */_Bool) var_5))));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_63 [i_16] [i_17 - 2] [i_16] [i_17] [i_23])) : (((/* implicit */int) arr_82 [i_11] [i_17 + 1] [i_17 + 1] [i_0] [i_23]))));
                        }
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) arr_57 [i_0] [i_11] [i_16] [i_17] [i_17] [i_17]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) (short)-11313)) + (11320))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_24 = 0; i_24 < 11; i_24 += 3) 
            {
                for (unsigned int i_25 = 1; i_25 < 7; i_25 += 2) 
                {
                    {
                        var_44 *= ((unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_0))));
                        var_45 *= ((unsigned long long int) var_3);
                    }
                } 
            } 
            arr_93 [i_0] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_68 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_0] [i_0])));
        }
        /* LoopNest 2 */
        for (unsigned short i_26 = 0; i_26 < 11; i_26 += 1) 
        {
            for (unsigned short i_27 = 1; i_27 < 9; i_27 += 1) 
            {
                {
                    var_46 = ((/* implicit */int) ((unsigned char) ((signed char) var_7)));
                    var_47 = ((/* implicit */unsigned int) ((_Bool) 415197499U));
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 0; i_28 < 11; i_28 += 3) 
                    {
                        arr_102 [i_0] [i_26] [i_28] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-12373)) : (((/* implicit */int) var_4)));
                        /* LoopSeq 3 */
                        for (signed char i_29 = 1; i_29 < 9; i_29 += 3) /* same iter space */
                        {
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_0] [i_26] [i_27 - 1] [i_28])) >= (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned short)65508)))))));
                            var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_91 [i_0] [i_27 - 1] [i_27 + 2] [i_27 - 1] [i_28] [i_29 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))) : (arr_91 [i_27 + 1] [i_27 + 1] [i_27 + 2] [(unsigned short)5] [(short)1] [i_29 - 1])));
                            var_50 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)0))));
                            var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (-(((/* implicit */int) var_4)))))));
                            var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_9)))))));
                        }
                        for (signed char i_30 = 1; i_30 < 9; i_30 += 3) /* same iter space */
                        {
                            var_53 = ((unsigned long long int) var_7);
                            var_54 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [i_30 + 1] [i_0] [i_28] [4U] [9ULL] [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)48))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) arr_3 [i_28] [(unsigned char)10]))))) : (((((/* implicit */_Bool) 2312853465U)) ? (1056964608U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31)))))));
                        }
                        for (signed char i_31 = 1; i_31 < 9; i_31 += 3) /* same iter space */
                        {
                            var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23233)) != (((/* implicit */int) var_7))));
                            var_56 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_108 [i_31 + 1] [i_31 + 2] [i_31 + 2] [(short)6] [i_31 - 1] [(signed char)10]))));
                        }
                    }
                    var_57 = ((/* implicit */signed char) arr_99 [i_0] [i_26] [(unsigned short)0]);
                }
            } 
        } 
    }
    for (long long int i_32 = 0; i_32 < 10; i_32 += 3) 
    {
        var_58 = ((/* implicit */signed char) ((((/* implicit */int) arr_47 [i_32] [4ULL] [i_32] [(signed char)4])) == (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 1982113841U))))), (var_1))))));
        arr_115 [i_32] [i_32] = ((/* implicit */unsigned long long int) var_3);
    }
    for (unsigned short i_33 = 0; i_33 < 24; i_33 += 2) 
    {
        /* LoopNest 2 */
        for (short i_34 = 0; i_34 < 24; i_34 += 3) 
        {
            for (short i_35 = 0; i_35 < 24; i_35 += 1) 
            {
                {
                    arr_122 [i_33] [i_34] [i_34] [i_35] = ((/* implicit */short) var_6);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_36 = 1; i_36 < 23; i_36 += 1) 
                    {
                        var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (short i_37 = 0; i_37 < 24; i_37 += 3) 
                        {
                            arr_129 [(signed char)3] [i_37] [8ULL] [i_36] [i_34] = ((/* implicit */_Bool) -8884592081281838933LL);
                            var_60 = ((/* implicit */unsigned long long int) min((var_60), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-36)))))));
                            arr_130 [i_37] [i_34] [i_34] [i_34] = ((/* implicit */unsigned long long int) var_6);
                        }
                    }
                    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                    {
                        arr_133 [i_34] [i_34] [i_35] [i_38] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_132 [i_33] [i_38] [i_38] [i_34] [i_35])) ? (var_2) : (((/* implicit */unsigned long long int) arr_132 [i_34] [i_34] [i_34] [i_34] [(unsigned short)14])))), (((((/* implicit */_Bool) 13980710123930063975ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((unsigned long long int) arr_128 [i_34] [i_34] [i_34] [i_34] [i_34])) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)16416))))))))));
                        var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) arr_117 [i_33] [i_33]))));
                    }
                    var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65508)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6447))) : (13ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_116 [i_34])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_126 [i_33] [i_34] [i_35] [i_34] [19] [i_33])) % (-253228145)))) : ((-(-8884592081281838931LL))))))))));
                }
            } 
        } 
        var_63 |= ((/* implicit */unsigned char) ((signed char) ((unsigned char) max((((/* implicit */signed char) (_Bool)1)), (var_8)))));
    }
}
