/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119827
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_7))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_12 ^= ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 3])) >= (((/* implicit */int) arr_2 [i_0 - 3]))))) >> ((((+((+(((/* implicit */int) (signed char)-10)))))) + (27))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-(((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] [(short)5] [(unsigned char)9] [i_2] = ((/* implicit */unsigned short) arr_4 [i_4]);
                            arr_17 [i_2] [2U] [i_2] [(signed char)9] [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 1]))));
                        }
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)7))))));
        arr_19 [i_0 + 1] = ((/* implicit */unsigned int) (unsigned short)19015);
        var_14 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 12; i_5 += 3) 
    {
        var_15 += ((/* implicit */signed char) (+(-130250806065251269LL)));
        arr_24 [i_5] [i_5] = ((/* implicit */_Bool) var_6);
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                {
                    arr_31 [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-125))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_34 [i_8] [i_7] [i_6 - 1] [(short)11] = (~(((/* implicit */int) (signed char)-63)));
                        arr_35 [i_5] = ((/* implicit */unsigned long long int) (~(arr_29 [i_8] [i_7] [i_7] [i_8])));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */int) (signed char)0)) << (((/* implicit */int) var_7)))) ^ (((/* implicit */int) (_Bool)1)))))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_6 + 1])) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16887))))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)13805))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_5 + 1])) >= (((/* implicit */int) (signed char)-47)))))));
                    }
                    var_20 = ((/* implicit */unsigned int) ((arr_22 [i_5 - 2]) >> (0ULL)));
                }
            } 
        } 
    }
    var_21 |= ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_7))));
                        var_23 += ((/* implicit */signed char) max(((+(((/* implicit */int) arr_40 [i_10] [i_11])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_10] [i_11] [i_12])))))));
                        arr_48 [i_12] [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_47 [i_10] [i_11] [i_11] [i_12] [i_13])))) && (((/* implicit */_Bool) ((unsigned int) ((4294967295U) % (((/* implicit */unsigned int) -2066495020))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 14; i_14 += 1) 
        {
            for (signed char i_15 = 4; i_15 < 13; i_15 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) arr_46 [i_10] [16U] [i_15 - 1] [(signed char)3] [i_14] [i_10]);
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [i_10] [i_14 + 1] [i_15 - 4] [i_15]))))))))));
                    var_26 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) & (min((arr_47 [8LL] [i_14] [(short)6] [i_15] [i_15]), (((/* implicit */unsigned long long int) arr_41 [i_14])))))))));
                    arr_53 [i_10] [i_14] [i_15] = ((/* implicit */unsigned char) (_Bool)0);
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (_Bool)1))));
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_15 - 2] [i_16] [9LL])) * ((~(((/* implicit */int) var_8))))));
                                var_29 &= ((((((/* implicit */int) (signed char)-10)) * (((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_47 [i_10] [i_14] [i_15] [i_15] [i_17]), (((/* implicit */unsigned long long int) (unsigned char)246)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_30 -= ((/* implicit */short) (!(((((/* implicit */int) (short)-16208)) < (((/* implicit */int) arr_56 [i_18] [i_18] [i_18] [i_18]))))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)246))))) == (((min((((/* implicit */long long int) (unsigned short)25381)), (arr_43 [i_18]))) * (((/* implicit */long long int) ((((/* implicit */int) arr_55 [i_18] [(unsigned short)0] [i_18] [i_18] [i_18])) / (((/* implicit */int) (signed char)42)))))))));
        /* LoopNest 2 */
        for (unsigned int i_19 = 1; i_19 < 15; i_19 += 4) 
        {
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 2; i_21 < 15; i_21 += 2) 
                    {
                        for (unsigned int i_22 = 1; i_22 < 13; i_22 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) ((signed char) (signed char)-66));
                                arr_75 [i_18] [(short)6] [i_20] [i_21] [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) (short)1964))));
                                arr_76 [i_18] [i_19] [(signed char)2] [(signed char)2] [i_22 + 1] [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -2131788677))))) << ((+(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_33 = arr_52 [i_20] [i_19 + 1] [i_18] [i_18];
                    arr_77 [0U] [0U] &= ((-2744430494975355155LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)99))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_23 = 0; i_23 < 17; i_23 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_24 = 0; i_24 < 17; i_24 += 1) 
            {
                var_34 = (i_18 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) arr_78 [i_18] [i_24])) >> (((((/* implicit */int) arr_78 [i_18] [i_23])) - (99)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_78 [i_18] [i_24])) >> (((((((/* implicit */int) arr_78 [i_18] [i_23])) - (99))) + (88))))));
                var_35 = (!(((/* implicit */_Bool) 1783523715)));
            }
            for (unsigned short i_25 = 1; i_25 < 15; i_25 += 4) 
            {
                var_36 = ((/* implicit */signed char) arr_51 [i_25 + 2] [14U] [i_18]);
                /* LoopSeq 4 */
                for (int i_26 = 0; i_26 < 17; i_26 += 1) 
                {
                    arr_91 [i_18] [i_18] [i_25] [i_26] = ((/* implicit */unsigned short) var_3);
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)63)) < (((/* implicit */int) (short)-28195))));
                    arr_92 [i_18] [i_25] [i_23] [i_18] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)33101))));
                }
                for (signed char i_27 = 2; i_27 < 15; i_27 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)36107)) > (((/* implicit */int) (unsigned short)48648))))) % (arr_49 [i_27 + 2] [i_25 + 2] [i_25 + 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 0; i_28 < 17; i_28 += 3) 
                    {
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */long long int) -2060243367)) - (6728654575640754231LL))))));
                        arr_97 [i_18] [i_27] [i_18] = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                        var_40 = ((/* implicit */signed char) ((unsigned short) (signed char)63));
                    }
                    arr_98 [(unsigned char)14] [i_23] |= ((/* implicit */signed char) (((-(((/* implicit */int) (short)-31215)))) + ((~(((/* implicit */int) var_9))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_29 = 0; i_29 < 17; i_29 += 3) 
                    {
                        arr_101 [i_29] [(_Bool)1] [i_18] [i_18] [i_23] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) (!(var_8)))) - ((-(497773745)))));
                        arr_102 [i_18] [(signed char)7] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_4))))));
                        var_41 |= ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)30)))) << (((((/* implicit */int) var_9)) + (87)))));
                    }
                }
                for (signed char i_30 = 2; i_30 < 15; i_30 += 3) /* same iter space */
                {
                    arr_106 [i_18] [(_Bool)1] [(signed char)3] [i_18] [i_30] [i_30] = arr_88 [i_18] [i_23];
                    arr_107 [(_Bool)1] [i_18] [(_Bool)1] = ((/* implicit */_Bool) var_9);
                }
                for (int i_31 = 0; i_31 < 17; i_31 += 1) 
                {
                    var_42 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)201))));
                    arr_111 [i_18] = ((/* implicit */int) arr_80 [i_23] [i_18]);
                    var_43 = ((/* implicit */_Bool) (+(arr_45 [i_25 - 1] [i_25] [i_25])));
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_32 = 0; i_32 < 17; i_32 += 4) 
            {
                arr_114 [i_18] = ((/* implicit */unsigned short) arr_99 [i_18]);
                /* LoopSeq 1 */
                for (short i_33 = 1; i_33 < 16; i_33 += 1) 
                {
                    var_44 |= ((/* implicit */_Bool) ((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12053))))) << ((+(((/* implicit */int) (_Bool)1))))));
                    var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
                    arr_118 [i_18] [i_32] |= ((/* implicit */short) arr_80 [i_18] [i_32]);
                    var_46 = ((/* implicit */unsigned short) arr_84 [i_18] [14U] [i_32] [i_32]);
                    arr_119 [(short)7] [i_18] [i_18] [i_18] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_18] [i_32])))))));
                }
                arr_120 [(unsigned short)14] [i_23] [i_18] [i_32] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_85 [i_18] [i_18] [i_18]))));
            }
        }
        for (long long int i_34 = 1; i_34 < 16; i_34 += 1) 
        {
            var_47 = ((/* implicit */short) (((+(arr_66 [i_18] [i_34] [i_18] [1LL]))) < (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (497773745))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                var_48 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                var_49 = (unsigned char)255;
            }
            var_50 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)87))) / (arr_72 [i_18] [i_18] [(unsigned short)2] [i_18] [i_18] [i_18] [i_18]))) == (((arr_72 [i_18] [i_18] [i_18] [(_Bool)0] [i_34 - 1] [i_34] [i_18]) - (arr_72 [i_18] [i_18] [i_18] [i_34 - 1] [i_34] [i_34 - 1] [i_18])))));
        }
        arr_127 [i_18] [i_18] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)178))))))))));
    }
    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) /* same iter space */
    {
        arr_131 [i_36] = (i_36 % 2 == 0) ? (((/* implicit */_Bool) min(((+(((/* implicit */int) (short)3134)))), (((((/* implicit */int) arr_79 [i_36])) << (((((/* implicit */int) arr_79 [i_36])) - (204)))))))) : (((/* implicit */_Bool) min(((+(((/* implicit */int) (short)3134)))), (((((/* implicit */int) arr_79 [i_36])) << (((((((/* implicit */int) arr_79 [i_36])) - (204))) + (104))))))));
        arr_132 [i_36] [i_36] = ((/* implicit */_Bool) (~((~(min((-497773745), (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (long long int i_37 = 3; i_37 < 16; i_37 += 1) 
        {
            for (long long int i_38 = 1; i_38 < 16; i_38 += 1) 
            {
                {
                    arr_140 [i_36] [i_37 - 1] [i_38] = ((/* implicit */_Bool) min((((/* implicit */long long int) (short)-9)), (-1677505094859055162LL)));
                    /* LoopSeq 1 */
                    for (short i_39 = 0; i_39 < 17; i_39 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) 2467723061U))));
                        var_52 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_88 [(short)12] [i_37 - 3])) != (arr_99 [i_37 - 2]))))));
                        var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) var_2))));
                        var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    }
                }
            } 
        } 
    }
}
