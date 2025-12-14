/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180454
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1719284647706517381LL)) ? (max((((((/* implicit */_Bool) var_4)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) max((arr_0 [i_0]), (arr_1 [i_0])))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)38560), (((/* implicit */unsigned short) arr_1 [(signed char)17]))))))))));
        arr_2 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((arr_1 [(unsigned short)14]), (arr_1 [i_0])))) : (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
        {
            var_14 = (!(((/* implicit */_Bool) (~(((unsigned long long int) (short)19492))))));
            arr_5 [i_0] [i_0] = (unsigned short)26976;
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    arr_15 [i_0] [i_0] [17ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)135))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) arr_7 [i_0]))));
                }
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44170)) ? (((/* implicit */int) arr_11 [i_3] [(short)3] [i_2] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_2]))));
            }
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_17 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_9 [i_0])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    arr_20 [(short)14] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))) * (min((var_9), (((/* implicit */long long int) (unsigned short)24834)))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (unsigned short)38352)) : (((/* implicit */int) (unsigned char)13))))))));
                    var_18 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) (unsigned short)32768))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-111)), ((unsigned short)38559)))) : (((/* implicit */int) var_1)))) - (((/* implicit */int) ((((-5990217284165868954LL) % (((/* implicit */long long int) ((/* implicit */int) var_0))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5])))))))))));
                }
            }
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                var_19 = ((/* implicit */signed char) var_1);
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)49288)) : (((/* implicit */int) (unsigned short)40689))));
                    var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) arr_23 [i_0]))))));
                }
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_9] [i_9] [i_2] [i_2] [i_0]))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) * (arr_10 [i_0] [i_2] [4U] [i_9])));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        arr_33 [i_2] [i_0] = ((/* implicit */signed char) min((((arr_22 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))) : (var_2))), (((/* implicit */unsigned long long int) (!(var_6))))));
                        arr_34 [i_9] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_29 [17] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16))))))), (max(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_10))))));
                        arr_35 [14LL] [(_Bool)1] [i_2] [(unsigned short)12] [i_0] [i_10] = ((/* implicit */signed char) ((var_12) >= (((((/* implicit */_Bool) (unsigned short)54579)) ? (((/* implicit */int) (!(var_6)))) : (((/* implicit */int) min((arr_12 [i_0] [i_0] [i_0] [(unsigned short)20] [i_0] [21U]), (var_7))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [14LL] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5811))) : (arr_3 [i_0] [i_2] [i_2])))) ? (((((/* implicit */_Bool) -7900717752307796904LL)) ? (arr_3 [i_0] [i_2] [i_2]) : (arr_3 [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [(unsigned short)1] [i_2] [i_7] [i_11] [i_11])))))));
                        var_25 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_31 [i_0] [i_2] [i_0] [i_7] [i_9] [i_11])), (var_11))) + (((/* implicit */unsigned long long int) max((343335484496896400LL), (-4780653410677503998LL))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) 7908372667302708780LL))))), (((short) (unsigned short)22103))))) ? ((+((+(((/* implicit */int) arr_19 [i_2] [6U] [1U] [i_9] [i_11])))))) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12637)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)-3)))))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)56))))), (min((((/* implicit */unsigned long long int) var_4)), (arr_21 [7LL] [i_9]))))))))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) 3263613467U))));
                    }
                }
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_29 = ((/* implicit */long long int) 2741285467U);
                arr_43 [i_0] [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) max((arr_12 [i_0] [i_2] [i_2] [i_13] [i_13] [i_13]), (arr_12 [i_0] [i_2] [13LL] [i_13] [i_0] [8U])))), (((((((/* implicit */int) (signed char)-71)) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_13] [i_2] [i_2] [(short)10] [i_2] [i_0])) + (95))) - (6)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_50 [(unsigned char)14] [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (!(arr_44 [i_0] [i_2] [i_13] [i_0])));
                        var_30 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_0)))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (unsigned char)0)) : (var_12)))) * (((unsigned int) arr_19 [15] [20ULL] [i_13] [i_14] [i_15]))));
                    }
                    for (short i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
                    {
                        arr_53 [i_0] [i_2] [i_16] [i_14] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_16] [i_0] [i_13] [i_0] [(short)12])) ? (arr_49 [i_0] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [1LL])))));
                        arr_54 [i_16] [i_14] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) << (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [(_Bool)1] [i_0] [i_13] [i_0] [i_0]))) : (arr_42 [i_13] [i_0] [i_13])))));
                    }
                    for (short i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */signed char) ((var_12) <= ((~(((/* implicit */int) (unsigned char)191))))));
                        var_33 |= ((/* implicit */unsigned char) arr_45 [i_14] [i_2] [i_2]);
                        arr_57 [i_0] [(_Bool)1] [(signed char)13] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (signed char)14);
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_46 [i_13] [(signed char)16]) - (arr_29 [(short)1] [(short)1] [i_13] [(short)1] [(short)1])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) < (7608145933700608436ULL)))) : (((/* implicit */int) (_Bool)0))));
                    }
                    arr_58 [i_0] [i_0] [i_0] [14LL] = ((/* implicit */long long int) (signed char)106);
                }
                /* vectorizable */
                for (signed char i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    arr_61 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)7648))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-15))))))));
                    arr_62 [(signed char)19] [i_2] [i_2] [i_0] = ((/* implicit */short) (unsigned char)17);
                }
                /* vectorizable */
                for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    arr_65 [i_0] [i_13] [i_2] [i_0] [i_0] = ((/* implicit */signed char) 2233785415175766016LL);
                    arr_66 [i_0] [i_0] [9LL] [i_0] [(short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)15719)) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)1330))))) : (((((/* implicit */_Bool) 2741285467U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                    var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [(signed char)16]))));
                    arr_67 [i_0] [19U] [i_13] = ((/* implicit */long long int) ((unsigned short) 2233785415175765998LL));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
                        var_37 = ((/* implicit */unsigned long long int) (unsigned short)0);
                    }
                }
                /* LoopSeq 1 */
                for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)72)) ? (min((((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */int) (short)-1330)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_44 [i_21] [i_21] [i_21] [i_0])) * (((/* implicit */int) arr_44 [i_21] [i_2] [i_13] [i_0]))))));
                    arr_75 [i_0] [8ULL] [9LL] [i_21] = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)33347))))));
                    arr_76 [14] [i_0] [i_2] [i_13] [i_21] = ((/* implicit */unsigned char) (!(var_6)));
                }
            }
            for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 3) 
            {
                arr_79 [7ULL] [(short)16] [i_0] = ((/* implicit */unsigned short) var_7);
                /* LoopSeq 1 */
                for (long long int i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    var_39 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_45 [i_0] [i_0] [i_0])));
                    arr_82 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_60 [i_0] [i_2] [i_22] [i_23])) <= (((/* implicit */int) arr_60 [i_0] [i_2] [i_22] [i_23])))))));
                }
                var_40 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)244), (((/* implicit */unsigned char) var_5)))))) + (((((/* implicit */_Bool) (short)32767)) ? (arr_27 [(signed char)21] [(signed char)21] [(signed char)15] [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8)))))))));
                arr_83 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_71 [16LL] [i_2] [i_22])))) ? (max((arr_45 [i_0] [(signed char)5] [i_22]), (((/* implicit */unsigned int) (short)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_2] [i_22] [(short)21] [i_22])))));
                var_41 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_7)), (2161727821137838080ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (min((((/* implicit */unsigned int) (_Bool)0)), (3234766161U))))))));
            }
            arr_84 [i_0] = ((/* implicit */unsigned int) arr_28 [i_0] [i_2] [12LL] [12LL] [i_2]);
        }
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 22; i_24 += 1) 
        {
            for (unsigned int i_25 = 0; i_25 < 22; i_25 += 4) 
            {
                {
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)62))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_24] [i_25])))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)13]))) == (arr_21 [i_0] [i_25]))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0]))) : (-2305843009213693952LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-15))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 0; i_26 < 22; i_26 += 1) 
                    {
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0U))))))))) - (min((arr_26 [i_0] [i_24] [i_25] [i_26]), (((/* implicit */unsigned int) (_Bool)1))))));
                                arr_98 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (short)15)), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (short)32764))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)12485))))));
                                var_44 *= ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                    arr_99 [i_25] [i_0] [i_25] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_36 [i_0] [i_0]));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_28 = 0; i_28 < 22; i_28 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned short) var_12);
                            var_46 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2199023255551ULL)))) ? (((arr_97 [i_0] [i_24] [i_25] [(unsigned short)8] [i_24]) >> (((((/* implicit */int) var_4)) - (153))))) : (((unsigned long long int) var_3))));
                            arr_106 [i_0] [i_24] [i_0] [i_25] [0LL] [i_0] = ((/* implicit */unsigned short) 2789999938056141220LL);
                        }
                        var_47 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (_Bool)1))));
                        var_48 = ((/* implicit */short) ((2233785415175766020LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58699)))));
                    }
                    for (long long int i_30 = 0; i_30 < 22; i_30 += 4) 
                    {
                        var_49 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-18022)) && (((/* implicit */_Bool) (unsigned char)0)))))));
                        /* LoopSeq 2 */
                        for (signed char i_31 = 0; i_31 < 22; i_31 += 1) 
                        {
                            arr_111 [i_30] [i_0] [i_25] = ((/* implicit */signed char) arr_102 [i_0]);
                            var_50 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)50641)) ? (((/* implicit */int) arr_105 [i_25])) : (((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)15511))))));
                            arr_112 [i_31] [(short)0] [i_25] [i_0] [i_31] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (signed char)6)), (var_2))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)47035)))))));
                        }
                        for (unsigned short i_32 = 0; i_32 < 22; i_32 += 4) 
                        {
                            var_51 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_30]))) : (arr_85 [i_0])));
                            arr_116 [i_0] [i_0] [(unsigned short)18] [i_0] [i_0] [i_0] = ((/* implicit */short) (-((+(((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-9104110623773091351LL)))))));
                            var_52 = ((/* implicit */long long int) ((unsigned int) (signed char)-14));
                            arr_117 [i_0] [(signed char)5] [i_0] [i_30] [(unsigned short)13] [i_24] = ((/* implicit */_Bool) max(((-(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */int) arr_68 [i_32] [i_30] [i_30] [i_25] [i_0] [i_0])) <= (-977913087)))))))));
                        }
                    }
                }
            } 
        } 
        arr_118 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_6)) << (((max((var_11), (var_2))) - (13543153102962931070ULL))))));
    }
    var_53 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))) | (1721936933U))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2))) - (18446744073709551503ULL)))))));
    var_54 = ((/* implicit */unsigned short) var_10);
}
