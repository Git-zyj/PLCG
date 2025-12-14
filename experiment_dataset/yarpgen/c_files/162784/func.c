/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162784
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_10)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_14 *= ((/* implicit */short) (~((~(((unsigned int) arr_5 [(short)16] [i_1] [i_1] [(_Bool)1]))))));
                        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 3])) * (((/* implicit */int) (short)4095))))), (((arr_5 [i_0] [i_2 - 2] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30720))) : (8388608U)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_16 = ((((/* implicit */int) (!(((((/* implicit */int) var_4)) > (((/* implicit */int) var_11))))))) % ((+((~(((/* implicit */int) var_5)))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) != (((/* implicit */int) (unsigned char)18))));
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (short)-28801)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) - (((/* implicit */int) arr_3 [i_0] [i_0] [9])))), (((/* implicit */int) var_8)))))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) ((((max((((/* implicit */int) arr_10 [(_Bool)1])), (arr_12 [i_0] [i_5]))) != (((/* implicit */int) var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(var_7))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27145))) : (4227858432U))))))));
                var_20 *= ((/* implicit */unsigned char) min((396895784U), (((/* implicit */unsigned int) ((short) (~(-1403218922)))))));
                var_21 *= var_10;
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */short) max((((unsigned int) var_10)), (((/* implicit */unsigned int) arr_1 [i_5]))));
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_7))));
                            var_24 = ((unsigned char) ((unsigned char) arr_13 [i_0] [i_0] [i_7]));
                            var_25 *= min((((unsigned int) var_4)), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_21 [i_0] [(unsigned char)1] [i_9] [i_8 - 1] [i_0])) - (240)))))));
                            var_26 = ((/* implicit */unsigned short) ((_Bool) var_7));
                            var_27 = ((/* implicit */_Bool) max(((unsigned char)148), ((unsigned char)255)));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)7770)))) << (((((/* implicit */int) (short)28843)) - (28827))))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (unsigned char i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((int) ((_Bool) ((arr_0 [i_0]) && (((/* implicit */_Bool) var_12))))));
                            var_30 = ((/* implicit */_Bool) arr_10 [i_11 - 1]);
                            var_31 = ((/* implicit */unsigned short) ((unsigned char) ((short) arr_23 [i_0] [i_0] [i_0] [6U] [i_11 - 1])));
                            var_32 = ((/* implicit */_Bool) ((short) arr_10 [i_0]));
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned int) var_8)) & (min((2147483648U), (((/* implicit */unsigned int) (unsigned short)49059))))))) ? (((/* implicit */unsigned int) ((int) (-(((/* implicit */int) var_8)))))) : (max((((/* implicit */unsigned int) var_11)), (2215434877U)))));
                var_34 *= min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [i_0] [(unsigned short)0] [(unsigned short)2] [i_0] [i_0]))))), (max((((/* implicit */unsigned short) var_0)), (max((((/* implicit */unsigned short) var_10)), ((unsigned short)31))))));
                /* LoopNest 2 */
                for (short i_13 = 3; i_13 < 20; i_13 += 4) 
                {
                    for (unsigned char i_14 = 3; i_14 < 20; i_14 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((522240U), (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (((/* implicit */int) ((short) var_10))) : (((((/* implicit */_Bool) 1655649427U)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) arr_6 [i_0] [(unsigned char)12] [i_14 - 3]))))))), (max((((/* implicit */unsigned int) var_8)), (min((var_2), (2350112221U)))))));
                            var_36 *= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_39 [(short)10] [i_13] [i_12] [(unsigned short)10] [i_5] [i_0] [(_Bool)1])) != (((/* implicit */int) (!(((/* implicit */_Bool) 2325662877U))))))), (((((3760788443U) * (4290771707U))) > (4294967295U)))));
                            var_37 = ((/* implicit */unsigned short) arr_33 [(short)15] [i_5] [(short)5]);
                            var_38 = ((/* implicit */_Bool) ((short) min((arr_20 [i_0] [i_5] [i_0] [i_13 - 2]), (arr_20 [(_Bool)1] [i_5] [i_0] [i_13 - 3]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_16 = 1; i_16 < 18; i_16 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((unsigned int) max((arr_42 [i_16 + 3] [i_16] [i_16] [i_16] [i_16]), (arr_42 [i_16 + 3] [i_16] [i_16 + 2] [i_16] [(_Bool)1]))))));
                        var_40 = arr_32 [i_16 + 3] [i_0] [i_0] [i_0];
                        var_41 = ((/* implicit */int) 2079532434U);
                        var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_18 [9U] [i_16 + 3])), (arr_41 [i_16] [i_5] [i_16 + 2]))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_43 = var_12;
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_17] [i_17] [i_0] [(_Bool)1] [i_0] [i_5] [(unsigned char)5]))))) ? (((/* implicit */int) arr_47 [i_0] [i_0] [i_12] [i_0] [i_17])) : (((/* implicit */int) min((arr_47 [i_0] [(unsigned short)7] [i_12] [i_12] [(_Bool)1]), (((/* implicit */short) arr_29 [i_0] [(unsigned short)18] [i_5] [i_12] [i_0] [i_15] [i_17])))))));
                        var_45 = ((/* implicit */unsigned int) var_8);
                    }
                    /* LoopSeq 2 */
                    for (int i_18 = 4; i_18 < 18; i_18 += 2) 
                    {
                        var_46 = ((/* implicit */short) arr_35 [i_0] [i_0] [(unsigned char)16]);
                        var_47 = ((/* implicit */unsigned int) ((short) (~(0U))));
                        var_48 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) max((arr_18 [i_0] [i_12]), (arr_3 [i_15] [i_0] [i_0]))))))));
                        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) var_6))));
                        var_50 *= ((/* implicit */unsigned char) 3781747524U);
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_4))))) : (((/* implicit */int) (unsigned short)7778)))))));
                        var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                        var_53 = ((/* implicit */_Bool) ((var_2) >> (((((int) max((((/* implicit */unsigned int) var_12)), (2079532459U)))) - (2079532450)))));
                    }
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_54 = min((((unsigned short) var_5)), (((/* implicit */unsigned short) var_10)));
                var_55 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_1))))));
                var_56 *= ((/* implicit */short) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-24379)), (arr_56 [i_0] [i_5] [i_20])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))) : (((((/* implicit */_Bool) arr_57 [i_0] [(unsigned short)7] [(_Bool)1])) ? (arr_49 [i_0] [i_0] [(_Bool)1] [i_5] [i_20] [i_20] [(unsigned short)9]) : (((/* implicit */unsigned int) arr_12 [(short)10] [(short)10]))))))));
            }
            var_57 *= ((/* implicit */_Bool) (~(((int) var_0))));
        }
    }
    for (short i_21 = 3; i_21 < 15; i_21 += 4) 
    {
        var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_21 + 3] [17U] [i_21 - 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_3 [i_21 + 4] [i_21 - 3] [i_21 - 3])) : (((/* implicit */int) arr_3 [i_21 - 3] [i_21 - 1] [i_21 - 2]))));
        var_59 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_21] [i_21] [i_21 + 3] [(unsigned char)4]))))) / (((/* implicit */int) (_Bool)1))))));
        var_60 = ((/* implicit */short) arr_27 [i_21] [i_21]);
        var_61 = ((/* implicit */unsigned int) ((_Bool) ((short) ((((/* implicit */_Bool) 3424450931U)) ? (((/* implicit */int) (unsigned short)44080)) : (((/* implicit */int) (short)-31132))))));
    }
    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 4) 
    {
        /* LoopNest 2 */
        for (short i_23 = 1; i_23 < 10; i_23 += 4) 
        {
            for (unsigned char i_24 = 0; i_24 < 12; i_24 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_25 = 1; i_25 < 9; i_25 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_26 = 4; i_26 < 11; i_26 += 3) 
                        {
                            var_62 *= ((((/* implicit */_Bool) (~(2594749895U)))) ? ((+(max((arr_73 [i_25] [i_23]), (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
                            var_63 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (short)-27145))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_9))))) + (((/* implicit */int) var_5))))) : ((+(((var_7) / (134209536U)))))));
                        }
                        var_64 = ((/* implicit */short) arr_8 [i_23] [i_23]);
                    }
                    /* vectorizable */
                    for (unsigned int i_27 = 1; i_27 < 11; i_27 += 1) 
                    {
                        var_65 = (!(((((/* implicit */unsigned int) ((/* implicit */int) (short)27145))) == (arr_35 [i_22] [i_23] [i_23]))));
                        var_66 = ((/* implicit */short) var_8);
                        var_67 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_44 [i_22] [i_23 - 1] [i_24] [(short)4] [i_22])) - (172)))));
                        var_68 = ((/* implicit */unsigned char) arr_11 [(unsigned short)10] [(unsigned short)10]);
                    }
                    var_69 = ((/* implicit */unsigned int) max((var_69), (((/* implicit */unsigned int) var_11))));
                }
            } 
        } 
        var_70 = (+(((min((((/* implicit */int) arr_57 [i_22] [i_22] [i_22])), (arr_12 [i_22] [i_22]))) & ((~(((/* implicit */int) var_5)))))));
        var_71 = ((/* implicit */unsigned short) var_8);
    }
    for (unsigned short i_28 = 4; i_28 < 18; i_28 += 3) 
    {
        var_72 = ((max((min((((/* implicit */unsigned int) (_Bool)1)), (var_2))), (((/* implicit */unsigned int) var_6)))) % (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (arr_54 [i_28 - 1] [i_28] [i_28 + 2] [i_28 + 2] [i_28] [i_28]))))));
        var_73 = ((unsigned char) min((((/* implicit */int) arr_52 [i_28] [i_28])), (max((((/* implicit */int) arr_20 [i_28] [i_28] [i_28] [i_28])), (arr_81 [i_28])))));
    }
}
