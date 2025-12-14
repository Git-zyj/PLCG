/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157632
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
    var_18 = ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 + 1]);
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) (signed char)15);
                var_20 |= ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1] [i_2 + 1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_1 - 2] [i_0])))))) ? (-3LL) : (var_3))))));
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)3)) << (((((/* implicit */int) (signed char)41)) - (30)))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1920)) ? (arr_0 [i_2 + 1]) : (((/* implicit */int) arr_9 [i_2 + 2] [i_0]))));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_24 = var_14;
                        var_25 = (~(arr_5 [i_0 + 2] [i_3 + 2] [i_0 + 2]));
                        var_26 = ((/* implicit */long long int) var_2);
                        arr_16 [i_0] [i_1] [i_1 - 1] [i_2 + 2] [i_3] [i_2] = ((/* implicit */short) ((536870911) != (((/* implicit */int) (unsigned short)63584))));
                        var_27 *= ((/* implicit */unsigned long long int) arr_12 [i_1 + 1] [i_5] [i_5] [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1]);
                    }
                    for (long long int i_6 = 2; i_6 < 7; i_6 += 3) 
                    {
                        arr_20 [i_6 - 2] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (short)26213);
                        arr_21 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 + 1] [i_0] [i_2] = ((/* implicit */unsigned short) 10739287865554560661ULL);
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_28 = (short)32765;
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1920)))))));
                    var_30 = ((/* implicit */long long int) var_10);
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((arr_5 [i_2 - 3] [i_1 + 1] [i_0]) / (arr_5 [i_0] [i_1] [i_2]))))));
                    arr_26 [i_0] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) arr_15 [i_2 + 2] [i_1 + 1] [i_0 - 1]);
                }
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    var_32 = ((((/* implicit */int) (unsigned short)1920)) * (((/* implicit */int) arr_27 [i_0 + 1] [i_1 - 2] [i_2 + 1] [i_8])));
                    arr_31 [i_1] [i_2] [i_8] [i_2 - 1] [i_1] = ((/* implicit */long long int) ((int) arr_15 [i_1 + 1] [i_1 + 1] [i_0 + 2]));
                }
                for (long long int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    arr_34 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_5))))) ? (arr_14 [i_0 + 2] [i_0] [i_0 + 2] [i_2] [i_2] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (short)-20204)))));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-30747834925769508LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) ? (var_10) : (((/* implicit */unsigned long long int) arr_17 [i_0 - 1]))));
                }
            }
            var_34 = ((/* implicit */short) 3902392514U);
        }
        for (short i_10 = 1; i_10 < 8; i_10 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                arr_39 [i_0 + 2] [i_0 + 2] [i_11] [i_10] = ((/* implicit */_Bool) var_10);
                arr_40 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32744)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) (~(var_10)));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((unsigned char) ((var_16) > (((/* implicit */int) arr_28 [i_0] [i_13] [i_11] [i_12]))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_15 = 3; i_15 < 10; i_15 += 4) 
                {
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-7888)) && (((/* implicit */_Bool) (short)(-32767 - 1)))));
                            var_38 = ((/* implicit */int) ((long long int) min((7848728624067449717ULL), (var_9))));
                            arr_55 [i_0 + 1] [i_10 + 3] [i_10] [i_15] [i_16] = ((/* implicit */unsigned int) (short)0);
                            var_39 = ((/* implicit */unsigned long long int) arr_27 [i_0] [i_10 + 2] [i_10 + 2] [i_16]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_17 = 2; i_17 < 10; i_17 += 3) 
                {
                    var_40 = min(((~(((((/* implicit */int) (unsigned short)57991)) & (var_16))))), (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2])));
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10811))))))));
                    var_42 = ((/* implicit */signed char) ((min((((/* implicit */long long int) (short)2907)), ((~(9223372036854775806LL))))) > (((/* implicit */long long int) (-(var_1))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_18 = 1; i_18 < 9; i_18 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_0 + 2]);
                        arr_60 [i_10] [i_10] = ((/* implicit */short) (-(1077985136)));
                        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (-(arr_19 [i_0] [i_10 + 1] [i_10 + 1] [i_18]))))));
                    }
                    for (short i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        arr_64 [i_0 + 2] [i_10] [i_10] [i_17] [i_10] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 + 2])) >= (((/* implicit */int) arr_13 [i_17 - 1])))))) : (((var_15) ? (((/* implicit */unsigned long long int) ((long long int) var_11))) : (var_9)))));
                        arr_65 [i_10] [i_10] = ((/* implicit */long long int) (unsigned char)50);
                    }
                    for (signed char i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) % (var_0)))));
                        var_47 = ((/* implicit */int) 8903570956057190503LL);
                    }
                }
                arr_69 [i_10] [i_10 + 1] [i_10] [i_14] = ((/* implicit */_Bool) var_13);
            }
            for (unsigned char i_21 = 1; i_21 < 10; i_21 += 3) 
            {
                var_48 = ((/* implicit */short) (unsigned short)57991);
                var_49 = ((/* implicit */int) (signed char)(-127 - 1));
                /* LoopSeq 2 */
                for (unsigned long long int i_22 = 3; i_22 < 8; i_22 += 4) 
                {
                    arr_75 [(_Bool)1] [i_10] [(_Bool)1] [i_10] |= ((/* implicit */long long int) (unsigned short)9);
                    var_50 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)53234)) ^ (((/* implicit */int) max((((/* implicit */short) arr_48 [i_22 + 1] [i_21 - 1] [i_10])), ((short)-3966))))));
                    arr_76 [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_18 [i_0 - 2] [i_21] [i_21] [i_22] [i_22 + 1] [i_21 + 1] [i_10]), (((/* implicit */unsigned short) arr_30 [i_0 - 2] [i_0] [i_10 - 1] [i_0 - 2] [i_0 - 2] [i_22])))))) : (var_14)));
                }
                /* vectorizable */
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 4) 
                {
                    arr_79 [i_0] [i_10] [i_0] [i_21] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-3969)) > (arr_24 [i_21 - 1] [i_21] [i_21] [i_23] [i_21] [i_10 - 1])));
                    var_51 = ((/* implicit */signed char) min((var_51), (arr_36 [i_0 + 1] [i_23])));
                    var_52 = ((/* implicit */int) arr_29 [i_0 - 1] [i_0 - 1] [i_0] [i_23]);
                }
            }
            for (short i_24 = 0; i_24 < 11; i_24 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_25 = 1; i_25 < 10; i_25 += 3) 
                {
                    var_53 -= ((/* implicit */unsigned char) (-((~(var_17)))));
                    var_54 = ((/* implicit */short) arr_72 [i_25]);
                }
                arr_85 [i_24] |= ((/* implicit */unsigned short) (signed char)-55);
            }
            var_55 = ((/* implicit */int) (unsigned short)5601);
            /* LoopNest 2 */
            for (signed char i_26 = 0; i_26 < 11; i_26 += 4) 
            {
                for (unsigned int i_27 = 2; i_27 < 9; i_27 += 4) 
                {
                    {
                        var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_27] [i_10])) ? (((((((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */long long int) var_16)))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) -2147483630)) ? (arr_46 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27609))))) - (2462680910U))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_83 [i_10])) + (((/* implicit */int) arr_83 [i_10])))))));
                        arr_90 [i_0] [i_0 + 1] [i_0] [i_10] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_48 [i_0] [i_10 + 3] [i_10]))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_48 [i_10] [i_10] [i_10]))))) : ((+(-2147483644))));
                        arr_91 [i_10] [i_0 - 2] [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned long long int) var_3))));
                        /* LoopSeq 1 */
                        for (signed char i_28 = 4; i_28 < 9; i_28 += 3) 
                        {
                            var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) (-((+(min((773760739341390955LL), (((/* implicit */long long int) (_Bool)1)))))))))));
                            var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_63 [i_27] [i_27] [i_27 + 1] [i_27] [i_27 - 2])), (var_11)))) || (((/* implicit */_Bool) -7210577120362736732LL))));
                            var_59 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_82 [i_28 - 3] [i_27 - 1] [i_10 + 3] [i_0 + 1]))) > (var_3))))));
                            var_60 = min((((/* implicit */unsigned int) (unsigned short)65535)), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_27] [i_27] [i_26] [i_27 + 1])))))) / (arr_81 [i_27 + 1] [i_27] [i_27] [i_27 + 1]))));
                            arr_95 [i_0] [i_10] [i_26] = ((/* implicit */unsigned short) var_5);
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_29 = 0; i_29 < 11; i_29 += 3) 
            {
                arr_99 [i_10] = ((/* implicit */int) var_4);
                var_61 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((unsigned short) 2199023255551LL))), (13481576071277934916ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_16) : (1230203933))))));
                arr_100 [i_10] [i_10] = ((/* implicit */unsigned short) max((min((13481576071277934919ULL), (18446744073709551615ULL))), (((((/* implicit */_Bool) var_1)) ? (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0]) : (arr_10 [i_0] [i_0 - 2] [i_0 - 1] [i_10] [i_10 - 1] [i_29])))));
            }
        }
        var_62 = ((/* implicit */long long int) max((var_62), (((/* implicit */long long int) (signed char)-16))));
    }
    for (unsigned char i_30 = 3; i_30 < 12; i_30 += 4) 
    {
        var_63 = ((/* implicit */unsigned char) var_14);
        var_64 *= ((/* implicit */short) 1152921504606846975ULL);
        /* LoopNest 3 */
        for (long long int i_31 = 0; i_31 < 13; i_31 += 4) 
        {
            for (short i_32 = 3; i_32 < 10; i_32 += 4) 
            {
                for (short i_33 = 3; i_33 < 11; i_33 += 3) 
                {
                    {
                        var_65 *= ((/* implicit */short) arr_110 [i_31] [i_31] [i_32] [i_31]);
                        var_66 = ((/* implicit */unsigned short) min((var_66), (arr_108 [i_31] [i_31] [i_31])));
                        /* LoopSeq 3 */
                        for (short i_34 = 0; i_34 < 13; i_34 += 3) /* same iter space */
                        {
                            arr_115 [i_30] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (6537899659076292866LL))) & (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_105 [i_30] [i_30] [i_32])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) arr_105 [i_33 - 2] [i_32 + 1] [i_30 - 2])))))));
                            var_67 ^= ((((/* implicit */int) (signed char)55)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_113 [i_33 + 1] [i_33 + 1] [i_30 - 1] [i_33] [i_31]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_110 [i_30] [i_30] [i_33 + 2] [i_31])) - (34147)))))) < (arr_114 [i_30 - 3] [i_31] [i_31] [i_33 + 2] [i_34])))));
                        }
                        for (short i_35 = 0; i_35 < 13; i_35 += 3) /* same iter space */
                        {
                            arr_119 [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_107 [i_30] [i_30 - 1]))))) % (((/* implicit */int) arr_105 [i_30 + 1] [i_30] [i_30 + 1]))));
                            var_68 ^= ((/* implicit */unsigned short) ((((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-56))))) > (-2199023255552LL))) && (var_15)));
                            var_69 &= ((/* implicit */unsigned short) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_106 [i_31] [i_32 + 2]))))))));
                        }
                        /* vectorizable */
                        for (short i_36 = 0; i_36 < 13; i_36 += 3) /* same iter space */
                        {
                            var_70 &= (!(((/* implicit */_Bool) arr_106 [i_31] [i_32 + 2])));
                            var_71 = ((/* implicit */long long int) (signed char)67);
                            var_72 = ((((/* implicit */_Bool) 3641148170U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
                            var_73 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-22))));
                        }
                    }
                } 
            } 
        } 
    }
    var_74 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (long long int i_37 = 4; i_37 < 10; i_37 += 4) 
    {
        for (short i_38 = 1; i_38 < 10; i_38 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_39 = 2; i_39 < 9; i_39 += 3) 
                {
                    var_75 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_112 [i_37] [i_38] [i_39] [i_38] [i_39 + 1]))));
                    arr_130 [i_37] [i_37] [i_37] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_121 [i_39 - 2] [i_37 + 1] [i_39] [i_37 - 3] [i_38 + 1] [i_37] [i_38 - 1])))) ? (((/* implicit */int) ((unsigned short) arr_121 [i_39 - 2] [i_37 + 1] [i_39 - 2] [i_37 + 1] [i_37 - 2] [i_37 - 2] [i_38 - 1]))) : (((((/* implicit */_Bool) arr_121 [i_39 - 2] [i_37 + 1] [i_38 - 1] [i_37 - 2] [i_38] [i_38 - 1] [i_38 - 1])) ? (((/* implicit */int) arr_121 [i_39 - 2] [i_37 + 1] [i_37 + 1] [i_37 + 1] [i_39] [i_39 - 2] [i_38 - 1])) : (((/* implicit */int) arr_121 [i_39 - 2] [i_37 + 1] [i_37] [i_39 - 2] [i_37] [i_37 + 1] [i_38 - 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_40 = 1; i_40 < 1; i_40 += 1) 
                    {
                        var_76 = ((/* implicit */unsigned int) var_8);
                        arr_133 [i_40 - 1] [i_38] [i_39] [i_38] [i_37 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)62587))));
                        var_77 = ((/* implicit */short) arr_46 [i_39 + 2] [i_39 + 2] [i_37 + 1]);
                    }
                    for (unsigned int i_41 = 0; i_41 < 11; i_41 += 4) 
                    {
                        var_78 = ((/* implicit */long long int) max((var_78), (((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)-2)))))))));
                        /* LoopSeq 1 */
                        for (int i_42 = 0; i_42 < 11; i_42 += 4) 
                        {
                            arr_138 [i_38] [i_38 + 1] [i_38 + 1] [i_38] = ((/* implicit */unsigned char) (+(2465908602U)));
                            var_79 = ((/* implicit */unsigned long long int) var_4);
                            var_80 = ((/* implicit */int) ((((/* implicit */int) var_6)) <= (arr_0 [i_42])));
                            var_81 = ((/* implicit */long long int) var_9);
                            var_82 = ((/* implicit */short) (signed char)-15);
                        }
                    }
                }
                var_83 -= ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_46 [i_38 - 1] [i_37 - 4] [i_38]))))), (min((arr_46 [i_38 + 1] [i_37 - 1] [i_37 - 4]), (((/* implicit */unsigned int) var_2))))));
            }
        } 
    } 
    var_84 = ((/* implicit */unsigned char) max((var_84), (((/* implicit */unsigned char) 2465908602U))));
}
