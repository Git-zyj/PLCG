/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122590
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_3 [i_0] [i_1]))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((var_4) + (-1503231508)));
                var_20 = ((/* implicit */int) var_3);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_21 *= ((/* implicit */short) ((((((/* implicit */_Bool) -1503231508)) ? (((/* implicit */int) (unsigned short)29329)) : (((/* implicit */int) (short)32761)))) ^ (((/* implicit */int) (((_Bool)0) || (arr_10 [i_0] [i_1 - 1] [i_3] [i_1]))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23346))))) >> (((((/* implicit */int) (unsigned short)992)) - (967)))));
                var_23 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_3]);
                arr_11 [i_1] [i_1] [i_3] = ((/* implicit */int) var_14);
                var_24 = (short)16894;
            }
        }
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_25 = ((/* implicit */short) (-(2147483647)));
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_17 [(_Bool)1] [2] [i_5] = ((/* implicit */signed char) var_2);
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 22; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_26 &= ((/* implicit */unsigned short) var_16);
                            var_27 = ((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_0] [i_4] [i_5] [i_6 + 2] [(short)13]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) var_7);
            }
            for (int i_8 = 2; i_8 < 23; i_8 += 3) 
            {
                var_29 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [(unsigned short)9] [(unsigned short)1] [i_8 - 1] [i_8]))) < (arr_3 [(short)3] [23]))))));
                arr_26 [i_0] [i_4] [(unsigned short)19] = ((/* implicit */int) var_5);
                /* LoopSeq 3 */
                for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_23 [13] [13] [i_8 - 2] [21LL] [i_10])))));
                        arr_32 [i_0] [i_10] [i_0] [i_9] [i_10] = ((/* implicit */signed char) ((-1503231508) != (1790800478)));
                        var_31 = ((/* implicit */int) (unsigned short)36217);
                    }
                    arr_33 [(_Bool)1] [i_4] [i_8] [i_9] [i_0] [i_9] = ((/* implicit */long long int) arr_22 [i_0] [i_0] [i_4] [i_4] [i_8] [i_9] [i_4]);
                }
                for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (-((+(var_17))))))));
                    var_33 = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_34 -= ((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29306)) << (((((-3038812006087495051LL) + (3038812006087495073LL))) - (15LL)))))) : (arr_1 [(_Bool)1] [i_4])));
                        var_35 *= ((/* implicit */signed char) (_Bool)0);
                        var_36 = ((/* implicit */long long int) ((((var_7) + (2147483647))) >> (((/* implicit */int) var_15))));
                        var_37 *= ((/* implicit */short) (unsigned short)0);
                        arr_39 [i_11] [(signed char)11] = ((/* implicit */int) arr_2 [i_11] [i_4]);
                    }
                    for (int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_38 = ((/* implicit */short) ((arr_4 [i_13] [i_11] [i_4]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) (_Bool)1))))))));
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (((~(((/* implicit */int) (signed char)15)))) % (2147483647))))));
                        arr_44 [i_13] [i_0] [i_4] [i_0] [i_4] [i_0] [i_0] = var_2;
                    }
                    var_40 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) / (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0])) : (-13))))));
                }
                for (unsigned short i_14 = 2; i_14 < 23; i_14 += 2) 
                {
                    var_41 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (143051329) : (((/* implicit */int) var_18))));
                    var_42 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_8] [i_8 + 1] [i_8] [i_8 - 2]))));
                    arr_47 [i_0] [i_4] [i_8] [22LL] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_41 [i_8] [i_14])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_8] [i_14])) + (((/* implicit */int) (short)-21164)))))));
                }
                var_43 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0]))));
                arr_48 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) (short)-2049));
            }
        }
        var_44 = ((/* implicit */_Bool) arr_37 [i_0] [(signed char)6] [i_0] [i_0] [i_0] [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_45 = ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-117)) + (2147483647))) << (((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) var_13))));
            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) 7048129414229474622LL))));
        }
        for (signed char i_16 = 1; i_16 < 20; i_16 += 3) 
        {
            var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((short) (short)4657)))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    {
                        var_48 = (-(((/* implicit */int) var_6)));
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_16 + 2] [i_16] [i_16 + 2] [i_16 + 4] [(_Bool)1] [i_16 - 1])) | (((/* implicit */int) arr_12 [i_16 + 4] [i_16] [i_16]))));
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 24; i_19 += 1) 
                        {
                            var_50 -= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-58)) / (((/* implicit */int) arr_13 [i_16 + 4]))));
                            arr_60 [i_0] [i_0] [i_17] [i_18] [i_16] = ((/* implicit */unsigned short) var_9);
                        }
                        var_51 = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (((/* implicit */int) var_13))));
                    }
                } 
            } 
            var_52 = 1274207835256588699LL;
        }
    }
    var_53 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31225))) : (-1719605873862124918LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65517))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (int i_20 = 2; i_20 < 24; i_20 += 4) 
    {
        for (unsigned short i_21 = 1; i_21 < 23; i_21 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_23 = 1; i_23 < 23; i_23 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_24 = 0; i_24 < 25; i_24 += 2) 
                        {
                            arr_74 [i_20 + 1] [i_20 - 1] [(short)21] [(signed char)11] [i_21] = ((/* implicit */int) (_Bool)1);
                            arr_75 [i_20] [(_Bool)0] [i_20] [i_24] [i_21] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65529))))) ? ((+(var_14))) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [(unsigned short)5])))))) ? (((((/* implicit */_Bool) (signed char)-64)) ? (((((/* implicit */_Bool) arr_66 [i_21] [i_21])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-54)))) : (((/* implicit */int) arr_73 [i_20] [i_21] [i_21] [i_23] [i_24])))) : (((((/* implicit */int) (unsigned short)23571)) + (((((/* implicit */int) arr_62 [i_23])) & (((/* implicit */int) (short)-1))))))));
                        }
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (925202187328970052LL)))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */_Bool) var_5)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)36217)) : (((/* implicit */int) (unsigned short)32768)))) : (((/* implicit */int) max(((unsigned short)40126), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        arr_76 [i_21] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_61 [i_20 - 2]), (arr_61 [i_20 - 2])))) * (((/* implicit */int) ((((/* implicit */int) (signed char)-72)) >= (((/* implicit */int) arr_61 [i_20 - 2])))))));
                        var_55 *= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_61 [i_21 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 25; i_25 += 2) 
                    {
                        for (signed char i_26 = 0; i_26 < 25; i_26 += 2) 
                        {
                            {
                                var_56 = ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) arr_68 [i_20 + 1] [i_20 + 1] [i_21]))))) ? (((/* implicit */int) max((arr_68 [i_20 + 1] [i_25] [i_21]), (arr_68 [i_20 - 2] [i_26] [i_21])))) : (((arr_68 [i_20 - 1] [i_20 - 1] [i_21]) ? (((/* implicit */int) arr_68 [i_20 + 1] [i_25] [i_21])) : (((/* implicit */int) arr_68 [i_20 + 1] [i_20 + 1] [i_21])))));
                                var_57 &= ((/* implicit */_Bool) max((((((/* implicit */int) arr_62 [i_20 - 2])) * (((/* implicit */int) arr_62 [i_20 - 1])))), (((/* implicit */int) min((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)-1)) || (var_6))))))));
                            }
                        } 
                    } 
                    var_58 = ((/* implicit */int) ((((/* implicit */int) (short)-1024)) >= (((((/* implicit */int) var_0)) % (((/* implicit */int) arr_61 [i_20]))))));
                }
                for (long long int i_27 = 0; i_27 < 25; i_27 += 4) 
                {
                    var_59 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) (signed char)21)))), (((((/* implicit */_Bool) arr_83 [i_20] [i_21] [i_20 + 1])) || (((/* implicit */_Bool) (unsigned short)45123))))));
                    arr_86 [i_21] [i_21 + 1] [i_21 + 1] [(signed char)11] = -937166375;
                    var_60 = ((/* implicit */unsigned short) var_3);
                    /* LoopNest 2 */
                    for (short i_28 = 0; i_28 < 25; i_28 += 1) 
                    {
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            {
                                arr_92 [i_21] [i_21] [i_27] [i_28] [i_29] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) ((short) (signed char)-1))) ^ (-161195791))));
                                arr_93 [i_20] [i_21] [i_28] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)0)) ? ((+(((/* implicit */int) var_8)))) : (1086978447))) != ((-(((/* implicit */int) ((var_18) && (((/* implicit */_Bool) var_14)))))))));
                            }
                        } 
                    } 
                    arr_94 [i_21] [7] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_61 [i_20])) | (((/* implicit */int) arr_67 [i_21])))));
                }
                /* vectorizable */
                for (signed char i_30 = 0; i_30 < 25; i_30 += 2) 
                {
                    var_61 = ((/* implicit */int) max((var_61), (((-1871870184) / (-1086978443)))));
                    var_62 = (signed char)126;
                    /* LoopSeq 2 */
                    for (long long int i_31 = 1; i_31 < 22; i_31 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_32 = 0; i_32 < 25; i_32 += 2) 
                        {
                            arr_103 [i_20] [(signed char)12] [15] [i_21] [i_30] = ((/* implicit */signed char) ((long long int) (unsigned short)2536));
                            var_63 *= ((/* implicit */_Bool) (unsigned short)65514);
                        }
                        for (unsigned short i_33 = 1; i_33 < 23; i_33 += 1) 
                        {
                            arr_107 [i_20] [i_21] [i_20] [i_21] [i_31 + 1] [i_31] [i_33] = (~(((/* implicit */int) (_Bool)1)));
                            arr_108 [i_21] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_21] [(signed char)23] [i_21] [i_21] [i_21] [i_20])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_67 [i_21])))))));
                        }
                        arr_109 [1] [i_30] [i_21] = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) var_0)) - (93))));
                        var_64 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) arr_65 [i_20] [i_30])) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_34 = 0; i_34 < 25; i_34 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_35 = 2; i_35 < 24; i_35 += 3) 
                        {
                            var_65 *= (signed char)114;
                            arr_116 [i_20 - 2] [(short)5] [i_30] [i_20 - 2] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) 1661723355)) || (((_Bool) var_9))));
                            var_66 = ((/* implicit */int) max((var_66), ((+(((/* implicit */int) ((_Bool) arr_83 [i_20] [i_20] [(signed char)0])))))));
                            var_67 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_9)) ? (arr_70 [22] [i_21 + 2] [i_30] [22] [i_35]) : (((/* implicit */long long int) var_1))))));
                            var_68 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(0LL)))) ? (((/* implicit */int) arr_67 [i_20])) : (((/* implicit */int) (unsigned short)35612))));
                        }
                        var_69 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_6))) >= (((/* implicit */int) arr_64 [i_20 - 2] [i_20 - 2] [i_20 - 1]))));
                        arr_117 [i_20] [i_20] [i_21] [i_20 - 1] = ((/* implicit */unsigned short) (short)3);
                        var_70 -= ((/* implicit */_Bool) (((-(var_7))) & (((((/* implicit */int) var_2)) + (1720329)))));
                        var_71 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_97 [i_20] [i_20 + 1] [i_20] [i_21 + 2])) ? (574488297) : (((/* implicit */int) (unsigned short)11))));
                    }
                }
                var_72 = ((/* implicit */short) var_18);
            }
        } 
    } 
}
