/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166300
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_1] [8U] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)24955)) ^ (((/* implicit */int) (short)0))))) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                        var_13 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                    }
                } 
            } 
        } 
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))) / (((((/* implicit */_Bool) arr_0 [(unsigned short)13] [(unsigned short)13])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207)))))));
        arr_12 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_15 = ((/* implicit */short) (~(-818201052)));
            var_16 = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_0]))));
            arr_15 [i_0] [16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (-1126865907))))));
        }
        for (int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            arr_29 [i_0] [i_0] [i_6] [(unsigned short)0] [i_0] = ((/* implicit */_Bool) ((arr_26 [i_0] [15ULL] [i_8]) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) arr_0 [i_0] [13ULL])) ? (((/* implicit */int) (unsigned char)136)) : (2050356195)))));
                            arr_30 [8] [i_5] [i_5] [8] [i_7 - 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65522)) % (((/* implicit */int) var_9))));
                            var_17 = ((/* implicit */short) 17U);
                            arr_31 [i_0] [i_0] [i_7] &= ((/* implicit */int) (short)25181);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((_Bool) -1655729590));
                            arr_36 [(unsigned char)4] [i_5] [i_6] [i_9] [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_5] [i_6] [i_9]))) : (arr_32 [i_0] [i_5] [i_6] [i_9] [i_10] [i_6])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_42 [(_Bool)1] [11U] [11U] [14U] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_5] [i_6] [i_5] [i_12]))) & (((((/* implicit */_Bool) -2050356179)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551608ULL)))));
                            arr_43 [(unsigned short)1] [i_0] [(unsigned short)8] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)17814)) ? (((/* implicit */int) arr_14 [i_0] [i_5])) : (((/* implicit */int) (short)-21295))));
                        }
                    } 
                } 
            }
            for (int i_13 = 4; i_13 < 18; i_13 += 3) 
            {
                arr_46 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2011530146)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (signed char)-35))));
                var_19 += ((/* implicit */unsigned short) (_Bool)1);
                var_20 -= ((unsigned char) 0ULL);
                var_21 = ((/* implicit */long long int) (~(-713295147)));
                arr_47 [i_0] [i_5] [i_13] = ((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_40 [i_0] [i_5] [i_13]))))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_15 = 3; i_15 < 20; i_15 += 3) 
                {
                    arr_53 [i_0] [i_14] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_5] [i_15 - 3] [i_15 - 3] [i_15])) ? (arr_33 [i_0] [i_15 - 3] [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (unsigned short)65509))));
                }
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    var_23 &= arr_16 [i_0];
                    arr_56 [18U] [i_14] [i_5] [(signed char)14] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned char)108))) & (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_2 [i_5])) : (var_8)))));
                    var_24 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_14] [i_14]))))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)0)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        arr_59 [i_5] [i_5] [i_14] [19] [i_17] = ((/* implicit */short) arr_3 [i_5] [i_0]);
                        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? ((+(((/* implicit */int) (short)-17830)))) : ((~(((/* implicit */int) var_11))))));
                    }
                }
                for (int i_18 = 4; i_18 < 20; i_18 += 3) 
                {
                    arr_63 [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)26983)) % (((/* implicit */int) (signed char)110)))) >> (((((((/* implicit */_Bool) arr_22 [(short)5])) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_14] [5LL] [i_18] [5LL])) : (((/* implicit */int) var_12)))) - (154)))));
                    var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8192))) : (14342626633221280115ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [11] [i_5]))) : (arr_35 [19U] [i_5]))) : (((/* implicit */long long int) arr_51 [i_18 - 4]))));
                    arr_64 [(short)0] [(short)0] [i_14] [i_18] [(short)0] [i_5] = ((/* implicit */_Bool) (((_Bool)1) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((arr_3 [i_0] [i_18 - 1]) ? (((/* implicit */int) (unsigned short)15948)) : (-256400583)))));
                    arr_65 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned long long int) (!((_Bool)0)));
                }
                var_27 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)54513)) >= (1538503483))) ? (((/* implicit */int) (_Bool)1)) : (((var_8) << (((((/* implicit */int) (short)18230)) - (18229)))))));
                var_28 = ((((/* implicit */_Bool) -555989328)) ? (((/* implicit */int) arr_39 [i_0] [i_5] [i_0] [16U] [(signed char)19] [i_0])) : (((/* implicit */int) arr_39 [i_0] [12ULL] [i_5] [6] [(unsigned char)16] [i_0])));
                /* LoopSeq 1 */
                for (unsigned char i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    arr_70 [i_19] [i_14] [(unsigned short)10] [i_0] [i_0] [(short)17] = ((/* implicit */unsigned char) ((19U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)19537)))));
                    var_29 = (+(((/* implicit */int) (_Bool)1)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 3) /* same iter space */
                    {
                        arr_73 [i_20] [i_5] [i_5] [i_20] [i_5] = ((/* implicit */short) (+(-692860346)));
                        arr_74 [i_20] [i_20] [i_14] [i_20] [(unsigned char)10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_72 [i_0] [i_0] [i_14] [15] [i_20])))))));
                        arr_75 [i_20] [i_20] [i_20] [(short)0] = ((/* implicit */unsigned short) 2147483647);
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? ((-(((/* implicit */int) arr_8 [(short)15] [(short)15])))) : (-86981392))))));
                        arr_80 [i_21] [i_21] [i_19] [i_14] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) ((arr_5 [i_21] [i_5] [i_21]) & (arr_5 [i_0] [i_5] [(short)10])));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 3) /* same iter space */
                    {
                        arr_83 [i_0] [i_5] [17] [i_19] [i_19] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_49 [i_0] [17] [i_0]))))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_1))));
                        arr_84 [i_0] [(unsigned short)14] [i_14] [(unsigned short)14] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) : (((((/* implicit */_Bool) (short)-19537)) ? (16191233033952805114ULL) : (((/* implicit */unsigned long long int) -1612569365))))));
                        arr_85 [i_0] [i_5] [i_14] [i_14] [i_22] &= ((/* implicit */short) 4914025291345060783LL);
                    }
                }
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)19512)))))));
            }
            for (unsigned short i_23 = 3; i_23 < 20; i_23 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_25 = 0; i_25 < 21; i_25 += 3) 
                    {
                        var_33 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [(unsigned char)10])))) ? (((((/* implicit */_Bool) arr_37 [(unsigned short)6] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_3 [(signed char)20] [i_0])) : (((/* implicit */int) (unsigned short)21459)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_55 [i_25] [i_24] [i_23] [i_5])))))));
                        var_34 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)94)))) ? (((/* implicit */long long int) 663192888U)) : ((~(-6197304633746427438LL)))));
                        var_35 += ((/* implicit */int) ((_Bool) (short)0));
                    }
                    for (int i_26 = 0; i_26 < 21; i_26 += 4) 
                    {
                        arr_100 [i_0] [i_5] [i_23] [i_5] [i_26] [i_24] [i_24] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-29085))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_23 + 1])) ? ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_26] [13] [0] [i_5])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((arr_57 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_23 - 3] [i_23 - 3] [i_23 - 3])) || (((/* implicit */_Bool) arr_44 [i_23 - 1] [i_23 - 3] [i_23 - 1]))));
                    }
                    for (int i_27 = 1; i_27 < 18; i_27 += 4) 
                    {
                        arr_104 [i_23] [i_24] = -906609933;
                        var_38 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0]))) : (3631774387U))) >> (((((/* implicit */int) arr_89 [i_0] [i_5] [i_23 + 1] [i_5] [i_27 + 3])) - (41568)))));
                    }
                    for (int i_28 = 2; i_28 < 18; i_28 += 3) 
                    {
                        var_39 = ((/* implicit */short) ((unsigned char) arr_94 [i_28 - 2] [i_28 - 2] [i_23 + 1] [i_23] [i_23]));
                        arr_108 [i_0] [i_5] [i_0] [i_23 - 2] [i_23 + 1] [i_24] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_96 [i_23] [(unsigned short)6] [i_23] [i_0] [i_0])) ? (-1392428216) : (((/* implicit */int) (short)-1))))) ? (arr_62 [i_28] [i_28] [i_28 - 2] [i_28 - 2] [i_28 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_40 = ((/* implicit */short) arr_44 [i_0] [i_0] [i_28 - 2]);
                        arr_109 [i_0] [i_0] [i_23] [i_0] [(unsigned short)7] = ((/* implicit */unsigned int) var_0);
                    }
                    var_41 = ((/* implicit */short) ((arr_101 [(unsigned char)1] [(signed char)16] [i_23 - 2] [i_23] [i_23 + 1] [i_23 - 1]) ? (((/* implicit */int) arr_67 [i_5] [i_5] [i_23 - 2] [16U] [i_23 + 1] [i_24])) : (((/* implicit */int) arr_101 [i_23] [i_23 + 1] [i_23 - 2] [(_Bool)1] [i_23 + 1] [i_23 - 2]))));
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_110 [i_23] [i_29] [i_23 - 3] [i_23 + 1] [i_29] [(short)20]))) | (4294967290U)));
                    var_43 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) var_7))))));
                    var_44 += ((/* implicit */int) arr_2 [i_0]);
                    var_45 *= ((/* implicit */signed char) 3422070723U);
                    arr_112 [i_0] [i_5] [(signed char)1] [i_29] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_23] [i_23 - 3]);
                }
                var_46 = ((/* implicit */_Bool) min((var_46), ((!(((/* implicit */_Bool) var_5))))));
            }
            arr_113 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-15))));
        }
    }
    var_47 = ((/* implicit */_Bool) var_7);
}
