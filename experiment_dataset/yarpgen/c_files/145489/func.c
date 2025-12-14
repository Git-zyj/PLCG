/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145489
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
    var_20 = ((/* implicit */unsigned int) var_0);
    var_21 = ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_0 [8LL]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_23 += ((/* implicit */unsigned char) ((unsigned short) var_11));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 + 1]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
    {
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_4])) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_10 [i_4 + 1])))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 4; i_5 < 19; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */int) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_4] [i_4] [i_5 + 1] [i_8 + 1] [i_5] [i_4 + 1])))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_5 - 3] [i_4 + 1])) ? (((/* implicit */int) arr_2 [i_5 - 2] [i_4 + 1])) : (((/* implicit */int) arr_2 [i_5 - 2] [i_4 - 1])))))));
                        }
                        var_28 = ((/* implicit */unsigned int) (+(var_8)));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) arr_10 [i_4 - 1]);
        var_30 = ((/* implicit */int) arr_1 [i_4 + 2] [i_4 + 1]);
    }
    for (int i_9 = 1; i_9 < 18; i_9 += 2) /* same iter space */
    {
        arr_30 [i_9] = ((/* implicit */unsigned short) var_8);
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (signed char i_11 = 3; i_11 < 18; i_11 += 1) 
            {
                {
                    arr_36 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) arr_22 [i_9 + 1] [i_10] [i_11 - 2]);
                    var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [(short)7] [i_11 - 1])) <= (((/* implicit */int) var_14)))) ? (((((/* implicit */int) var_15)) * (((/* implicit */int) arr_7 [(unsigned char)10] [i_10])))) : (((-935722479) + (935722487))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        var_32 = ((/* implicit */int) max((var_32), (var_6)));
                        arr_39 [(_Bool)1] [i_10] [i_12] [i_12] |= ((/* implicit */signed char) var_11);
                        var_33 = ((/* implicit */int) max((var_33), (((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_9)) >= (var_1))))))) ? (((/* implicit */int) ((((/* implicit */int) ((16735556200795275040ULL) >= (1711187872914276576ULL)))) >= (((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */int) min((arr_33 [i_12] [i_9 + 2] [i_9 - 1] [i_11 + 2]), ((unsigned char)37))))))));
                        var_34 -= ((/* implicit */unsigned short) arr_33 [i_12] [i_11] [i_11] [(signed char)6]);
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) var_16);
                            var_36 = ((/* implicit */unsigned char) arr_38 [i_9] [10LL] [i_9] [i_9]);
                            arr_42 [i_9] [(short)9] [i_10] [i_11 - 1] [i_10] [i_9] = ((/* implicit */unsigned short) max((var_1), (((/* implicit */int) arr_3 [5ULL] [5ULL] [i_11 - 3]))));
                            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 14768980206363272920ULL))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_13 [i_12])))))));
                            var_38 = ((/* implicit */_Bool) max((((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_24 [i_12] [i_9] [(_Bool)1] [i_12] [i_12] [i_12] [i_12])))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) > (1023161023U)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)19]))) >= (arr_26 [i_9 - 1] [(unsigned char)10] [i_10] [i_11] [(unsigned char)10] [(unsigned char)10]))))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                        {
                            var_39 = ((/* implicit */long long int) var_18);
                            var_40 = ((/* implicit */signed char) ((unsigned short) (+(arr_16 [i_11] [i_9 - 1] [i_9] [i_9 - 1]))));
                        }
                    }
                    for (unsigned int i_15 = 3; i_15 < 19; i_15 += 4) 
                    {
                        arr_47 [(unsigned char)2] [i_10] [(signed char)18] [i_15] |= ((/* implicit */_Bool) var_12);
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) var_15))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 3) 
                        {
                            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) var_18))));
                            var_43 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (0ULL)));
                        }
                    }
                    var_44 -= ((/* implicit */short) var_11);
                    var_45 = arr_16 [i_9] [0] [i_9] [i_9];
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) min((((arr_23 [i_9] [i_17] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]) | (arr_23 [19U] [i_9] [i_9 + 1] [i_17] [i_17] [i_17]))), (arr_23 [i_9] [i_9] [i_9 + 2] [i_9] [i_17] [i_9 - 1]))))));
            arr_53 [i_9] [i_9] = ((/* implicit */_Bool) var_4);
        }
        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) 
            {
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) max(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [(_Bool)1])) && (((/* implicit */_Bool) var_10)))))));
                            arr_63 [i_9] [i_20] [i_19] [i_18] [i_9] = ((/* implicit */unsigned short) arr_59 [(short)7] [i_9] [i_9] [i_9] [i_9]);
                        }
                    } 
                } 
            } 
            var_48 = ((/* implicit */unsigned int) arr_60 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [15]);
        }
        for (unsigned short i_22 = 0; i_22 < 20; i_22 += 3) /* same iter space */
        {
            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((((/* implicit */int) arr_55 [10] [10])) << (((/* implicit */int) ((var_5) >= (((/* implicit */long long int) arr_38 [0] [i_22] [4] [4]))))))) < (((/* implicit */int) ((unsigned char) 1711187872914276579ULL))))))));
            var_50 = ((/* implicit */unsigned char) var_17);
        }
        /* LoopSeq 3 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            arr_72 [i_9] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_44 [i_23] [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9]))))));
            /* LoopSeq 1 */
            for (short i_24 = 1; i_24 < 19; i_24 += 4) 
            {
                var_51 = ((arr_34 [i_23] [i_9]) >> (((var_5) - (5971350678925720406LL))));
                var_52 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((16735556200795275045ULL) + (var_8)))) ? (540526839) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)26605)) != (935722479))))))) ? (((long long int) 21)) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (0))))));
                var_53 |= ((/* implicit */int) ((unsigned char) (~(arr_15 [i_9 - 1] [i_23] [i_9 - 1]))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_25 = 0; i_25 < 20; i_25 += 1) /* same iter space */
            {
                var_54 *= ((/* implicit */signed char) var_10);
                /* LoopNest 2 */
                for (unsigned char i_26 = 0; i_26 < 20; i_26 += 1) 
                {
                    for (unsigned int i_27 = 0; i_27 < 20; i_27 += 4) 
                    {
                        {
                            arr_84 [i_9 + 1] [(unsigned short)12] [15] [i_9] [i_27] = ((/* implicit */unsigned char) var_8);
                            arr_85 [i_9] [i_26] [i_9] = ((((/* implicit */unsigned long long int) 277505716892307511LL)) <= (16735556200795275045ULL));
                            var_55 += ((/* implicit */unsigned char) ((((_Bool) arr_81 [i_9 + 2] [i_27] [i_26] [i_26] [i_27] [i_25] [i_27])) ? (arr_54 [i_9] [i_23]) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64503)) - (((/* implicit */int) var_2)))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_28 = 0; i_28 < 20; i_28 += 1) /* same iter space */
            {
                arr_88 [(short)7] [i_9] = ((/* implicit */_Bool) arr_19 [i_23] [i_23] [i_23]);
                /* LoopNest 2 */
                for (signed char i_29 = 0; i_29 < 20; i_29 += 2) 
                {
                    for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) ((unsigned char) arr_23 [i_30 - 1] [i_23] [i_23] [i_23] [i_23] [i_9 + 1])))));
                            var_57 = ((/* implicit */int) min((var_57), (((/* implicit */int) arr_74 [i_9 + 2] [i_28] [i_29] [i_9 + 2]))));
                            var_58 = ((/* implicit */unsigned char) ((arr_73 [i_30 - 1] [i_9]) & (((/* implicit */long long int) ((((/* implicit */int) arr_64 [i_9] [i_28] [i_29])) % (((/* implicit */int) var_18)))))));
                        }
                    } 
                } 
                arr_95 [i_9] [i_23] [i_23] [i_9] = ((signed char) arr_68 [i_9]);
            }
            for (int i_31 = 2; i_31 < 19; i_31 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_32 = 0; i_32 < 20; i_32 += 3) 
                {
                    arr_102 [i_9 - 1] [i_9] [(signed char)17] [(unsigned short)18] [(signed char)6] = ((/* implicit */signed char) var_13);
                    arr_103 [i_9 - 1] [i_9 - 1] [i_9] [i_32] = ((/* implicit */_Bool) arr_40 [i_23] [12U] [i_31 - 2] [i_32] [i_9 + 1]);
                }
                var_59 = ((/* implicit */unsigned char) max((var_59), (((/* implicit */unsigned char) max((3545428431U), (522952817U))))));
                arr_104 [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [12U] [i_9 - 1] [i_23] [i_23])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2)))) <= (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (-935722479)))));
            }
            /* LoopNest 3 */
            for (short i_33 = 2; i_33 < 18; i_33 += 2) 
            {
                for (long long int i_34 = 1; i_34 < 19; i_34 += 3) 
                {
                    for (unsigned char i_35 = 0; i_35 < 20; i_35 += 1) 
                    {
                        {
                            var_60 = ((/* implicit */unsigned short) (unsigned char)121);
                            var_61 -= ((/* implicit */unsigned char) max((-574255925585760635LL), (((/* implicit */long long int) (unsigned char)104))));
                            arr_113 [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_110 [i_9] [(short)2] [i_33] [i_23] [i_9 + 2] [i_9]);
                            var_62 = arr_110 [i_33] [14LL] [0U] [i_34] [i_35] [14LL];
                            arr_114 [i_9] [i_9] [14LL] [i_23] [14ULL] = ((/* implicit */unsigned char) ((long long int) arr_20 [11U] [11U]));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_36 = 4; i_36 < 19; i_36 += 2) 
        {
            var_63 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((long long int) arr_105 [i_36] [i_36 - 2] [i_9] [i_36 - 3]))) | (var_8))));
            /* LoopSeq 2 */
            for (unsigned long long int i_37 = 0; i_37 < 20; i_37 += 1) /* same iter space */
            {
                arr_122 [i_36] [i_9] [i_37] [i_36] = ((/* implicit */short) var_0);
                var_64 = ((/* implicit */long long int) var_8);
            }
            /* vectorizable */
            for (unsigned long long int i_38 = 0; i_38 < 20; i_38 += 1) /* same iter space */
            {
                var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) (unsigned short)65529))));
                var_66 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_71 [i_9 + 1])) << (((((/* implicit */int) arr_115 [i_36 + 1] [i_36 - 1] [16ULL])) - (17315)))))) <= (var_11)));
            }
            arr_127 [i_9] [i_9] [i_9] = ((/* implicit */long long int) arr_46 [i_9] [i_9 + 2] [i_9] [i_9 + 2] [i_9]);
            var_67 = ((/* implicit */unsigned long long int) arr_17 [18LL] [8ULL] [i_9]);
            var_68 = var_4;
        }
        for (long long int i_39 = 0; i_39 < 20; i_39 += 3) 
        {
            var_69 = ((/* implicit */unsigned short) min((var_69), (((/* implicit */unsigned short) arr_21 [i_9 - 1]))));
            arr_130 [(unsigned char)18] |= ((((/* implicit */_Bool) ((unsigned long long int) arr_40 [(short)3] [i_9 + 2] [(unsigned short)3] [(short)3] [i_39]))) ? (((arr_40 [i_39] [i_9 - 1] [i_9 - 1] [i_39] [i_39]) / (arr_40 [i_9] [i_9 - 1] [i_39] [12U] [i_9 - 1]))) : (((arr_40 [i_9 + 2] [i_9 - 1] [i_39] [i_39] [i_39]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
            arr_131 [i_9] [i_9] [i_9] = ((/* implicit */short) var_11);
        }
    }
    var_70 = ((/* implicit */signed char) var_15);
    var_71 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) && (((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned char)136))))));
}
