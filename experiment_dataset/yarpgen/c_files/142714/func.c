/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142714
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)4095)))) * ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            var_20 &= (_Bool)1;
            var_21 = ((/* implicit */_Bool) max((var_15), (((/* implicit */short) arr_3 [i_0] [i_1 + 2]))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_22 |= ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_2])))))), (((((/* implicit */int) max((((/* implicit */short) var_3)), (arr_6 [i_0] [i_0])))) - (((/* implicit */int) (!((_Bool)1))))))));
                        var_23 |= ((/* implicit */unsigned char) arr_7 [i_0] [(short)17] [i_2] [i_2] [i_3]);
                    }
                } 
            } 
            arr_9 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((((/* implicit */int) max((var_7), (((/* implicit */short) arr_2 [i_1 - 1]))))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)10))))))));
        }
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */int) (short)-6)) - (((/* implicit */int) arr_1 [i_0] [i_4])))) : (((/* implicit */int) (short)32762)))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (short)-7687))))), (min(((short)6986), ((short)1946))))))));
            var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_5 [i_0] [i_4])), (((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (short)-26455)) : (((/* implicit */int) arr_10 [(_Bool)1]))))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            arr_17 [i_0] [i_5] = ((/* implicit */short) (!(((_Bool) min((var_11), (var_12))))));
            /* LoopSeq 4 */
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_25 = ((short) ((short) ((((/* implicit */_Bool) arr_13 [i_0] [i_5])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10)))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_9), (arr_6 [i_0] [i_0])))) & (((((/* implicit */int) (unsigned char)127)) | (((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) (short)-26455)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)22861))))))));
            }
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) (short)-12734)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((short)12750), (((/* implicit */short) arr_10 [i_8])))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_29 [i_0] [i_5] [i_5] [i_5] [i_7] [i_8 - 1] [i_9] |= ((/* implicit */unsigned char) var_9);
                        var_28 = min((max((((/* implicit */unsigned char) var_11)), ((unsigned char)241))), (((/* implicit */unsigned char) arr_7 [i_8] [(short)11] [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                        var_29 = ((/* implicit */short) var_11);
                    }
                    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_30 *= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)1)), (((arr_7 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]) ? (((/* implicit */int) arr_7 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_7 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))));
                        var_31 = (!(((((/* implicit */int) (unsigned char)9)) < (((/* implicit */int) max((((/* implicit */short) (unsigned char)148)), ((short)7679)))))));
                        arr_33 [i_0] [i_7] [i_0] [i_8] [i_10] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((_Bool) arr_19 [i_0] [i_5] [i_7]));
                        arr_34 [i_0] [i_8] [i_7] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_7 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [(unsigned char)17]);
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_37 [i_7] [i_0] [i_11] [i_11] [i_0] [i_0] = ((/* implicit */unsigned char) max((min((arr_36 [i_7] [i_8] [i_11] [i_8] [i_8 - 1]), (arr_36 [i_7] [(unsigned char)17] [i_11] [i_8] [i_8 - 1]))), (((short) arr_36 [i_7] [i_8 - 1] [i_11] [i_8 - 1] [i_8 - 1]))));
                        var_32 = ((/* implicit */short) ((((((/* implicit */int) arr_24 [i_0] [i_5] [i_7])) < (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_5] [i_8 - 1])), (arr_14 [i_11])))))) ? ((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) arr_27 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1])))) : ((+(((/* implicit */int) (short)8832))))));
                    }
                    for (unsigned char i_12 = 2; i_12 < 17; i_12 += 3) 
                    {
                        arr_40 [i_12] [i_8] [i_7] [i_8] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) max((arr_36 [i_0] [i_5] [i_12] [i_8 - 1] [i_12]), (((/* implicit */short) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)7683)) ? (((/* implicit */int) (short)56)) : (((/* implicit */int) (unsigned char)193)))) : (((/* implicit */int) arr_35 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))));
                        var_33 = ((/* implicit */unsigned char) max((var_33), ((unsigned char)163)));
                    }
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned char)156))) & (((/* implicit */int) (!(var_11))))));
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) max((((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_5] [i_7] [i_8 - 1] [i_8 - 1]))) * ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) min((((unsigned char) var_11)), (arr_39 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1])))))))));
                }
                var_36 = ((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) arr_36 [i_0] [i_5] [i_0] [i_0] [i_5])) : (((/* implicit */int) var_13)))) - (((/* implicit */int) arr_15 [i_5])))), ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 2 */
                for (unsigned char i_13 = 3; i_13 < 15; i_13 += 4) 
                {
                    arr_43 [i_0] [i_5] [i_5] [i_5] [i_7] [i_13] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)9))));
                    var_37 &= ((/* implicit */short) ((((((((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))) + (2147483647))) >> (((arr_11 [i_0] [i_5]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_17)))))) << (((((/* implicit */_Bool) max((var_7), (var_10)))) ? (((/* implicit */int) (((_Bool)1) && (var_17)))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) var_6))))))));
                    arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) max((arr_41 [i_13 + 2] [i_7] [i_5] [i_0]), (var_13))))));
                }
                for (unsigned char i_14 = 3; i_14 < 17; i_14 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_15 = 2; i_15 < 16; i_15 += 3) 
                    {
                        var_38 = var_10;
                        var_39 = ((/* implicit */unsigned char) (_Bool)1);
                        var_40 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_45 [i_7] [i_7] [i_15] [i_14] [(_Bool)1])) ? (((/* implicit */int) arr_41 [i_0] [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) (short)511))))));
                        var_41 += ((/* implicit */short) (~(((/* implicit */int) (unsigned char)64))));
                    }
                    /* vectorizable */
                    for (unsigned char i_16 = 1; i_16 < 17; i_16 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_41 [(short)6] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_39 [i_0] [i_0] [i_5] [i_7] [i_0] [i_16]))));
                        var_43 = ((/* implicit */short) ((var_13) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5))));
                    }
                    for (unsigned char i_17 = 1; i_17 < 17; i_17 += 4) /* same iter space */
                    {
                        arr_54 [i_0] [(_Bool)1] [i_7] [i_14 + 1] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((var_0), (var_14)))) && (var_11))) ? (((((((/* implicit */int) var_18)) != (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */int) min((arr_14 [i_17]), (((/* implicit */unsigned char) var_13))))) : (((((/* implicit */int) (unsigned char)2)) & (((/* implicit */int) var_1)))))) : ((-(((((/* implicit */int) var_18)) & (((/* implicit */int) (unsigned char)98))))))));
                        arr_55 [i_0] [i_5] [i_5] [i_7] [i_5] [i_17 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_16))) / (((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_50 [i_17] [i_14] [i_14 - 2] [i_0] [i_5] [i_0])))) : ((+(((/* implicit */int) var_11))))))));
                        var_44 ^= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max(((short)-26156), (var_15)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)81)))));
                        var_45 = (short)29797;
                    }
                    var_46 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                }
            }
            for (short i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                var_47 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))));
                arr_58 [i_0] [i_0] &= ((/* implicit */_Bool) max((var_16), (((unsigned char) arr_14 [i_18]))));
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                var_48 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)29118)))) ? (((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)15))))));
                arr_62 [i_5] [i_0] = ((/* implicit */_Bool) var_18);
                var_49 = ((/* implicit */short) ((((_Bool) (short)-1)) ? (((/* implicit */int) var_10)) : ((-(((arr_47 [(_Bool)1] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_21 [i_0] [i_5] [i_19])) : (((/* implicit */int) var_0))))))));
                var_50 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-20), (((/* implicit */short) var_12))))) ? ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_60 [i_19] [i_19])))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) (_Bool)0))))))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) ^ (((/* implicit */int) max((var_14), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) ((unsigned char) arr_51 [i_19 - 1] [(_Bool)1] [i_5] [i_0] [i_0])))));
            }
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_51 += ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)1)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)200))))) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                var_52 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_61 [i_0] [i_5] [i_0] [i_20]), (((_Bool) var_3))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) var_5)) & (((/* implicit */int) (short)-16414))))))));
            }
            var_53 *= ((/* implicit */_Bool) min((((((((/* implicit */int) var_4)) - (((/* implicit */int) (short)14842)))) - ((-(((/* implicit */int) var_16)))))), (((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_22 = 0; i_22 < 18; i_22 += 1) 
            {
                var_54 &= ((/* implicit */unsigned char) min((((((/* implicit */int) (short)-13632)) - (((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_22])) : (((/* implicit */int) arr_8 [i_21 - 1]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))))));
                arr_71 [i_22] = (short)-26086;
            }
            /* LoopSeq 1 */
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                var_55 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), ((short)-15995)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))));
                var_56 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_12)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                arr_75 [i_0] [i_0] [i_23] &= ((/* implicit */short) (_Bool)1);
            }
        }
        var_57 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)255)))) > (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
        var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) var_18))));
    }
    for (short i_24 = 3; i_24 < 19; i_24 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_25 = 0; i_25 < 21; i_25 += 4) 
        {
            var_59 *= ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned char) (unsigned char)180))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_80 [i_24] [i_24 - 1] [i_24 - 3])))) : (((/* implicit */int) max((var_2), (((/* implicit */short) var_18)))))));
            var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) (unsigned char)246))));
        }
        for (unsigned char i_26 = 0; i_26 < 21; i_26 += 1) 
        {
            var_61 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) arr_81 [i_24 - 3] [i_24 + 2])) : (((/* implicit */int) arr_81 [i_24 - 1] [i_24 - 1])))) + (2147483647))) << (((((/* implicit */int) ((_Bool) arr_81 [i_24 - 3] [i_24 - 1]))) - (1)))));
            arr_85 [i_26] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) min((var_7), (((/* implicit */short) ((unsigned char) (short)-25265)))))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
        }
        arr_86 [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((_Bool) var_17)))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)248))))));
        var_62 = ((/* implicit */_Bool) min((var_62), (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))), ((((_Bool)1) ? (((/* implicit */int) (short)2029)) : (((/* implicit */int) (unsigned char)23)))))))));
    }
    var_63 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_14), (((/* implicit */short) var_16)))), (min((var_7), ((short)16442)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) max((var_7), (((/* implicit */short) (unsigned char)254))))))));
    var_64 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_16)) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)149)) < (((/* implicit */int) var_7))))))));
}
