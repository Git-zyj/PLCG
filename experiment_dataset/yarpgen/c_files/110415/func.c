/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110415
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) var_15)));
        arr_3 [i_0] = ((/* implicit */unsigned int) 4377689914120801326ULL);
        var_19 = ((unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            var_20 = ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_9)) : (9269659914251572304ULL)));
            var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [10ULL]))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_11));
            arr_7 [i_0] = ((/* implicit */short) ((long long int) (~(((/* implicit */int) (unsigned short)0)))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32)))))));
            var_23 *= ((/* implicit */short) ((arr_5 [i_2 + 1] [i_2] [i_2]) / (((/* implicit */unsigned long long int) var_12))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned int) arr_2 [i_0])))));
                        var_25 = ((/* implicit */unsigned int) 17228143656779018987ULL);
                        arr_19 [i_3] [2ULL] [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
                        var_26 = ((/* implicit */_Bool) var_0);
                    }
                    arr_20 [i_3] = ((/* implicit */long long int) var_5);
                    var_27 -= ((((/* implicit */_Bool) (short)15)) ? (((10644595476037473365ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 4) 
    {
        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            {
                var_28 = ((/* implicit */unsigned long long int) ((arr_25 [i_6]) / ((~(((/* implicit */int) var_1))))));
                /* LoopSeq 1 */
                for (signed char i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 14; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            {
                                var_29 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)82))));
                                var_30 = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
                        {
                            var_31 -= ((/* implicit */short) ((((min((((/* implicit */unsigned int) var_9)), (var_5))) < (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_1)), ((signed char)-106))))))) ? (((11471714726144516424ULL) | (((/* implicit */unsigned long long int) -2147483646)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_8)))))))));
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_5))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned int) (short)12);
                            var_34 = ((/* implicit */int) min((var_34), (arr_41 [i_6] [(short)0] [i_11] [i_11] [(unsigned char)10])));
                            var_35 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) - (((/* implicit */int) var_8))))));
                        }
                        for (signed char i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */_Bool) arr_46 [i_6] [i_7] [(_Bool)1]);
                            arr_48 [i_6] = ((/* implicit */_Bool) var_9);
                        }
                        arr_49 [i_6] [i_7] [i_8] [i_11] = ((/* implicit */short) var_14);
                    }
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
                    {
                        var_37 += ((/* implicit */signed char) var_14);
                        arr_54 [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        var_38 *= ((/* implicit */unsigned int) var_8);
                        var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) ((short) 9177084159457979326ULL))))));
                        arr_57 [i_6] [i_7] [i_6] [i_16 - 1] [10] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_0)), (min((arr_53 [i_16] [i_6] [i_6] [i_16]), (17228143656779018986ULL)))));
                        arr_58 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [15LL] [i_7] [i_6] [i_7] [(unsigned char)15]))))) | (min((((/* implicit */unsigned int) var_10)), (min((((/* implicit */unsigned int) var_10)), (var_17)))))));
                        arr_59 [i_6] [(short)1] [4U] [i_6] = ((/* implicit */unsigned int) ((short) (signed char)104));
                    }
                }
                var_40 &= ((/* implicit */int) var_6);
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_17 = 0; i_17 < 11; i_17 += 3) 
    {
        var_41 = ((((/* implicit */_Bool) -1807190541)) ? ((+(((/* implicit */int) (signed char)14)))) : (((/* implicit */int) (!((_Bool)1)))));
        var_42 = arr_40 [(signed char)7] [(unsigned char)4] [(signed char)9] [i_17] [(signed char)7] [i_17];
    }
    for (long long int i_18 = 0; i_18 < 17; i_18 += 4) 
    {
        var_43 = ((/* implicit */long long int) var_14);
        var_44 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (_Bool)1)) & (((int) var_13)))));
        /* LoopSeq 2 */
        for (long long int i_19 = 3; i_19 < 16; i_19 += 4) 
        {
            arr_66 [i_19] [0ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) arr_62 [i_18])), (10565039849362889938ULL))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (short)3840))))) : (max((min((((/* implicit */unsigned long long int) (short)-32763)), (1218600416930532629ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_63 [0])))))))));
            var_45 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (short)7168)))), (((/* implicit */int) var_16))));
        }
        for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                var_46 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) - (min((var_10), (((/* implicit */int) arr_63 [i_18])))))) | (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)7159)), (576451956210401280LL)))) ? (((/* implicit */int) arr_63 [i_18])) : (((/* implicit */int) (short)-7169))))));
                var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((int) min((var_12), (((/* implicit */long long int) (short)9371))))))));
            }
            for (int i_22 = 4; i_22 < 14; i_22 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) min((min((((/* implicit */long long int) var_15)), ((-(7523796723115372499LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (778908254)))), (var_17)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_24 = 1; i_24 < 14; i_24 += 4) 
                    {
                        var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) var_2))));
                        arr_79 [i_18] [i_20] [i_20] = ((unsigned long long int) (unsigned short)63909);
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (+(var_17))))));
                        var_51 = ((/* implicit */unsigned long long int) var_2);
                        var_52 = ((/* implicit */signed char) max((var_52), (min((var_6), (((/* implicit */signed char) (((+(-13LL))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))))));
                        var_53 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_75 [i_20] [i_22 + 3]), (((/* implicit */short) arr_64 [i_22 + 2]))))), (min((((/* implicit */int) var_11)), (1073741824)))));
                    }
                }
                arr_83 [i_20] [i_20] [(short)4] = ((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)192))))), (arr_81 [15] [i_22 + 3] [i_20] [i_22] [i_22 - 2] [i_22])))));
            }
            /* vectorizable */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                /* LoopNest 2 */
                for (short i_27 = 3; i_27 < 15; i_27 += 3) 
                {
                    for (unsigned long long int i_28 = 2; i_28 < 16; i_28 += 4) 
                    {
                        {
                            arr_90 [i_20] [i_20] = ((/* implicit */unsigned short) var_14);
                            var_54 ^= ((/* implicit */signed char) var_14);
                        }
                    } 
                } 
                var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) var_6))));
                var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (3530095408720884841ULL)));
                var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)67)) || (((/* implicit */_Bool) 9974408850503319248ULL))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_29 = 0; i_29 < 17; i_29 += 1) 
            {
                var_58 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(0))))))), (min((((/* implicit */unsigned int) (signed char)67)), (((2105118607U) >> (((arr_89 [i_18] [i_18] [i_18] [i_18] [i_18]) + (8705081721504038681LL)))))))));
                arr_94 [i_20] = ((/* implicit */unsigned int) (short)31);
                /* LoopNest 2 */
                for (short i_30 = 0; i_30 < 17; i_30 += 4) 
                {
                    for (unsigned int i_31 = 2; i_31 < 16; i_31 += 3) 
                    {
                        {
                            arr_99 [10LL] [4LL] [i_20] [i_30] = ((((/* implicit */_Bool) 144115188075855872ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (((unsigned long long int) arr_98 [i_31] [i_31 - 2] [i_20] [i_31 + 1] [i_20] [i_31 - 1] [i_31])));
                            var_59 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_98 [i_31 - 1] [i_31] [i_30] [i_31] [i_31] [(unsigned short)0] [i_31 - 1])) % (((((/* implicit */int) arr_98 [i_31 - 1] [0] [i_30] [i_31] [i_31] [i_31] [i_31 - 1])) * (((/* implicit */int) arr_80 [i_31 + 1] [11] [(signed char)12] [i_31] [i_31 + 1] [i_31]))))));
                        }
                    } 
                } 
            }
            for (signed char i_32 = 4; i_32 < 14; i_32 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_33 = 0; i_33 < 17; i_33 += 3) 
                {
                    var_60 = 4194304ULL;
                    arr_104 [i_18] [i_32] [i_20] [i_20] [i_18] |= ((arr_71 [i_32 - 3] [12ULL] [(short)4] [i_18]) == (((/* implicit */int) ((short) var_13))));
                    var_61 -= (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) - (arr_67 [i_18])))));
                    arr_105 [(signed char)15] [i_20] [(signed char)15] = ((/* implicit */int) (short)-20939);
                }
                for (unsigned long long int i_34 = 0; i_34 < 17; i_34 += 3) /* same iter space */
                {
                    arr_108 [i_18] [16ULL] [i_20] [i_18] [i_18] [12ULL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_18]))) <= (var_17)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (4194316ULL)))));
                    arr_109 [i_18] [i_20] [2ULL] [i_32 - 4] [(short)8] [i_18] |= ((/* implicit */unsigned char) min((-32LL), (((/* implicit */long long int) 16711680))));
                    var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) ((((/* implicit */_Bool) 1073741820ULL)) ? (7197358516239104587ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20938))))))));
                }
                for (unsigned long long int i_35 = 0; i_35 < 17; i_35 += 3) /* same iter space */
                {
                    var_63 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-14194)), ((~(((/* implicit */int) (signed char)17))))))) ? (((long long int) (signed char)7)) : (((/* implicit */long long int) var_17))));
                    var_64 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) (+(2844934352U)))) & (min((((/* implicit */unsigned long long int) (signed char)-64)), (8935141660703064064ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211)))))), (max((arr_100 [i_20] [i_20] [i_20] [(short)8]), (((/* implicit */int) var_1)))))))));
                }
                arr_113 [i_32] [i_18] [i_32 - 1] |= ((/* implicit */unsigned long long int) ((short) var_14));
            }
            arr_114 [i_20] [i_20] = ((/* implicit */unsigned short) var_3);
            var_65 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */short) (signed char)-9)))))) : (var_5))) - (((/* implicit */unsigned int) (+(((((/* implicit */int) var_7)) | (((/* implicit */int) arr_74 [i_20] [4LL] [i_20] [i_18])))))))));
        }
        var_66 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)55)) ? (8139278895310292709ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524))))) == (8139278895310292709ULL))))) : (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)49152)))))));
        var_67 = ((/* implicit */_Bool) var_8);
    }
    /* vectorizable */
    for (long long int i_36 = 0; i_36 < 24; i_36 += 3) 
    {
        var_68 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65518)) >> (((-6559273458595741558LL) + (6559273458595741577LL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_37 = 0; i_37 < 24; i_37 += 3) 
        {
            for (_Bool i_38 = 0; i_38 < 0; i_38 += 1) 
            {
                {
                    arr_123 [1ULL] [8LL] [i_38] [i_38 + 1] = ((/* implicit */_Bool) var_5);
                    var_69 = ((/* implicit */int) var_1);
                    var_70 = (~(((/* implicit */int) var_11)));
                    arr_124 [i_36] [i_36] [i_36] [5U] = ((/* implicit */short) -1283782015941155047LL);
                    var_71 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)38)) > (((/* implicit */int) (signed char)32))));
                }
            } 
        } 
        var_72 |= ((/* implicit */long long int) (signed char)-9);
        arr_125 [10LL] [(short)1] = ((/* implicit */unsigned int) (unsigned short)20318);
    }
    /* vectorizable */
    for (signed char i_39 = 0; i_39 < 22; i_39 += 3) 
    {
        var_73 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)36)) ? (var_10) : (((/* implicit */int) arr_119 [i_39] [i_39] [i_39]))));
        var_74 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
    }
    var_75 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)120))));
    var_76 = ((/* implicit */short) var_9);
}
