/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156983
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
    var_12 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_5)) - (129))))), (var_4))))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_2))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */_Bool) var_11);
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_8 [(unsigned short)12] &= ((/* implicit */_Bool) ((((_Bool) ((arr_3 [(unsigned char)4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)4])))))) ? (((((/* implicit */_Bool) arr_0 [i_2] [(unsigned char)4])) ? (((/* implicit */int) arr_0 [(unsigned short)18] [(unsigned short)18])) : (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_9))))));
                        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 1])) : (((/* implicit */int) min(((short)21063), ((short)-21036))))))) ? (((((/* implicit */int) arr_5 [(_Bool)1] [i_1 - 1] [(_Bool)1])) * (((/* implicit */int) arr_5 [(_Bool)1] [i_1 - 1] [(_Bool)1])))) : (((/* implicit */int) min((arr_0 [(_Bool)1] [(_Bool)1]), (arr_0 [(unsigned char)16] [(unsigned char)16]))))));
                    }
                } 
            } 
        } 
        arr_9 [(short)18] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) arr_5 [16] [i_0 - 1] [16])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) var_3))))))), (arr_3 [(_Bool)1])));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            arr_13 [i_4] [i_4] [i_0 + 2] |= ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
            /* LoopSeq 3 */
            for (short i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                var_16 *= ((/* implicit */_Bool) max((((var_8) ? (min((((/* implicit */unsigned int) var_1)), (arr_3 [i_4]))) : (min((arr_14 [i_0] [i_0] [i_0 + 1] [i_0]), (((/* implicit */unsigned int) arr_7 [i_5] [i_4] [i_0 + 2] [i_4] [i_0 + 2])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 1964535749))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_0])), ((unsigned short)55423)))) : (((/* implicit */int) var_2)))))));
                arr_17 [i_4] [i_4] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((int) (unsigned short)10113))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_4] [i_4] [i_0])) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2147483647))))))), (((((/* implicit */_Bool) arr_3 [i_4])) ? (((var_6) / (((/* implicit */int) (unsigned char)128)))) : ((((_Bool)0) ? (((/* implicit */int) arr_11 [i_4] [i_5 - 1])) : (var_6)))))));
            }
            for (int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
            {
                var_17 ^= ((/* implicit */unsigned char) var_3);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_7 = 3; i_7 < 20; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        arr_28 [(unsigned char)12] [i_0] [i_6] [i_4] [i_8] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) var_11)) : (var_6)))) ? (arr_3 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        var_18 |= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_7 - 1])) : (((/* implicit */int) var_5)));
                        var_19 &= ((/* implicit */unsigned int) arr_6 [i_4] [i_4]);
                        var_20 *= ((/* implicit */unsigned short) ((unsigned char) arr_14 [i_0 - 1] [i_4] [i_7 - 2] [i_7 + 1]));
                        arr_29 [i_4] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)106))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((var_3) ? (((/* implicit */int) (short)21063)) : ((~(((/* implicit */int) (unsigned char)252)))))))));
                        var_22 ^= ((/* implicit */unsigned char) ((unsigned int) arr_26 [i_0] [i_4] [i_4] [i_7 + 1] [i_0 + 1]));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(arr_18 [i_0 + 2] [i_9] [i_7 + 1] [i_6]))))));
                        var_24 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10987)))))));
                        var_25 ^= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_6)) : (arr_14 [i_0] [i_0] [i_6] [i_7]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_12 [i_0] [i_0 + 1])));
                        var_27 |= (-(((/* implicit */int) arr_0 [i_0 + 2] [i_6])));
                    }
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((_Bool) arr_18 [i_0 - 1] [i_6] [i_0 + 2] [i_0])))));
                    arr_34 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6] &= ((/* implicit */unsigned short) arr_15 [i_7 - 1] [i_4] [i_0 + 1]);
                }
                for (int i_11 = 4; i_11 < 20; i_11 += 2) 
                {
                    var_29 += ((/* implicit */unsigned int) var_6);
                    /* LoopSeq 2 */
                    for (int i_12 = 2; i_12 < 20; i_12 += 2) 
                    {
                        var_30 += arr_15 [i_0] [i_6] [i_6];
                        var_31 = ((/* implicit */int) 2558839501U);
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_3) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_6] [i_0])) : (((/* implicit */int) var_11)))), (((int) -1995985280))))) ? (((((/* implicit */_Bool) arr_0 [i_11] [i_11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24576))))) : (var_6))) : (var_6)));
                        var_33 += ((/* implicit */unsigned short) ((((arr_19 [i_0 + 2] [i_0 + 2] [i_11 - 2] [i_13 + 1]) ? (((/* implicit */int) arr_19 [i_0 + 2] [i_4] [i_11 - 4] [i_13 + 1])) : (var_4))) ^ (((/* implicit */int) arr_0 [i_0 - 1] [i_6]))));
                        var_34 ^= ((/* implicit */unsigned char) min((min((arr_25 [i_11 + 1] [i_13 + 1] [i_0 + 2]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) min((var_3), (var_1))))));
                    }
                    var_35 += ((_Bool) max((((/* implicit */unsigned char) var_9)), ((unsigned char)160)));
                }
                for (short i_14 = 2; i_14 < 17; i_14 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */int) min((var_36), ((+(((/* implicit */int) arr_4 [i_15] [i_14] [i_6]))))));
                        var_37 *= ((/* implicit */_Bool) ((unsigned char) arr_26 [i_14 + 2] [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 + 3]));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_38 &= ((/* implicit */_Bool) min(((unsigned short)10113), (((/* implicit */unsigned short) (_Bool)1))));
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) min((((((/* implicit */_Bool) arr_12 [i_14 + 1] [i_4])) ? (arr_12 [i_4] [i_4]) : (arr_12 [i_0 + 2] [i_6]))), (((/* implicit */unsigned int) ((((_Bool) arr_2 [i_4] [i_4])) ? (((arr_22 [i_16] [i_16] [i_16]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_40 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_17 - 1] [i_4] [i_14] [i_4] [i_0])) ? (var_0) : (((/* implicit */int) arr_7 [i_17 - 1] [i_6] [i_0] [i_6] [i_0]))));
                        var_41 *= ((/* implicit */unsigned short) arr_30 [i_4] [i_4] [i_17 - 1] [i_0 + 1] [i_17 - 1] [i_17 - 1]);
                    }
                    var_42 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) < (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_16 [i_0] [i_6] [i_6] [i_0])))) : (max((((/* implicit */unsigned int) var_11)), (32768U)))))) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) arr_16 [i_6] [i_4] [i_4] [i_0 + 2])), ((unsigned short)10113))), (max((((/* implicit */unsigned short) var_5)), ((unsigned short)6285)))))) : (((/* implicit */int) (_Bool)0))));
                }
                var_43 *= ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned char) max(((_Bool)1), (arr_42 [i_6] [i_0] [14] [i_0] [i_6] [i_6])))), (arr_20 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_4])))), (min((((/* implicit */int) (_Bool)0)), (arr_47 [i_0] [i_0] [i_6] [i_0 - 1] [i_4])))));
                var_44 -= ((/* implicit */short) max((max((arr_12 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) var_11)))), ((((_Bool)1) ? (arr_12 [i_0 + 1] [i_0 + 1]) : (arr_12 [i_0 + 1] [i_0 + 1])))));
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 21; i_18 += 2) /* same iter space */
            {
                var_45 = ((/* implicit */int) arr_25 [i_0] [i_4] [i_0]);
                var_46 = arr_38 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1];
                var_47 &= ((/* implicit */unsigned char) ((arr_22 [i_0] [i_0 + 2] [i_0 + 1]) ? (((/* implicit */int) var_10)) : (((arr_4 [i_0] [i_4] [(short)11]) ? (var_4) : (((/* implicit */int) (_Bool)1))))));
                var_48 += ((/* implicit */unsigned char) arr_24 [i_0] [i_4] [i_18] [i_0 + 1]);
                var_49 *= ((/* implicit */_Bool) var_0);
            }
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                var_50 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_4] [(unsigned char)14] [i_4] [i_19] [i_19] [i_19])) ? (max((max((((/* implicit */unsigned int) arr_45 [i_4] [i_4] [i_4] [i_4] [i_19] [i_19])), (32754U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-21040)) - (((/* implicit */int) arr_20 [i_4] [(_Bool)1] [i_4] [i_4]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_4] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_4] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])))))));
                var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((((/* implicit */int) max((((_Bool) (unsigned short)65535)), ((_Bool)1)))) + (min((-2147483647), (var_4))))))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        arr_57 [i_20] |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_44 [i_20] [i_20]))));
        /* LoopSeq 1 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_52 -= ((/* implicit */_Bool) var_6);
            var_53 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_20] [16])) ? (var_4) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_54 [(_Bool)1]))) < (4294967295U))))));
            var_54 = ((/* implicit */int) min((var_54), (((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1))))));
            arr_61 [i_20] [(_Bool)1] [(_Bool)1] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_56 [i_20]))));
        }
        var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) var_11))));
    }
    for (unsigned short i_22 = 2; i_22 < 16; i_22 += 4) 
    {
        var_56 += ((/* implicit */int) min((((/* implicit */unsigned int) max((((arr_22 [i_22] [i_22] [i_22]) ? (((/* implicit */int) arr_39 [(unsigned char)17] [i_22] [i_22 - 1] [i_22] [i_22] [(unsigned char)17] [i_22 + 1])) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) (unsigned short)45748)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))), (((unsigned int) arr_36 [i_22] [i_22]))));
        var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) max((((/* implicit */int) min((arr_21 [i_22 + 1] [i_22]), (arr_51 [i_22])))), ((~(((/* implicit */int) arr_37 [i_22 - 1] [i_22] [i_22 - 2])))))))));
    }
    for (unsigned int i_23 = 0; i_23 < 24; i_23 += 4) 
    {
        var_58 |= ((/* implicit */unsigned char) min((((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_8))))), (((((/* implicit */_Bool) arr_66 [i_23])) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) (_Bool)0)))) : (arr_65 [i_23])))));
        var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) arr_65 [i_23]))));
        var_60 *= ((/* implicit */unsigned int) min((((/* implicit */int) min((((unsigned short) var_8)), (((/* implicit */unsigned short) min(((_Bool)1), (var_8))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_65 [i_23]) : (arr_65 [i_23])))) ? (((var_9) ? (arr_66 [i_23]) : (((/* implicit */int) (unsigned short)42855)))) : (arr_65 [i_23])))));
    }
    var_61 += ((/* implicit */int) min((5U), (((/* implicit */unsigned int) (-(var_0))))));
}
