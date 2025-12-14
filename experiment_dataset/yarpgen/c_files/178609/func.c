/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178609
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_4 [(unsigned short)4] |= ((/* implicit */unsigned int) ((((-1052052795) < (((/* implicit */int) var_9)))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (var_10))))));
        arr_5 [10LL] [10LL] |= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) 1)))));
    }
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = (((!(((/* implicit */_Bool) ((unsigned long long int) var_12))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-87))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62288))));
        arr_9 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_4)), (((((960206343421976303ULL) > (((/* implicit */unsigned long long int) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))) : (((unsigned long long int) (unsigned short)57342))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)57342)))));
        var_15 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
    }
    /* vectorizable */
    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_12))));
            var_17 = ((/* implicit */int) max((var_17), (((2147483647) & (((/* implicit */int) var_8))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (960206343421976303ULL)))) ? (((((/* implicit */int) (unsigned short)0)) * (var_2))) : (((((/* implicit */_Bool) (unsigned short)31431)) ? (var_6) : (((/* implicit */int) var_5)))))))));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_19 = ((/* implicit */long long int) var_6);
                arr_20 [i_3] [i_4] = ((/* implicit */long long int) (+(var_13)));
            }
            for (short i_6 = 4; i_6 < 15; i_6 += 2) 
            {
                var_20 = ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_9))));
                arr_23 [i_4] [i_6] = ((((/* implicit */_Bool) var_4)) ? (((6144) * (((/* implicit */int) (unsigned short)35572)))) : (((/* implicit */int) ((var_2) <= (((/* implicit */int) var_9))))));
                arr_24 [i_6] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) * (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_8)))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((long long int) ((-1011123123) >= (((/* implicit */int) var_5))))))));
            }
        }
        for (signed char i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
        {
            arr_28 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((var_8) ? (3316041352U) : (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (572438267))))));
            arr_29 [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_11);
            arr_30 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (var_12)));
            arr_31 [i_3] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8188))))) : ((-(((/* implicit */int) (signed char)-87))))));
        }
        for (signed char i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                arr_39 [i_3] [i_3] [i_9] |= ((/* implicit */unsigned char) ((unsigned int) -1191986482));
                arr_40 [i_3] [i_8] [i_9] [i_9] = (unsigned short)57322;
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 3) 
                {
                    arr_43 [i_10] [i_8] |= ((int) (unsigned short)57326);
                    arr_44 [i_3] [i_8] [i_9] [i_10] [i_9] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (var_13) : (var_13))) - (((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                }
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    arr_48 [i_3] = ((/* implicit */int) var_11);
                    var_22 = ((/* implicit */unsigned short) 23U);
                    var_23 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)5690))));
                    /* LoopSeq 4 */
                    for (long long int i_12 = 2; i_12 < 17; i_12 += 3) 
                    {
                        arr_52 [i_3] [i_3] [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_6) + (2147483647))) >> (((((/* implicit */int) (signed char)92)) - (92)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) : ((-(var_2)))));
                        arr_53 [i_3] [i_8] [i_9] [i_11] [i_12] = (~(((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned short)8221)))));
                        arr_54 [i_12] [i_8] [i_3] = var_12;
                        arr_55 [i_11] [i_8] [i_9] [i_8] [i_12] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)27815))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) / (var_13))) : (((/* implicit */unsigned long long int) 287931924002921540LL))));
                        arr_56 [i_12] [i_11] [i_9] [i_8] [i_3] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_12))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57314))) == (var_1)))))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 15; i_13 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48352))))) * (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 943669347)))))));
                        arr_61 [i_8] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 3482055837U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)14732)))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        var_25 = (unsigned short)65535;
                        var_26 ^= ((((/* implicit */long long int) var_10)) & ((+(var_12))));
                        arr_65 [i_14] [i_8] [i_11] [i_14] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) var_9)))));
                        arr_66 [i_11] [i_14] [i_9] [i_11] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) var_5))))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) (-(-462993673))))));
                    }
                    for (short i_15 = 2; i_15 < 15; i_15 += 1) 
                    {
                        arr_70 [i_3] [i_15] [i_3] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_9))))));
                        arr_71 [i_15] [i_15] = ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))));
                        var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13)))));
                    }
                }
                for (int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    arr_75 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) var_9))))) : (((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))))))));
                    var_29 ^= ((/* implicit */int) (-(((var_13) & (((/* implicit */unsigned long long int) var_10))))));
                    var_30 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) (-2147483647 - 1)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 2; i_17 < 17; i_17 += 4) 
                    {
                        arr_78 [i_3] [i_8] [i_9] [i_16] [i_17] = ((/* implicit */short) 4294967295U);
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)81)))) : ((-(var_0))))))));
                    }
                }
            }
            /* LoopSeq 3 */
            for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                var_32 |= ((/* implicit */short) ((long long int) var_12));
                arr_82 [i_3] [i_18] [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 2147483631)))));
                arr_83 [i_3] = ((var_8) ? (((/* implicit */int) ((unsigned char) var_2))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) (unsigned char)62))))) ? (((/* implicit */unsigned long long int) -9223372036854775805LL)) : (((unsigned long long int) (unsigned short)0))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_34 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)12)) ? (0) : (524287))) * (((/* implicit */int) ((var_2) < (((/* implicit */int) var_9)))))));
                /* LoopSeq 3 */
                for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
                    {
                        var_35 ^= ((/* implicit */unsigned short) (~((~(var_10)))));
                        arr_91 [i_21] [i_19] = -7762617504289881518LL;
                        arr_92 [i_3] [i_8] [i_19] [i_20] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (var_10)))) ? ((~(((/* implicit */int) (unsigned short)4)))) : (((((/* implicit */int) var_9)) << (((((/* implicit */int) (signed char)-88)) + (97)))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_22 = 0; i_22 < 18; i_22 += 1) 
                    {
                        arr_95 [i_3] [i_8] [i_19] = ((/* implicit */signed char) ((var_13) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57315)) ? (var_2) : (((/* implicit */int) (_Bool)1)))))));
                        var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)16))));
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_3)) : (1102924299)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32443))) : (var_1)))));
                        arr_96 [i_8] [i_19] [i_20] [i_22] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 12677905432086219634ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (17486537730287575312ULL))))) : (((unsigned int) var_9))));
                    }
                    var_38 = ((/* implicit */long long int) ((((unsigned long long int) (_Bool)0)) * (((/* implicit */unsigned long long int) (-(3189492750U))))));
                    arr_97 [i_3] [i_19] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) 22ULL);
                }
                for (unsigned int i_23 = 3; i_23 < 14; i_23 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_24 = 2; i_24 < 16; i_24 += 1) 
                    {
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (signed char)67))))) ^ (((long long int) var_10)))))));
                        arr_102 [i_19] [i_8] [i_19] [i_23] [i_24] [i_3] [i_8] = ((((/* implicit */int) (!(((/* implicit */_Bool) -8421021037033392304LL))))) * (((/* implicit */int) ((unsigned short) (unsigned short)17919))));
                    }
                    arr_103 [i_23] [i_23] = ((/* implicit */long long int) (+(var_0)));
                    var_40 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                }
                for (unsigned short i_25 = 0; i_25 < 18; i_25 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_26 = 2; i_26 < 17; i_26 += 4) 
                    {
                        arr_108 [i_26] [i_26] [i_25] [i_3] [i_8] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) ((unsigned short) (signed char)-65)))));
                        var_41 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) var_7)));
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((int) var_11)))));
                        var_43 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) (_Bool)1)));
                        arr_109 [i_3] [i_3] [i_19] [i_25] [i_26] = ((/* implicit */unsigned short) ((unsigned char) var_0));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_27 = 0; i_27 < 18; i_27 += 4) 
                    {
                        arr_112 [i_3] [i_8] [i_19] [i_8] [i_25] [i_27] = ((/* implicit */int) (unsigned char)237);
                        arr_113 [i_3] [i_8] [i_19] [i_25] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) : (18446744073709551598ULL)))) ? (((((/* implicit */int) (unsigned short)18513)) / (((/* implicit */int) (_Bool)1)))) : (var_2)));
                        arr_114 [i_3] [i_8] [i_19] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1045909717))))));
                        var_44 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) var_6))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_8))));
                    }
                    for (unsigned long long int i_28 = 0; i_28 < 18; i_28 += 1) 
                    {
                        var_45 = ((/* implicit */int) min((var_45), (((((/* implicit */int) (!(((/* implicit */_Bool) -6552579294464624374LL))))) % (((/* implicit */int) (signed char)127))))));
                        var_46 |= ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) * (960206343421976303ULL))));
                    }
                    arr_118 [i_3] [i_8] [i_19] [i_19] [i_25] [i_19] |= ((/* implicit */int) var_1);
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (468170683)));
                }
                arr_119 [i_19] [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) * (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */int) (unsigned char)200)) & (((/* implicit */int) (unsigned short)65523)))) : (((/* implicit */int) (unsigned short)0))));
                var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8221)) ? (5768838641623331977ULL) : (((/* implicit */unsigned long long int) var_12)))))));
            }
            for (unsigned long long int i_29 = 3; i_29 < 16; i_29 += 3) 
            {
                arr_124 [i_3] [i_8] [i_8] [i_29] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-1893)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_8))))));
                var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) : (var_7)));
                arr_125 [i_29] [i_29] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)8940)) : (((/* implicit */int) var_3)))) >> (((((/* implicit */int) (unsigned short)43921)) - (43916)))));
                var_50 = ((/* implicit */short) 8941829894018014062ULL);
                arr_126 [i_8] [i_8] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-8))));
            }
        }
        var_51 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -654530986131553766LL)) ? (((/* implicit */unsigned int) var_10)) : (var_7)))));
    }
    var_52 ^= ((/* implicit */unsigned short) (signed char)66);
    var_53 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) -1822508654)))))))) == (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_9)))))))));
    /* LoopSeq 1 */
    for (int i_30 = 0; i_30 < 18; i_30 += 1) 
    {
        var_54 = (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)38963)))))));
        arr_129 [i_30] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (signed char)-113)))))) : (((unsigned long long int) ((var_4) - (((/* implicit */int) var_11)))))));
        arr_130 [i_30] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)29)) ? (var_13) : (((/* implicit */unsigned long long int) var_7))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((unsigned int) 7762617504289881511LL))) : (((14680064ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    }
}
