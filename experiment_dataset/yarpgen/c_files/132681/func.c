/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132681
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [2U] = ((/* implicit */unsigned short) (~(var_6)));
        var_13 = ((/* implicit */short) var_7);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2))))))));
                        arr_14 [i_4] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)16703)))))));
                        var_15 = ((/* implicit */_Bool) (short)-5093);
                        arr_15 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_10)) : (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) min((var_16), ((((+(var_2))) + (((/* implicit */unsigned int) (~(((/* implicit */int) (short)5087)))))))));
    }
    /* LoopSeq 4 */
    for (short i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) (short)19591)) >= (((/* implicit */int) var_0))));
        var_17 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)23874))))), ((-(((/* implicit */int) min((var_4), (var_11))))))));
        arr_19 [i_5] = ((/* implicit */short) (~((+(((/* implicit */int) (unsigned short)0))))));
        var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (min((((/* implicit */unsigned short) var_0)), ((unsigned short)57585))))))));
        arr_23 [i_6] = ((/* implicit */int) max(((~(((((/* implicit */_Bool) var_3)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_9)) : (var_5))))))));
    }
    /* vectorizable */
    for (short i_7 = 4; i_7 < 12; i_7 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_8 = 2; i_8 < 12; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_9 = 1; i_9 < 11; i_9 += 3) 
            {
                arr_34 [i_7] [i_8] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) 4289136714756568304LL))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 3) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (short)-16703)))));
                            arr_42 [i_7] [i_8] [i_8] [i_9] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4289136714756568304LL)))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            arr_52 [i_12] [i_13] [i_12] [i_8] [i_12] = ((/* implicit */int) var_1);
                            arr_53 [i_7] [i_7] &= ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                var_21 = (+(((/* implicit */int) var_3)));
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-23892)) & (((/* implicit */int) var_8)))))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                var_23 = (~(((/* implicit */int) (short)-16657)));
                var_24 = (!(((/* implicit */_Bool) ((var_7) ? (11525583271165339471ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32743)))))));
            }
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~((-(4294443008ULL))))))));
            var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)3))))));
        }
        for (int i_16 = 2; i_16 < 12; i_16 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) var_0);
            arr_60 [i_7] &= ((/* implicit */short) (~(var_10)));
            var_28 -= ((/* implicit */_Bool) (unsigned char)23);
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_4))));
            /* LoopSeq 2 */
            for (short i_17 = 1; i_17 < 11; i_17 += 1) 
            {
                var_30 = ((/* implicit */short) 497144552U);
                var_31 += var_4;
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32184)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32743))) : (3672737759U)));
            }
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                arr_67 [i_16] [i_16] [i_18] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)37)) ? (2759581502U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9))))));
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_33 = 11525583271165339482ULL;
                            var_34 = (short)32767;
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_22 = 3; i_22 < 12; i_22 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) (short)8024);
                        var_37 -= ((/* implicit */short) var_1);
                    }
                    for (short i_23 = 3; i_23 < 12; i_23 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((-(622229536U))) : ((((_Bool)1) ? (3633385973U) : (3231683764U)))));
                        arr_81 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8022))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_0)))))));
                        arr_82 [i_18] = ((/* implicit */unsigned long long int) var_7);
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) var_0))));
                    }
                    arr_83 [0] [i_18] [i_7] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 622229537U)))) ? (var_9) : (((/* implicit */int) (_Bool)1))));
                    arr_84 [i_7] [i_16] [i_7] [i_7] [i_7] [i_7] |= ((short) (~(4619289998610985061ULL)));
                    /* LoopSeq 1 */
                    for (long long int i_24 = 0; i_24 < 13; i_24 += 4) 
                    {
                        arr_87 [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) 11640991445184518969ULL)) ? (28967326U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        var_40 = ((/* implicit */_Bool) var_1);
                        var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (~(((/* implicit */int) (short)-14538)))))));
                        var_43 = (short)-1504;
                    }
                    arr_88 [i_18] [i_16] [i_18] [i_21] = (~(((/* implicit */int) (unsigned char)131)));
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                {
                    arr_91 [i_7] [i_7] [i_18] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1619437041)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (5348304179769929375ULL)));
                    /* LoopSeq 3 */
                    for (short i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) 3672737758U))));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((var_10) | (((/* implicit */int) (short)-12483))))));
                        var_46 = ((/* implicit */unsigned int) var_9);
                        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16316284650622055071ULL)) ? ((-(((/* implicit */int) (unsigned short)31168)))) : ((-(((/* implicit */int) var_12))))));
                        var_48 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                    }
                    for (int i_27 = 2; i_27 < 10; i_27 += 4) 
                    {
                        var_49 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (var_9) : (((/* implicit */int) (_Bool)1))))) : (6291456U)));
                        arr_99 [i_7] [i_16] [i_18] [i_25] [i_27] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)27346))))));
                    }
                    for (short i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        var_50 &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-31539)))))));
                        arr_102 [i_7] [(short)5] [i_18] [i_18] [i_28] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 5U))));
                    }
                }
                arr_103 [i_18] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2985918639U)) ? (16316284650622055078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27861)))))));
                var_51 = ((/* implicit */_Bool) var_9);
            }
        }
        for (int i_29 = 2; i_29 < 12; i_29 += 4) /* same iter space */
        {
            var_52 = ((/* implicit */long long int) (_Bool)1);
            /* LoopSeq 3 */
            for (short i_30 = 0; i_30 < 13; i_30 += 3) 
            {
                arr_110 [i_7] [i_29] [i_30] = ((/* implicit */short) var_7);
                var_53 += (short)31;
            }
            for (short i_31 = 1; i_31 < 11; i_31 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_32 = 2; i_32 < 9; i_32 += 1) 
                {
                    var_54 = ((/* implicit */_Bool) var_5);
                    var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (short i_33 = 0; i_33 < 13; i_33 += 3) 
                    {
                        var_56 = (~((+(var_9))));
                        var_57 |= ((/* implicit */unsigned short) var_6);
                    }
                    var_58 &= ((/* implicit */long long int) (-((+(var_5)))));
                }
                arr_119 [i_7] [i_29 - 1] [i_29 - 1] |= ((/* implicit */int) (((!(((/* implicit */_Bool) 4289136714756568304LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)47662)) & (((/* implicit */int) (_Bool)1))))) : ((+(2305870947U)))));
                var_59 = ((/* implicit */unsigned char) (((_Bool)0) ? (11525583271165339474ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (short i_34 = 2; i_34 < 11; i_34 += 3) 
            {
                var_61 -= (-(var_5));
                /* LoopSeq 1 */
                for (short i_35 = 0; i_35 < 13; i_35 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_36 = 1; i_36 < 12; i_36 += 2) 
                    {
                        arr_127 [i_7] [i_34] [i_7] [i_34] [i_35] [i_34 + 2] [i_34] &= ((/* implicit */int) var_5);
                        var_62 = (((~(((/* implicit */int) (short)12478)))) <= (((/* implicit */int) (short)12478)));
                        var_63 += ((((/* implicit */_Bool) 134209536U)) ? (((3758096384U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))));
                        arr_128 [i_36 + 1] [i_35] [i_36] [i_29] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_9)) : (var_2)))) ? (var_9) : ((-(((/* implicit */int) (short)-1))))));
                    }
                    var_64 = (!(((/* implicit */_Bool) (~(var_2)))));
                    var_65 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))));
                }
            }
            var_66 = ((/* implicit */unsigned short) var_12);
            /* LoopNest 3 */
            for (unsigned int i_37 = 0; i_37 < 13; i_37 += 1) 
            {
                for (short i_38 = 0; i_38 < 13; i_38 += 4) 
                {
                    for (short i_39 = 0; i_39 < 13; i_39 += 4) 
                    {
                        {
                            arr_138 [i_37] [i_37] [i_37] [i_38] = ((/* implicit */int) (+(var_5)));
                            var_67 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3174534955U)))))));
                            arr_139 [i_7] [i_7 - 3] [i_7 - 3] [i_37] [i_7 - 3] [i_37] [i_39] = ((/* implicit */_Bool) (~((~(581343059925549077ULL)))));
                            var_68 = ((/* implicit */short) max((var_68), (((/* implicit */short) var_8))));
                            arr_140 [i_7] [i_7 - 3] [i_7] = ((/* implicit */unsigned char) 1293971049);
                        }
                    } 
                } 
            } 
            var_69 = (unsigned short)17908;
        }
        var_70 = ((/* implicit */unsigned short) (short)-12817);
        var_71 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) -2147483640))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_4))));
        var_72 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_10))) ? ((((_Bool)1) ? (((/* implicit */int) (short)8734)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) var_4))))));
    }
    for (unsigned int i_40 = 0; i_40 < 15; i_40 += 1) 
    {
        arr_145 [i_40] = min(((-(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (_Bool)1)))));
        var_73 &= ((/* implicit */unsigned char) min(((-(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_11))))))), ((~(((/* implicit */int) var_3))))));
        var_74 = (unsigned short)34366;
        var_75 |= ((/* implicit */int) var_12);
        arr_146 [i_40] = min((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))), (((((/* implicit */_Bool) var_8)) ? (-2147483646) : (((/* implicit */int) var_3))))))), (((unsigned long long int) ((_Bool) var_0))));
    }
    var_76 = ((/* implicit */short) (+(var_9)));
}
