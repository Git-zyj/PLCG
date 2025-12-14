/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151034
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) min(((signed char)-1), (((/* implicit */signed char) arr_4 [i_0] [i_0]))));
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [15]))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) - (((unsigned int) (-(((/* implicit */int) (signed char)0)))))));
                    arr_8 [i_0] [i_1] [i_0] [(signed char)18] = ((/* implicit */short) 4095);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_2)))));
                                arr_13 [i_0] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((arr_6 [i_0] [i_1] [i_0] [i_4]), (((/* implicit */signed char) arr_4 [i_0] [i_1]))))) : (((/* implicit */int) ((((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (signed char)58)))) != (((/* implicit */int) min((arr_12 [i_0] [i_1]), (((/* implicit */unsigned short) (signed char)-1))))))))));
                                var_22 = ((/* implicit */unsigned int) (-(((unsigned long long int) (signed char)-1))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) ((arr_3 [i_0]) && (((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_0])) * (1736538526))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) 360127179);
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    {
                        arr_24 [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) 18014398509481983LL)) ? (576460752303423488LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))))) < (((/* implicit */long long int) (~(((/* implicit */int) (signed char)11)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) arr_26 [i_5] [i_6] [i_7] [i_8] [i_9]);
                            arr_27 [i_5] [i_8] [(signed char)15] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-12))))) ? (((/* implicit */int) arr_20 [i_5] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                        for (short i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_5] [i_7] [i_8] [i_10]));
                            var_26 = ((/* implicit */_Bool) (~(max((arr_21 [i_5] [i_6] [i_6] [i_6] [i_5] [i_10]), (arr_21 [i_5] [i_6] [i_7] [i_8] [i_5] [i_8])))));
                            arr_31 [i_5] [i_7] [i_5] [(unsigned short)9] [i_10] [i_7] [i_5] = (~((~(((/* implicit */int) arr_19 [15U] [i_5] [i_5] [15U])))));
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (((/* implicit */int) (signed char)-12)) : (((((/* implicit */_Bool) min((arr_30 [i_5] [(short)11] [5U] [i_5] [i_5]), (((/* implicit */long long int) (signed char)-46))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6]))))) : (((/* implicit */int) arr_19 [i_5] [i_5] [i_6] [i_6]))))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_32 [i_5] [i_11]))))));
                            arr_38 [i_5] [i_5] [i_5] [i_12] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)22)), (max((((/* implicit */unsigned int) (signed char)45)), (4294967295U)))));
                            arr_39 [i_5] [i_5] [i_5] [(unsigned short)0] [i_5] = arr_25 [i_12] [i_12] [i_11] [i_6] [i_5];
                            var_29 = ((/* implicit */short) max((((unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (18446744073709551615ULL)))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_26 [i_5] [i_6] [i_6] [i_6] [i_6])), (max((((/* implicit */short) var_13)), (var_3))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 21; i_17 += 4) /* same iter space */
                        {
                            arr_52 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((_Bool) arr_47 [i_15] [i_5]));
                            var_30 = ((/* implicit */unsigned long long int) arr_45 [i_5] [i_15]);
                            var_31 = arr_19 [i_5] [i_5] [i_5] [i_5];
                            arr_53 [i_5] [i_5] [i_14] [i_15] [i_15] [i_16] [i_17] = ((/* implicit */unsigned int) ((arr_21 [i_5] [i_14] [18LL] [i_16] [i_5] [i_17]) < (arr_21 [(short)15] [(short)15] [i_15] [i_16] [i_5] [i_17])));
                            arr_54 [i_5] [i_5] [10U] [i_5] [i_17] [i_15] [i_16] = ((/* implicit */int) var_0);
                        }
                        for (long long int i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_55 [8U] [i_14] [3U] [i_5] [20LL] [i_14] [i_5])), (arr_28 [i_5] [i_14] [i_14] [i_16] [(short)13])))) / (((((/* implicit */_Bool) 1ULL)) ? (arr_32 [i_5] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                            var_33 = ((/* implicit */unsigned long long int) var_17);
                            arr_57 [i_18] [i_5] [i_15] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_5] [i_5]))) <= ((+(arr_49 [i_5] [(signed char)11] [i_5] [i_16] [i_5] [i_18]))))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 3) 
                        {
                            arr_62 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_17 [i_5]), (((/* implicit */long long int) arr_23 [(_Bool)1] [i_14] [i_15] [i_19]))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_5])))));
                            arr_63 [(short)18] [i_19] [i_19] [i_19] [i_5] [i_19] = ((/* implicit */short) max(((-(((/* implicit */int) (signed char)-1)))), ((-(((/* implicit */int) arr_35 [i_19] [i_19] [i_5] [i_5] [i_14] [i_5]))))));
                        }
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) var_17)) - (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_16] [i_15] [i_5] [i_14] [i_5]))))), ((-(1736538523)))))));
                        arr_64 [i_5] [i_5] [i_15] [i_16] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 3) 
            {
                for (signed char i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    {
                        var_35 = ((/* implicit */_Bool) arr_49 [i_5] [i_14] [i_14] [i_20] [i_5] [i_21]);
                        arr_70 [i_5] [(unsigned short)9] [i_5] [i_5] [(unsigned short)16] [i_5] = ((/* implicit */_Bool) arr_55 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
        {
            arr_73 [i_5] [i_22] = ((/* implicit */unsigned int) ((((long long int) (-(((/* implicit */int) arr_65 [i_5]))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60129)))))) >= (var_6)))))));
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 21; i_23 += 3) 
            {
                var_36 = ((/* implicit */unsigned short) ((arr_56 [i_5] [i_5] [i_5] [i_5] [12] [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))));
                var_37 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_42 [i_5]))) * (((((/* implicit */_Bool) (-(360127183)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)45))))) : (((/* implicit */int) ((unsigned short) arr_61 [i_5] [i_22] [i_5])))))));
                arr_76 [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((arr_71 [i_5] [i_5]), (((/* implicit */unsigned long long int) 25165824U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)29)) + (arr_47 [i_5] [i_5])))))))));
            }
            /* LoopNest 2 */
            for (short i_24 = 0; i_24 < 21; i_24 += 4) 
            {
                for (signed char i_25 = 0; i_25 < 21; i_25 += 1) 
                {
                    {
                        var_38 = ((/* implicit */_Bool) (+((-(arr_21 [i_5] [0ULL] [i_22] [i_24] [i_5] [0ULL])))));
                        var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_59 [i_25] [i_5] [i_22] [i_5] [i_5]))))))));
                    }
                } 
            } 
            var_40 = ((/* implicit */long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) == (3973543397U))) ? (321423898U) : (((/* implicit */unsigned int) 1073741823)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(var_8))))))));
            var_41 = ((/* implicit */short) arr_49 [i_5] [i_5] [i_5] [i_22] [i_5] [i_22]);
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */long long int) (+((+((-(arr_56 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
            var_43 = var_2;
            arr_88 [i_5] = ((/* implicit */signed char) ((arr_46 [i_5] [3ULL] [i_5] [i_5]) != (min((((/* implicit */unsigned int) -2128886851)), (652614330U)))));
            var_44 = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned long long int) arr_69 [i_26] [i_26] [i_5])), (((arr_56 [i_26] [i_5] [(short)20] [i_5] [i_5] [i_5]) & (((/* implicit */unsigned long long int) arr_81 [i_5] [(unsigned char)4] [i_5] [i_5])))))));
            arr_89 [i_5] = ((/* implicit */short) ((unsigned short) ((unsigned long long int) arr_65 [i_5])));
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 3) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_32 [i_5] [i_27]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17)))))))) ? ((~(((/* implicit */int) arr_90 [i_29])))) : (((/* implicit */int) (signed char)12))));
                        arr_100 [(signed char)0] [i_27] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_5])) >= (((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_6))))) + (((/* implicit */int) arr_92 [i_28] [i_27] [i_5]))))));
                        arr_101 [i_5] = ((/* implicit */short) ((unsigned char) -688640592));
                    }
                } 
            } 
            var_46 = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_61 [i_5] [i_27] [i_5])))), (((/* implicit */int) arr_61 [i_5] [i_27] [i_5]))));
            arr_102 [i_5] = ((/* implicit */int) arr_25 [(_Bool)1] [i_27] [i_5] [i_5] [i_5]);
        }
        /* LoopNest 2 */
        for (unsigned short i_30 = 0; i_30 < 21; i_30 += 3) 
        {
            for (unsigned int i_31 = 0; i_31 < 21; i_31 += 3) 
            {
                {
                    var_47 = ((/* implicit */long long int) ((unsigned int) 1116635023));
                    arr_108 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_94 [i_5] [i_5])) ? (arr_97 [i_5] [i_5] [(unsigned char)13] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))));
                }
            } 
        } 
    }
    for (short i_32 = 0; i_32 < 11; i_32 += 2) 
    {
        arr_111 [(unsigned char)8] = ((/* implicit */long long int) ((unsigned int) (+(-1073741829))));
        var_48 = ((/* implicit */short) ((int) ((((/* implicit */int) (!(arr_19 [i_32] [i_32] [i_32] [(_Bool)1])))) ^ (((/* implicit */int) var_4)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_33 = 0; i_33 < 11; i_33 += 4) 
        {
            var_49 = ((/* implicit */unsigned int) ((signed char) var_11));
            arr_114 [i_33] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_33])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1663819266U)))))) : (17484158074869727069ULL)));
            /* LoopNest 2 */
            for (unsigned long long int i_34 = 0; i_34 < 11; i_34 += 1) 
            {
                for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                {
                    {
                        arr_119 [i_32] [i_32] [i_32] [i_35] = ((/* implicit */_Bool) arr_94 [i_32] [16LL]);
                        var_50 = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) (short)2406)))));
                        var_51 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_48 [i_35] [i_35]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
        {
            var_52 = ((/* implicit */unsigned long long int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) arr_104 [i_32] [i_36] [i_32])))));
            arr_122 [i_36] [i_32] = ((/* implicit */unsigned long long int) ((signed char) arr_45 [i_32] [i_32]));
        }
        /* vectorizable */
        for (unsigned long long int i_37 = 0; i_37 < 11; i_37 += 4) 
        {
            arr_127 [i_32] = ((/* implicit */unsigned short) var_12);
            arr_128 [(unsigned char)9] [i_32] [i_37] = ((/* implicit */unsigned short) arr_4 [i_32] [i_32]);
        }
        var_53 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 6917529027641081856LL))));
        arr_129 [(signed char)5] [i_32] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-46)))))));
    }
    for (signed char i_38 = 0; i_38 < 15; i_38 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_39 = 0; i_39 < 15; i_39 += 1) 
        {
            for (unsigned long long int i_40 = 0; i_40 < 15; i_40 += 4) 
            {
                {
                    var_54 = ((/* implicit */short) arr_55 [8LL] [i_38] [i_39] [i_39] [i_39] [i_39] [i_40]);
                    arr_138 [i_39] [i_39] = ((/* implicit */unsigned short) max(((signed char)-52), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_38] [i_39] [i_39] [i_39] [i_40])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_41 = 0; i_41 < 15; i_41 += 3) 
                    {
                        arr_141 [14U] [(_Bool)1] [(_Bool)1] [i_41] [i_39] = ((/* implicit */long long int) (signed char)12);
                        arr_142 [(signed char)10] [i_41] [(signed char)10] [i_39] = ((/* implicit */unsigned long long int) (unsigned char)5);
                        /* LoopSeq 1 */
                        for (int i_42 = 0; i_42 < 15; i_42 += 4) 
                        {
                            var_55 = ((/* implicit */long long int) arr_37 [i_38] [i_39]);
                            var_56 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 3ULL))))));
                        }
                        var_57 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_3)))) != ((+(((/* implicit */int) arr_99 [i_39] [i_39] [i_40] [i_40] [i_40]))))));
                    }
                }
            } 
        } 
        arr_145 [i_38] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_104 [i_38] [i_38] [i_38]))));
        var_58 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */int) var_17)), (arr_82 [6LL] [i_38] [i_38] [i_38] [(unsigned short)20])))), (min((1663819266U), (arr_87 [i_38])))))) ? (arr_51 [(signed char)14] [i_38] [i_38] [i_38] [i_38]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    for (signed char i_43 = 0; i_43 < 12; i_43 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_44 = 0; i_44 < 12; i_44 += 4) 
        {
            arr_154 [i_44] [i_43] [i_43] = ((/* implicit */unsigned long long int) ((((_Bool) 2787305184U)) && (((/* implicit */_Bool) 1736538526))));
            /* LoopSeq 1 */
            for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
            {
                arr_157 [i_43] [3] [i_43] [i_45] = ((/* implicit */signed char) var_10);
                arr_158 [i_45] [i_44] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (short)-1518))) ? (((arr_107 [i_45]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6144))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12)))));
            }
        }
        arr_159 [i_43] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [12U])) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) arr_150 [i_43] [i_43] [i_43])) ? (((/* implicit */int) (short)16278)) : (((/* implicit */int) (signed char)-3)))))))));
        var_59 = ((/* implicit */int) (signed char)0);
    }
    var_60 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-10))));
}
