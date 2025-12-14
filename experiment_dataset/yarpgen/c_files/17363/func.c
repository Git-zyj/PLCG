/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17363
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_7))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!((_Bool)1))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((unsigned short) ((_Bool) (+(arr_0 [i_0] [i_0])))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 140720308486144ULL)) ? (((/* implicit */int) ((_Bool) (unsigned short)65521))) : (((/* implicit */int) arr_1 [i_0 - 2]))))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_0 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((long long int) arr_2 [i_1 - 1]))));
        var_19 = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) ((short) 15439074152336291305ULL))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) (_Bool)1))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_6))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    {
                        arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (var_8) : (((/* implicit */int) var_2))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 1])) : (var_8)));
                            arr_16 [i_3] [i_3] [i_4 - 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_14 [i_5] [i_5] [i_5] [9ULL] [i_3] [i_2] [(short)12])))) ? (2015175548U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1))))));
                            var_23 = ((/* implicit */int) ((unsigned short) var_4));
                        }
                        for (long long int i_7 = 3; i_7 < 14; i_7 += 2) 
                        {
                            arr_19 [i_3] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_7 - 1] [i_4 + 1] [i_5] [i_4 + 1])) ? (arr_9 [i_7 + 1] [i_5] [(unsigned char)4] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_18 [i_7] [i_4] [i_3] [i_2])))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            arr_23 [i_3] = ((/* implicit */short) (~((((_Bool)1) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2])) : (var_8)))));
                            arr_24 [i_3] [i_4] [8LL] [5ULL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_8 + 1] [i_8 - 1] [i_3])) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) 1277911564U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                            var_26 = ((/* implicit */short) ((int) arr_21 [i_4 - 2] [i_8] [i_8] [i_8 + 1] [i_8 - 1] [i_8]));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_28 [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)21953))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 - 1] [i_3] [i_2 - 1] [i_2 - 1] [i_3] [i_2 - 1])) ? (3483052841U) : (arr_20 [i_4 - 2] [i_3] [i_2 - 1] [i_2 + 1] [i_3] [i_2])));
                        }
                        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1023))));
                            arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((int) (short)-3182));
                        }
                    }
                } 
            } 
            arr_34 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? (3483052841U) : (((/* implicit */unsigned int) var_3))));
        }
        for (unsigned int i_11 = 2; i_11 < 12; i_11 += 4) 
        {
            var_29 = ((/* implicit */int) ((var_4) ? (6703036489921545928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            var_30 = ((/* implicit */_Bool) ((arr_1 [i_11 + 4]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_11 + 4]))));
        }
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned int i_15 = 1; i_15 < 14; i_15 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_45 [i_2] [4U] [i_2 + 1] [i_2] [i_2 - 1])) ? (arr_38 [i_12] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                            var_32 = ((/* implicit */int) ((unsigned int) 196650603655299944ULL));
                        }
                    } 
                } 
                arr_48 [(unsigned char)1] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_2 - 2] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)26879)))) : (arr_4 [i_2])));
                var_33 = (~(((/* implicit */int) var_6)));
            }
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((long long int) (unsigned short)65535)))));
        }
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_53 [i_16] = ((((/* implicit */_Bool) ((int) arr_45 [i_16] [i_16] [i_16] [i_16] [i_2]))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_16])) ? (arr_27 [14ULL] [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_16] [i_16] [i_2] [i_16] [i_2] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_49 [i_16] [i_2 - 2] [i_16])) ? (((/* implicit */int) arr_8 [i_16])) : (((/* implicit */int) (unsigned short)30)))) : (((/* implicit */int) ((unsigned short) (unsigned short)26879)))));
            var_36 = (+((-(arr_26 [(unsigned short)8] [i_16]))));
        }
        /* LoopSeq 2 */
        for (short i_17 = 1; i_17 < 14; i_17 += 2) 
        {
            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((_Bool) ((unsigned int) arr_2 [i_17]))))));
            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (2015175548U) : (((/* implicit */unsigned int) var_8)))))));
            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_35 [i_2])) : (((/* implicit */int) arr_18 [i_2] [i_17] [i_2] [i_17 - 1]))))))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((unsigned char) var_6)))));
            arr_61 [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)7459))));
        }
        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((long long int) (+(arr_20 [i_2] [i_2] [10U] [i_2 + 1] [i_2] [i_2])))))));
    }
    for (unsigned short i_19 = 2; i_19 < 22; i_19 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (short i_21 = 3; i_21 < 22; i_21 += 3) 
            {
                {
                    arr_69 [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_68 [i_20] [i_20] [(unsigned char)11]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) 690595106)))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_68 [i_19] [i_19] [i_19])) : (((/* implicit */int) (unsigned short)65531))))))) : (((unsigned long long int) arr_67 [i_19 - 2] [i_21 - 2] [i_21] [i_21]))));
                    /* LoopSeq 3 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_73 [i_22] [(unsigned short)2] [i_22] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)0))))));
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (-(((/* implicit */int) ((_Bool) (_Bool)1))))))));
                    }
                    for (int i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        var_43 = ((/* implicit */int) min((var_43), (((int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)14635)) : (((/* implicit */int) var_4)))))));
                        var_44 = ((/* implicit */unsigned int) ((unsigned char) ((arr_62 [i_21 - 3]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65517)) ? (var_8) : (((/* implicit */int) var_2))))) : (16775168U))));
                    }
                    for (unsigned short i_24 = 1; i_24 < 23; i_24 += 4) 
                    {
                        arr_78 [i_19] [i_24] = ((/* implicit */int) (-((~(628110260225077651ULL)))));
                        arr_79 [i_19] [i_19] [i_19] [(_Bool)1] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10))))))) ? ((~(((/* implicit */int) (short)-3504)))) : (((/* implicit */int) ((short) (short)-3506)))));
                        var_45 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((_Bool) 1ULL))) : ((+(((/* implicit */int) var_5))))));
                        var_46 = ((/* implicit */short) ((long long int) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (short)32746))) : (arr_65 [i_19]))));
                    }
                }
            } 
        } 
        var_47 = ((/* implicit */long long int) ((((_Bool) arr_67 [i_19] [i_19] [i_19 - 2] [i_19])) ? ((-(((/* implicit */int) var_5)))) : (((int) ((short) (_Bool)1)))));
        /* LoopSeq 1 */
        for (short i_25 = 1; i_25 < 23; i_25 += 1) 
        {
            arr_83 [i_19] [i_19] [i_25 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_4)))));
            arr_84 [17LL] [21U] [i_19] = ((/* implicit */_Bool) (~((~((-(((/* implicit */int) var_6))))))));
            arr_85 [i_19] [i_19] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_77 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11143745164952242464ULL))));
            /* LoopSeq 2 */
            for (int i_26 = 0; i_26 < 25; i_26 += 3) 
            {
                arr_88 [i_19] [i_25 - 1] [i_26] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_62 [i_19 + 1])))))))));
                var_48 = ((/* implicit */unsigned long long int) max((var_48), (((((/* implicit */_Bool) ((unsigned int) (unsigned short)14627))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 743528143U)) ? ((-2147483647 - 1)) : (-956793642)))) : (((var_11) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_19 - 1] [i_25] [i_26] [i_25])))))))));
                /* LoopNest 2 */
                for (short i_27 = 2; i_27 < 24; i_27 += 1) 
                {
                    for (short i_28 = 0; i_28 < 25; i_28 += 2) 
                    {
                        {
                            arr_96 [i_25 + 2] [i_27 - 2] [(_Bool)1] [i_25 + 2] [(short)24] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_74 [i_19 + 2] [i_25 - 1] [i_27 + 1] [i_27 - 2]))))) ? (((/* implicit */int) ((short) arr_74 [i_19 + 2] [i_25 + 2] [i_27 + 1] [i_27 + 1]))) : (((/* implicit */int) ((_Bool) 3345071113930689994ULL)))));
                            var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((short) (~(((/* implicit */int) ((_Bool) var_1)))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_30 = 0; i_30 < 25; i_30 += 1) 
                {
                    for (unsigned int i_31 = 1; i_31 < 21; i_31 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((((/* implicit */_Bool) 7302998908757309152ULL)) ? (((/* implicit */int) arr_102 [i_31] [i_29 - 1] [i_29 - 1] [i_25 - 1] [i_25] [i_25])) : (((/* implicit */int) arr_102 [i_31] [i_31] [i_31] [i_25 + 2] [i_19] [0ULL])))))));
                            var_51 = ((/* implicit */unsigned short) ((_Bool) var_7));
                            var_52 = ((/* implicit */unsigned short) ((unsigned int) arr_89 [i_25 + 2] [i_19 + 3]));
                            var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) (!(((/* implicit */_Bool) arr_87 [i_19])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 25; i_32 += 2) 
                {
                    for (unsigned int i_33 = 0; i_33 < 25; i_33 += 2) 
                    {
                        {
                            var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)33165))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7677849141579818313LL))))))));
                            arr_111 [i_32] [i_29] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned char) arr_66 [i_19])));
                            var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((long long int) arr_106 [i_19] [i_19])) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                            var_56 = ((/* implicit */short) ((_Bool) 3262539475248634964LL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    for (unsigned short i_35 = 0; i_35 < 25; i_35 += 4) 
                    {
                        {
                            arr_118 [i_35] [i_29] [i_29] [i_25 - 1] [i_29] [i_19] = ((/* implicit */_Bool) (-(((unsigned int) 0ULL))));
                            var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) ((int) (unsigned short)65525)))));
                            var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) ((_Bool) (_Bool)1)))));
                        }
                    } 
                } 
                var_59 = ((/* implicit */long long int) min((var_59), (((/* implicit */long long int) ((((/* implicit */_Bool) 1870234737308465630ULL)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_60 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (short)14881)))));
            }
            var_61 = ((/* implicit */long long int) min((var_61), (((((/* implicit */_Bool) (-(((arr_90 [i_25] [i_25] [i_19 + 3] [i_19] [(_Bool)1] [i_19 + 2]) ? (((/* implicit */int) arr_66 [i_19 + 3])) : (((/* implicit */int) (unsigned short)65535))))))) ? (((long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)1)))))))))));
        }
    }
    var_62 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1693502873U)))) ? (((((/* implicit */_Bool) var_13)) ? (-34083929) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_5)))));
    var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) var_4))));
    var_64 = ((/* implicit */int) max((var_64), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((unsigned int) (unsigned short)50905))))))))));
}
