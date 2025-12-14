/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163988
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_14))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((short) var_6)))) ? (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */short) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (12883322215646547792ULL) : (((/* implicit */unsigned long long int) -566766961)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) min((arr_1 [i_0] [(short)5]), (((/* implicit */short) (unsigned char)255))))) : (((/* implicit */int) var_4)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) var_7);
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((_Bool) arr_1 [i_0] [i_0]));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_17))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (arr_8 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
            var_24 += ((/* implicit */unsigned char) ((unsigned short) -2032300042));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((_Bool) 2947953806141606215LL)))));
            var_26 = ((/* implicit */signed char) ((int) var_18));
            arr_16 [i_0] = ((/* implicit */unsigned char) 1793391076636271255LL);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */int) arr_18 [i_0] [i_6] [i_6])) : (((/* implicit */int) var_17))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_6]))) : (arr_6 [i_8])));
                        var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_8] [i_6] [i_0]))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_7] [i_7]))))) ? (16599915347874950101ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6])))));
                        var_31 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
                    }
                } 
            } 
        }
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 11911488683653674254ULL)) ? (651562565770924562LL) : (((/* implicit */long long int) 26335102))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 3; i_11 < 13; i_11 += 3) 
                {
                    arr_36 [i_0] = ((/* implicit */signed char) var_13);
                    arr_37 [i_9] = ((/* implicit */short) var_5);
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_11 - 1] [i_11 + 1] [i_11 - 3] [i_11 + 3])) ? (arr_34 [i_11 - 1] [i_11 + 1] [i_11 - 3] [i_11 + 3]) : (arr_34 [i_11 - 1] [i_11 + 1] [i_11 - 3] [i_11 + 3])));
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_11))));
                }
                var_35 = var_12;
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 2) 
            {
                arr_40 [i_12] [i_12 - 1] = ((/* implicit */unsigned char) ((unsigned short) var_2));
                arr_41 [i_0] [i_9] [i_12] = ((/* implicit */unsigned short) min((6535255390055877361ULL), (((((/* implicit */_Bool) (unsigned short)20437)) ? (1846828725834601515ULL) : (6535255390055877362ULL)))));
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_12] [(unsigned char)4] [i_12 - 1] [i_12 - 3]) ? (arr_24 [i_12 - 2] [i_12 - 3] [i_12 - 1] [i_12 - 3] [i_12 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) max((arr_4 [i_12] [i_12] [i_12 - 1]), (((/* implicit */unsigned short) var_8))))) : (((((/* implicit */_Bool) arr_4 [i_12 - 3] [i_12 - 3] [i_12 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_12] [i_12] [i_12 - 1]))))));
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_0 [i_0]))));
            }
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                arr_45 [(unsigned char)5] [(unsigned char)13] [i_13] = ((/* implicit */short) var_7);
                /* LoopSeq 3 */
                for (short i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 1; i_15 < 13; i_15 += 1) 
                    {
                        var_38 += ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_43 [i_0] [i_0] [i_15 + 1] [i_15 + 3])) : (((/* implicit */int) var_15))));
                        arr_50 [i_0] [i_9] [i_9] [i_14] [(unsigned char)14] [(unsigned char)14] [i_9] = ((/* implicit */_Bool) arr_12 [i_9] [i_0]);
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_18))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        var_40 = ((/* implicit */short) ((unsigned short) var_16));
                        var_41 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        var_42 &= ((/* implicit */unsigned int) ((unsigned char) var_11));
                        arr_56 [i_17] [i_17] [i_14] [(unsigned char)0] [i_9] [i_0] &= ((/* implicit */unsigned char) var_15);
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_9] [14U] [i_17])))))) ? (arr_46 [i_0] [i_9] [i_0] [i_9]) : (((/* implicit */int) arr_18 [i_14] [i_14] [i_13]))));
                        arr_57 [i_0] [i_9] [i_9] [i_0] [i_17] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    var_44 = ((/* implicit */unsigned short) var_2);
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_19 = 0; i_19 < 16; i_19 += 2) 
                    {
                        arr_66 [i_0] [(_Bool)1] [i_13] [i_13] [i_18] [i_19] = ((/* implicit */unsigned char) arr_33 [i_0] [(_Bool)1] [i_13] [i_0] [8U] [i_19]);
                        var_45 += ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_9] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))));
                        var_46 = ((/* implicit */unsigned char) arr_5 [i_0]);
                        var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) var_14))));
                        var_48 = ((/* implicit */int) var_16);
                    }
                    for (unsigned int i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        var_49 = ((/* implicit */signed char) var_0);
                        var_50 = ((/* implicit */unsigned long long int) 0U);
                        var_51 = ((/* implicit */short) var_17);
                    }
                    arr_70 [i_0] [i_9] = ((/* implicit */_Bool) 0U);
                    var_52 = ((/* implicit */signed char) ((short) arr_10 [i_0] [i_9] [i_9] [i_18]));
                }
                for (int i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        var_53 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26105))) : (-2947953806141606215LL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))));
                        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_73 [i_0] [i_21] [i_22] [i_22] [i_21]) : (var_3)));
                        arr_76 [i_22] [i_13] [i_22] = ((/* implicit */_Bool) ((unsigned int) arr_6 [i_0]));
                    }
                    for (unsigned short i_23 = 0; i_23 < 16; i_23 += 4) /* same iter space */
                    {
                        var_55 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9)))));
                        var_56 = ((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_23]);
                    }
                    for (unsigned short i_24 = 0; i_24 < 16; i_24 += 4) /* same iter space */
                    {
                        var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) ((unsigned short) arr_73 [i_9] [i_0] [i_24] [i_21] [i_24])))));
                        var_58 *= ((/* implicit */unsigned short) var_11);
                        var_59 += ((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_21]));
                    }
                    for (short i_25 = 0; i_25 < 16; i_25 += 4) 
                    {
                        var_60 = ((/* implicit */short) ((unsigned int) var_6));
                        arr_84 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */int) ((_Bool) arr_82 [i_0] [i_9] [i_9] [i_13]));
                        var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1513847256U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_79 [i_25]))) : (2749816963U)));
                        var_62 += ((/* implicit */_Bool) var_11);
                        var_63 = ((/* implicit */unsigned char) ((var_18) ? (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        var_64 = ((/* implicit */unsigned short) (unsigned char)0);
                        arr_87 [i_0] [i_9] [i_13] [i_21] [i_26] = ((signed char) ((((/* implicit */_Bool) arr_8 [i_9] [(signed char)15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_13] [i_21] [i_26]))) : (-651562565770924562LL)));
                    }
                    for (short i_27 = 0; i_27 < 16; i_27 += 1) 
                    {
                        var_65 = ((/* implicit */unsigned short) ((int) arr_49 [i_0] [i_0] [i_21] [i_27]));
                        var_66 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_13] [i_0])) ? (arr_72 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 862541547U)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (signed char)-63)))))));
                    }
                    for (unsigned short i_28 = 0; i_28 < 16; i_28 += 2) 
                    {
                        var_67 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_9] [i_13])) ? (((/* implicit */int) arr_4 [i_0] [i_9] [i_13])) : (((/* implicit */int) (unsigned short)24936))));
                        var_68 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_9] [i_13] [i_28])) ? (((/* implicit */int) arr_28 [i_0])) : (((int) var_10))));
                        var_69 -= arr_47 [i_0] [i_9] [i_13] [(_Bool)1] [i_28];
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        arr_95 [i_9] [i_9] [i_9] [i_21] [(unsigned short)1] [i_21] [i_13] = ((/* implicit */long long int) arr_67 [i_0] [i_13] [i_21] [i_29]);
                        var_70 = ((/* implicit */unsigned long long int) min((var_70), (((/* implicit */unsigned long long int) ((_Bool) var_7)))));
                    }
                    var_71 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((long long int) arr_29 [i_0] [i_9] [i_13])) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                }
                /* LoopSeq 3 */
                for (int i_30 = 0; i_30 < 16; i_30 += 3) /* same iter space */
                {
                    arr_99 [13U] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_23 [i_13] [i_13])) : (((/* implicit */int) var_17)))) : (((/* implicit */int) var_6))));
                    arr_100 [i_9] [(signed char)13] = ((/* implicit */_Bool) arr_43 [i_0] [i_13] [i_13] [i_9]);
                    var_72 = ((/* implicit */unsigned int) min((var_72), (((/* implicit */unsigned int) arr_85 [i_0] [i_9] [i_30] [i_9] [i_0]))));
                    var_73 = ((/* implicit */unsigned short) (signed char)0);
                }
                for (int i_31 = 0; i_31 < 16; i_31 += 3) /* same iter space */
                {
                    var_74 += ((/* implicit */_Bool) ((unsigned short) arr_89 [10LL] [i_0] [i_0] [i_0] [i_31]));
                    var_75 = ((/* implicit */short) ((unsigned short) arr_93 [i_0] [i_0] [i_0] [i_0] [i_0]));
                    arr_103 [i_31] [(_Bool)1] [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_16));
                    var_76 -= ((/* implicit */unsigned short) arr_46 [i_0] [i_9] [i_13] [i_31]);
                }
                for (int i_32 = 0; i_32 < 16; i_32 += 3) /* same iter space */
                {
                    var_77 = ((/* implicit */int) ((unsigned short) arr_0 [i_0]));
                    var_78 = ((/* implicit */unsigned char) var_1);
                }
                arr_107 [i_0] [i_9] [2] = ((/* implicit */unsigned char) ((unsigned short) var_8));
            }
            /* vectorizable */
            for (int i_33 = 0; i_33 < 16; i_33 += 2) 
            {
                arr_111 [i_0] [i_9] [i_0] [i_33] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))));
                var_79 = ((/* implicit */unsigned int) arr_4 [i_0] [i_9] [i_9]);
                arr_112 [i_9] [i_9] [i_33] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_105 [i_33] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_105 [i_0] [i_33] [i_33] [i_0] [i_33])) : (((/* implicit */int) var_18))));
                var_80 = ((/* implicit */unsigned int) min((var_80), (((unsigned int) var_3))));
                var_81 = ((/* implicit */unsigned short) arr_19 [i_9]);
            }
        }
    }
    var_82 = ((/* implicit */short) var_17);
}
