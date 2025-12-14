/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130385
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_15)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_12), (((/* implicit */short) var_0)))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) ((unsigned char) var_16)))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (6076853435425934526LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) || (((/* implicit */_Bool) var_15))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) max((((arr_1 [i_0 - 2]) << (((arr_1 [i_0 + 1]) - (2006812407U))))), (max((arr_1 [i_0 - 3]), (arr_1 [i_0 + 1])))));
        var_22 = ((/* implicit */unsigned int) ((((_Bool) 495830654)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            arr_6 [i_1] [(short)9] [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */long long int) arr_4 [i_1 + 1] [i_1 + 1] [i_1])) : (arr_3 [i_1 + 1] [i_1 - 1] [i_1]))) == (((/* implicit */long long int) min((arr_4 [i_0 - 2] [i_0 - 2] [i_1 - 1]), (((/* implicit */unsigned int) arr_2 [i_0 - 2])))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_2] [i_1] [i_2] [i_2] [i_4] = ((((/* implicit */_Bool) (~(arr_8 [i_1 - 1] [i_0 - 1])))) ? (min((arr_8 [i_1 + 1] [i_0 + 1]), (arr_8 [i_1 + 1] [i_0 - 2]))) : ((~(arr_8 [i_1 - 1] [i_0 - 2]))));
                            var_23 = ((/* implicit */_Bool) min((arr_14 [i_1 + 1]), (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [0U] [i_2 - 2] [i_2 - 3])) ? (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4]))) : (arr_14 [i_3]))) : (((/* implicit */long long int) arr_8 [i_1 + 1] [i_1 - 1]))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (unsigned char)74)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((-495830664), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1024613279U)) ? (2147483647) : (((/* implicit */int) var_6))))) : (max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) 3270354017U))))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_25 += ((/* implicit */unsigned char) ((((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 1] [i_0]))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 495830654))))))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_7))))) + (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) arr_9 [i_0])) : (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (arr_1 [i_5])))) / (min((((/* implicit */unsigned long long int) var_12)), (arr_13 [i_0] [i_5] [i_0] [i_0] [i_0])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2]))) : (((((/* implicit */_Bool) (unsigned char)253)) ? (arr_3 [i_0] [(_Bool)1] [(short)7]) : (((/* implicit */long long int) arr_7 [i_7] [i_7])))))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 3])) >= ((((_Bool)0) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_2 [i_0]))))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            arr_28 [i_8] [i_6] [(_Bool)0] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1])) + (((/* implicit */int) arr_27 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1]))));
                            var_28 = ((/* implicit */short) ((((1921304243U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_11))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1657158957)) ? (arr_13 [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0 - 2] [i_0] [5U] [9U] [7U]))))));
                            var_30 |= ((/* implicit */unsigned int) (_Bool)1);
                            var_31 = ((/* implicit */unsigned int) (~(7197192438438662810ULL)));
                        }
                        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            arr_32 [i_6] [i_7] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) -671059739)), (4294967295U)));
                            arr_33 [i_6] [i_6] [i_5] [5ULL] [i_9] = ((((/* implicit */_Bool) 1465275100U)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_9] [i_5] [i_5] [i_0])) ? (((/* implicit */int) arr_27 [i_9] [5] [i_6] [i_5] [3U])) : (var_2))) - (((/* implicit */int) arr_23 [i_9] [i_6] [i_5] [i_0]))))) : (((((((/* implicit */_Bool) 1024613281U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_14))) - (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)75), (arr_25 [i_0] [(_Bool)1] [i_6] [i_7] [i_9]))))))));
                        }
                        arr_34 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 4061691745U)))) * (((((/* implicit */_Bool) arr_13 [(unsigned char)8] [i_0 + 1] [i_0] [i_0] [i_0])) ? (arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [(short)0]) : (arr_13 [i_0] [i_0 - 3] [i_0] [i_0] [i_0])))));
                    }
                } 
            } 
            arr_35 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_29 [i_5] [i_5] [i_0] [i_0] [i_5])))))) ? (min((-4325828605475330832LL), (((/* implicit */long long int) arr_1 [i_5])))) : (((/* implicit */long long int) (((~(-1657158957))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))))))));
        }
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) arr_8 [i_10] [i_0]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 3])) ? (arr_13 [i_0 - 3] [(unsigned char)6] [i_0 - 2] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) (~(arr_4 [(_Bool)1] [i_10] [i_10])))))))));
                var_34 += ((/* implicit */_Bool) (short)-15376);
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)17384)) ? (arr_10 [i_0 + 1] [i_0 - 3] [i_11] [(unsigned char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5666)))));
                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0 - 1])) ? (arr_41 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)250)))))));
            }
            for (short i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                arr_46 [i_12] [i_12] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                var_37 = ((/* implicit */short) arr_5 [i_0 - 2] [i_0 - 2]);
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        {
                            arr_51 [(unsigned char)5] [i_10] [i_10] [i_10] [i_12] = (unsigned char)93;
                            arr_52 [i_12] [i_10] [(unsigned char)3] [(unsigned char)3] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0 - 2] [i_0 - 2] [i_0 - 2])) ? ((-(((/* implicit */int) min((arr_19 [i_14] [8U] [i_14] [i_14]), (((/* implicit */short) arr_23 [7U] [i_14] [(unsigned char)3] [i_13]))))))) : (var_18)));
                        }
                    } 
                } 
            }
            var_38 = ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_10])) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0])) : (var_9))), (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0 - 1] [i_0 - 3] [i_0] [i_0] [i_0] [i_0 + 1])))) : (((/* implicit */unsigned long long int) arr_41 [i_10] [i_10] [i_10])));
            arr_53 [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_9 [i_0 - 2])))) ? (max((((/* implicit */unsigned int) arr_9 [i_0 - 3])), (arr_41 [i_0 + 1] [i_10] [i_0 + 1]))) : (((/* implicit */unsigned int) ((arr_9 [i_0 + 1]) / (arr_9 [i_0 - 3]))))));
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_15] [i_0] [i_15] [8LL])) ? (((((/* implicit */int) (short)5666)) * (((/* implicit */int) (short)16132)))) : (((/* implicit */int) (unsigned char)224))))) ? (arr_10 [i_0] [i_10] [i_15] [i_15]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) arr_49 [i_16] [i_15] [i_10] [i_10] [i_0])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_15]))))))))));
                        var_40 = ((/* implicit */_Bool) 4294967295U);
                        var_41 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_10 [i_16] [i_15] [i_15] [i_0]), (((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_0] [9]))))) ? (arr_57 [(_Bool)1] [i_16] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [3U] [i_0] [i_0 - 3] [i_0 - 3]))))) >> (min((((((/* implicit */_Bool) arr_18 [i_0] [i_15] [i_16])) ? (((/* implicit */int) arr_36 [i_16])) : (((/* implicit */int) arr_49 [i_16] [i_10] [i_10] [i_10] [8U])))), (((/* implicit */int) ((arr_3 [i_0] [i_10] [(unsigned char)7]) >= (((/* implicit */long long int) ((/* implicit */int) (short)-5655))))))))));
                    }
                } 
            } 
        }
        for (short i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            arr_62 [i_17] = max((((/* implicit */int) ((109572339U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0 + 1] [i_0 - 3])))))), (((((/* implicit */int) arr_42 [i_0 - 2] [i_0 + 1])) + (((/* implicit */int) arr_42 [i_0 - 1] [i_0 - 1])))));
            var_42 = ((/* implicit */unsigned long long int) (+(((arr_8 [i_0] [i_0 - 3]) ^ (arr_8 [i_0] [i_0 + 1])))));
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_5))), (((/* implicit */long long int) arr_38 [(unsigned char)6] [i_17]))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_15))), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) arr_49 [i_17] [i_0 - 1] [i_0] [i_0] [i_17])))))));
        }
    }
    for (short i_18 = 0; i_18 < 13; i_18 += 2) 
    {
        var_44 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) arr_64 [i_18])) : (((/* implicit */int) arr_63 [i_18]))))) ? (((((/* implicit */_Bool) arr_64 [i_18])) ? (1515347304U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245)))))))), (((/* implicit */unsigned int) max(((+(var_18))), (((/* implicit */int) arr_63 [i_18])))))));
        /* LoopNest 3 */
        for (short i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            for (unsigned char i_20 = 0; i_20 < 13; i_20 += 2) 
            {
                for (int i_21 = 2; i_21 < 9; i_21 += 1) 
                {
                    {
                        var_45 = ((/* implicit */long long int) var_18);
                        var_46 *= ((/* implicit */unsigned char) min((max((((/* implicit */short) (unsigned char)62)), (arr_71 [i_20]))), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_68 [i_21] [i_21] [i_21]) >> (((((/* implicit */int) arr_64 [i_18])) - (49)))))) || (((((/* implicit */int) arr_70 [(_Bool)1] [(_Bool)1] [i_20] [2U] [4LL])) >= (((/* implicit */int) (unsigned char)4)))))))));
                        arr_73 [(_Bool)1] [i_21] = (+(((((/* implicit */_Bool) arr_65 [i_19] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_18] [i_19]))) : (arr_65 [i_19] [i_19]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_22 = 0; i_22 < 13; i_22 += 2) 
        {
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [(unsigned char)5] [i_22])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)251))));
            var_48 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)255))))));
        }
        arr_78 [6U] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_76 [i_18])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_68 [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_75 [i_18])) : (((/* implicit */int) arr_74 [i_18] [i_18]))))) : (max((((/* implicit */long long int) arr_68 [i_18] [11U] [i_18])), (arr_77 [i_18] [i_18] [i_18]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 301998764559043609LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [7] [i_18] [7] [i_18] [8U]))) : (arr_68 [i_18] [i_18] [i_18])))) ? (arr_69 [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_18] [i_18] [i_18] [11LL]))))))));
        var_49 += ((/* implicit */unsigned long long int) arr_65 [i_18] [i_18]);
    }
    var_50 = ((/* implicit */int) max((((/* implicit */unsigned int) var_18)), (min((((3911514384U) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)206)))))))));
    var_51 = ((/* implicit */unsigned int) max((((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_16))) ? (max((((/* implicit */int) var_7)), (var_18))) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 5044683423421690405ULL))))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_2)) != (var_15))))))));
}
