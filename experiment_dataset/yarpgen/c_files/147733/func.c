/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147733
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
    var_14 = ((((/* implicit */_Bool) var_13)) ? (var_4) : (((var_1) + (((/* implicit */long long int) max((((/* implicit */int) var_5)), (var_12)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_7 [i_0] [i_0 + 1] [i_0]))));
                        arr_9 [i_0 - 1] [i_3] [i_2] = ((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1])))));
                        arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_2] [i_1] [i_1]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                var_16 = ((/* implicit */short) arr_6 [i_0] [i_5]);
                arr_17 [i_0 - 1] [i_4] [i_5] = ((((/* implicit */_Bool) ((signed char) var_10))) ? (((long long int) arr_3 [i_5] [i_0 + 1] [i_0 + 1])) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
            }
            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1])) * (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
        }
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                var_18 = ((/* implicit */short) ((unsigned short) arr_20 [i_0 - 1]));
                /* LoopSeq 4 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    arr_27 [i_0] [i_6] [i_7] = arr_3 [(unsigned short)15] [i_6] [i_0];
                    arr_28 [i_7] [i_7] = ((/* implicit */long long int) arr_16 [i_0 + 1]);
                    var_19 = ((/* implicit */long long int) ((int) var_10));
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_20 *= ((/* implicit */unsigned int) arr_12 [i_0]);
                    arr_32 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_6))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [3U] [i_0])) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_2))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_11 [i_0])))) ? (((/* implicit */int) arr_24 [i_0] [i_6] [20] [20] [i_6] [i_0])) : (((/* implicit */int) var_7))));
                    var_23 = ((/* implicit */long long int) ((arr_11 [i_0 - 1]) >= (arr_5 [i_0 + 1] [i_9 - 1])));
                }
                for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        arr_39 [i_0] [i_6] [i_0] [i_10] [i_11] [i_6] [(short)8] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (((/* implicit */int) var_6))))) - (arr_11 [i_10])));
                        var_24 -= ((/* implicit */unsigned char) arr_37 [(unsigned short)14] [i_7] [i_7] [(unsigned short)14] [i_7]);
                    }
                    var_25 = ((/* implicit */short) var_9);
                    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) & (((/* implicit */int) ((short) var_3)))));
                    var_27 = ((/* implicit */int) arr_0 [i_7] [(_Bool)1]);
                    arr_40 [i_7] [i_7] = ((/* implicit */short) arr_8 [4U] [i_6] [(short)21] [i_6]);
                }
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    arr_43 [i_12] [i_7] [i_7] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_0 - 1])) ? (arr_26 [i_0 + 1]) : (arr_26 [i_0 + 1])));
                    var_29 = ((/* implicit */unsigned long long int) var_7);
                    var_30 = ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1])));
                }
            }
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                arr_48 [i_0] [i_0] [i_13] [i_0] = ((/* implicit */unsigned char) var_6);
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((arr_0 [(unsigned short)17] [(unsigned short)17]) - (3760168351567583475LL))))))));
            }
            for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                var_32 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_45 [i_0 - 1] [(unsigned char)12] [(short)6]))));
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_0 + 1] [i_6] [i_14] [i_14] [i_14] [i_6])) & (((/* implicit */int) arr_24 [i_0 + 1] [i_6] [i_0] [i_6] [(_Bool)1] [16U]))));
            }
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                        /* LoopSeq 3 */
                        for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) 
                        {
                            arr_59 [i_15] [i_15] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_35 [i_0] [(unsigned short)2] [19LL] [i_0])) ? (((/* implicit */int) arr_19 [i_17])) : (((/* implicit */int) var_7)))) : (arr_26 [i_0 - 1])));
                            var_36 = ((/* implicit */signed char) (!(var_9)));
                            var_37 += ((/* implicit */long long int) arr_19 [i_0]);
                        }
                        for (short i_18 = 1; i_18 < 23; i_18 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((arr_21 [i_0 - 1] [(unsigned char)21]) & (((/* implicit */unsigned long long int) arr_57 [i_18 + 1] [i_0 - 1] [i_18] [i_18] [i_6] [i_0 - 1] [i_0 - 1])))))));
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_18 - 1] [i_18] [i_0 + 1])) / (((/* implicit */int) arr_15 [i_18 - 1] [i_6] [i_0 - 1]))));
                            var_40 += ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_15] [i_15] [i_15] [i_15] [i_18 + 1] [i_15]))) : (arr_0 [i_0] [i_6]))));
                        }
                        for (long long int i_19 = 0; i_19 < 24; i_19 += 1) 
                        {
                            arr_65 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) : (((int) arr_60 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [15])));
                            arr_66 [i_15] [i_15] [i_15] = ((/* implicit */short) arr_15 [i_0 + 1] [(signed char)18] [i_15]);
                        }
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (arr_26 [i_0 + 1])));
                        var_42 = ((/* implicit */_Bool) ((signed char) arr_8 [i_6] [i_0 - 1] [i_0] [i_0]));
                    }
                } 
            } 
        }
        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) arr_38 [i_0] [7LL] [i_0] [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (int i_20 = 0; i_20 < 24; i_20 += 4) 
        {
            var_44 = ((((/* implicit */_Bool) arr_25 [i_0 + 1])) ? (((/* implicit */int) arr_25 [i_0 + 1])) : (((/* implicit */int) var_7)));
            var_45 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [(unsigned char)3] [i_20] [(unsigned char)3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0 + 1])) ? (((/* implicit */int) var_0)) : (arr_58 [i_0] [i_20] [i_20] [i_0] [i_0] [i_20] [16]))))));
        }
        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            arr_73 [i_21] [i_21] = ((/* implicit */_Bool) var_4);
            var_46 = ((/* implicit */_Bool) arr_24 [i_21] [i_21] [i_21] [(unsigned short)22] [i_0 - 1] [(unsigned short)22]);
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (arr_58 [i_0] [(signed char)3] [i_0] [i_0 + 1] [i_21] [15] [i_21])))) ? (((/* implicit */long long int) arr_71 [i_0 - 1] [i_21])) : (arr_5 [i_21] [i_21])));
            var_48 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */unsigned long long int) arr_31 [i_21] [i_21])) : (var_3))));
        }
        var_49 = ((/* implicit */unsigned long long int) ((var_3) >= (((/* implicit */unsigned long long int) arr_72 [i_0 - 1]))));
    }
    /* vectorizable */
    for (short i_22 = 1; i_22 < 23; i_22 += 1) /* same iter space */
    {
        var_50 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_38 [i_22 + 1] [i_22 - 1] [i_22 - 1] [i_22] [i_22 + 1]) : (arr_38 [i_22] [i_22] [i_22 - 1] [i_22] [i_22 - 1])));
        arr_76 [i_22 + 1] [i_22 + 1] = ((/* implicit */_Bool) var_4);
    }
    for (short i_23 = 1; i_23 < 23; i_23 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_24 = 2; i_24 < 22; i_24 += 2) /* same iter space */
        {
            arr_83 [i_24] = ((/* implicit */unsigned int) arr_45 [i_24] [i_24] [1ULL]);
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 1; i_25 < 20; i_25 += 3) 
            {
                for (signed char i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    for (unsigned char i_27 = 0; i_27 < 24; i_27 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_85 [7U] [7U] [i_25] [7U]))))) : (((unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((((unsigned long long int) arr_42 [i_23 - 1] [21ULL] [i_27] [i_26])) - (22829ULL))))))));
                            var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) var_11))));
                        }
                    } 
                } 
            } 
            var_53 *= ((/* implicit */signed char) max((((/* implicit */long long int) max((arr_69 [i_23 + 1]), (((/* implicit */short) arr_81 [i_23] [i_23] [i_24 + 1]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (max((((/* implicit */long long int) var_12)), (var_4))) : (((/* implicit */long long int) arr_18 [i_23 - 1] [i_24 - 1]))))));
            var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_37 [(signed char)7] [i_23 - 1] [i_24] [i_24] [i_24])) ? (((/* implicit */int) arr_50 [i_23] [i_23] [i_23])) : (arr_91 [i_23] [i_23] [i_23] [7ULL] [i_23] [i_23]))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_75 [(unsigned char)12])), (var_8)))))) < (((/* implicit */int) var_11)))))));
        }
        /* vectorizable */
        for (short i_28 = 2; i_28 < 22; i_28 += 2) /* same iter space */
        {
            arr_95 [i_28] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_23 + 1]))));
            var_55 = ((/* implicit */unsigned char) ((unsigned short) var_9));
        }
        var_56 = ((/* implicit */signed char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */int) ((signed char) arr_13 [i_23]))) : ((+(((/* implicit */int) arr_29 [i_23 - 1]))))))));
        /* LoopNest 2 */
        for (unsigned char i_29 = 0; i_29 < 24; i_29 += 1) 
        {
            for (unsigned char i_30 = 0; i_30 < 24; i_30 += 4) 
            {
                {
                    var_57 = ((/* implicit */unsigned int) var_3);
                    var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_23 - 1] [i_23 - 1])) ? (arr_5 [i_23 - 1] [i_23 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (arr_44 [i_23] [i_23 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    arr_101 [i_23] [12ULL] [i_29] [i_30] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_5 [i_30] [i_23 - 1]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_78 [i_29])) : (((/* implicit */int) var_7))))))), (((/* implicit */long long int) var_11))));
                    /* LoopNest 2 */
                    for (unsigned int i_31 = 0; i_31 < 24; i_31 += 2) 
                    {
                        for (short i_32 = 0; i_32 < 24; i_32 += 2) 
                        {
                            {
                                arr_107 [i_29] [3LL] [i_29] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */short) arr_41 [i_23] [i_32] [(signed char)16] [i_31] [i_23 + 1]);
                                var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) (!(((/* implicit */_Bool) ((((long long int) arr_99 [i_30])) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_50 [i_23] [i_29] [i_31]))))))))))));
                            }
                        } 
                    } 
                    arr_108 [i_23] [i_23] [i_23 - 1] = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_80 [(unsigned short)7] [i_29]))))), (max((((/* implicit */signed char) var_9)), (arr_25 [i_23 - 1])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_33 = 0; i_33 < 12; i_33 += 4) 
    {
        var_60 = ((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_33]))));
        /* LoopNest 2 */
        for (unsigned short i_34 = 0; i_34 < 12; i_34 += 2) 
        {
            for (int i_35 = 0; i_35 < 12; i_35 += 1) 
            {
                {
                    arr_118 [(short)6] [i_35] [i_33] = ((/* implicit */signed char) ((arr_100 [i_33] [i_33] [i_33]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_35] [i_34] [i_34] [i_33])))));
                    var_61 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_23 [i_33] [i_33]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_33]))) : (var_3)));
                }
            } 
        } 
        var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) var_8))));
        /* LoopNest 3 */
        for (unsigned int i_36 = 0; i_36 < 12; i_36 += 4) 
        {
            for (long long int i_37 = 0; i_37 < 12; i_37 += 1) 
            {
                for (unsigned long long int i_38 = 0; i_38 < 12; i_38 += 2) 
                {
                    {
                        arr_126 [i_33] [i_36] [i_38] [i_33] [i_37] = ((long long int) arr_55 [i_33] [i_33]);
                        var_63 *= ((/* implicit */long long int) ((arr_86 [i_33] [i_36] [i_36]) >= (((((/* implicit */int) var_6)) | (((/* implicit */int) var_7))))));
                        var_64 *= ((/* implicit */signed char) (+(arr_71 [i_33] [i_36])));
                        arr_127 [i_33] [i_33] [i_33] [i_37] = ((/* implicit */unsigned char) ((unsigned long long int) var_6));
                    }
                } 
            } 
        } 
    }
}
