/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127979
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
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((short) (~(arr_2 [i_0 - 2] [(unsigned char)13]))));
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_15 [i_0 + 1] [i_0 - 3] [i_0 + 2] [i_0] [i_0 - 3] [i_0 - 1] [4U] = (+(((/* implicit */int) ((signed char) arr_13 [i_0] [i_1] [i_2] [i_3] [(unsigned short)12] [i_4]))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (arr_10 [i_0 + 2])));
                            arr_16 [i_0] [i_0 - 3] [14] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned int) arr_14 [i_0 - 1] [i_1 + 3] [i_2] [i_3] [i_4]));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            arr_20 [i_5] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) (~(arr_3 [i_2 - 1])));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0 + 2] [(short)12] [i_5] [i_1 + 2] [i_2] [i_3] [i_5])) ? (((/* implicit */int) arr_19 [i_0 - 3] [i_1 - 1] [i_5] [i_3] [i_5] [i_5] [i_3])) : (((/* implicit */int) arr_19 [i_0 - 2] [i_1 - 1] [i_5] [i_2] [i_5 + 1] [i_2 + 1] [i_1 + 3]))));
                            arr_21 [i_0] [i_1] [i_2] [7U] [i_5] = ((/* implicit */short) arr_1 [i_0] [i_2 - 1]);
                        }
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */int) ((signed char) arr_24 [i_0 - 2] [i_2 - 1]));
                            arr_26 [i_0 - 3] [i_0] [i_0] [20U] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */long long int) arr_18 [i_2 + 1] [i_2] [12U] [(signed char)8] [i_3] [i_2 - 1]);
                        }
                        arr_27 [i_3] [(short)21] |= ((/* implicit */unsigned char) (-(arr_11 [i_2 + 1] [i_1 - 4] [i_0 - 3] [i_3] [(signed char)8] [i_3])));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_12)), (min((var_6), (var_9)))));
    var_22 *= var_14;
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_23 &= min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (arr_29 [i_7]) : (((/* implicit */unsigned long long int) arr_3 [i_7])))))))), (arr_7 [i_7] [i_7]));
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            var_24 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((arr_31 [i_7]), (arr_1 [i_7] [i_8]))), (arr_31 [i_7]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        {
                            var_25 = arr_3 [i_7];
                            var_26 = ((/* implicit */int) ((unsigned long long int) arr_24 [i_7] [i_9]));
                            arr_39 [i_7] [i_7] [i_7] [17] [9U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(arr_6 [i_8] [i_8] [i_8]))), (max((arr_4 [i_7]), (((/* implicit */unsigned int) arr_24 [i_8] [i_10]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_19 [i_7] [i_8] [i_11] [i_10] [i_10] [i_11] [i_11])), (arr_3 [i_7])))) : (max((((/* implicit */unsigned long long int) arr_33 [i_10] [i_10])), (arr_29 [i_8])))));
                            arr_40 [i_7] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */short) arr_30 [i_7] [i_9] [17LL]);
                        }
                    } 
                } 
            } 
            arr_41 [i_7] [i_8] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_33 [i_7] [i_8])), (max((((/* implicit */unsigned long long int) arr_24 [(unsigned short)1] [i_8])), (((((/* implicit */_Bool) arr_19 [4LL] [i_7] [i_7] [i_7] [i_8] [i_8] [i_8])) ? (arr_30 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) arr_28 [i_7]))))))));
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 2; i_14 < 18; i_14 += 2) 
                {
                    arr_50 [i_7] [i_12] [i_13 - 1] [i_14] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_13 - 1] [i_14 + 1] [i_14 - 2]))));
                    var_27 = ((/* implicit */signed char) min((var_27), (arr_36 [i_14] [i_13] [10] [i_12] [i_12] [(short)11] [i_7])));
                }
                for (unsigned long long int i_15 = 2; i_15 < 18; i_15 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        arr_58 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_13 - 1] [i_15 - 1] [i_16])) ? (((((/* implicit */_Bool) arr_43 [i_12] [i_16])) ? (((/* implicit */int) arr_19 [(signed char)10] [i_15 - 1] [i_7] [i_15 + 1] [i_7] [i_7] [i_16])) : (((/* implicit */int) arr_25 [i_13])))) : (((/* implicit */int) arr_12 [i_16]))));
                        arr_59 [i_7] [i_13 - 1] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) arr_8 [i_13 + 2] [i_13 + 2])) : (((/* implicit */int) arr_8 [i_13 + 1] [i_13 - 1]))));
                        arr_60 [i_7] [i_12] [i_13] [i_15] [i_16] = ((/* implicit */unsigned long long int) arr_37 [i_7] [i_12] [3U] [i_15] [i_16]);
                        arr_61 [i_7] [i_12] [i_13] [i_15] [i_16] &= arr_11 [i_13] [i_13] [5LL] [i_13] [i_13 - 1] [i_13];
                        var_28 = arr_37 [i_7] [i_12] [i_13] [i_15] [i_16];
                    }
                    for (unsigned char i_17 = 2; i_17 < 17; i_17 += 2) 
                    {
                        var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [(unsigned char)10] [i_17 + 2] [i_17] [i_12] [(short)13])) ? (arr_22 [i_17 - 2] [i_17 - 1] [i_17 - 2] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_17 - 2] [i_17 - 1] [i_17 + 1] [i_15] [i_15])))));
                        var_30 = ((/* implicit */signed char) (+(arr_62 [i_15 - 1] [i_15 + 1] [i_17 - 2] [i_17] [4U] [i_17 + 2] [i_17 - 2])));
                    }
                    for (unsigned char i_18 = 0; i_18 < 19; i_18 += 2) /* same iter space */
                    {
                        arr_66 [i_7] [i_12] [i_13] [i_18] |= ((/* implicit */_Bool) arr_64 [i_7] [i_12] [i_13] [(unsigned char)3] [i_18]);
                        var_31 = ((/* implicit */int) (-(arr_1 [i_13 + 1] [15U])));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned char)16)) : (-1))))));
                        arr_67 [(unsigned char)16] [(unsigned short)16] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((short) arr_3 [i_7]));
                    }
                    for (unsigned char i_19 = 0; i_19 < 19; i_19 += 2) /* same iter space */
                    {
                        arr_70 [i_13] = ((/* implicit */unsigned int) arr_54 [(short)14] [i_12] [6] [i_15] [(signed char)11]);
                        arr_71 [i_7] [i_12] [i_13] [i_15 + 1] [13] = ((/* implicit */unsigned short) arr_5 [10ULL] [i_15 - 1] [i_7]);
                        arr_72 [14] [12ULL] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_0 [i_7]);
                        var_33 = ((/* implicit */long long int) arr_4 [i_13 + 2]);
                        arr_73 [2LL] [i_12] [i_13] [i_15] [i_19] |= arr_64 [i_19] [i_15] [i_13] [i_12] [i_7];
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_20 = 2; i_20 < 17; i_20 += 1) 
                    {
                        arr_77 [i_7] [i_12] [i_13] [i_15] [i_20] [i_7] [i_20] = ((/* implicit */int) ((signed char) arr_35 [i_15 + 1] [i_15] [i_7] [i_12]));
                        var_34 &= ((/* implicit */signed char) arr_3 [i_7]);
                        arr_78 [i_20] [i_13] [i_20] = ((/* implicit */signed char) arr_37 [i_7] [i_7] [i_15 - 2] [(signed char)10] [i_20]);
                        var_35 = ((/* implicit */long long int) arr_11 [i_12] [i_13 - 1] [i_20 - 1] [2U] [i_20 + 1] [i_20 - 1]);
                    }
                    for (signed char i_21 = 0; i_21 < 19; i_21 += 1) /* same iter space */
                    {
                        arr_81 [i_7] [i_12] [11LL] [i_21] = ((/* implicit */unsigned short) ((signed char) arr_8 [i_15 - 2] [i_15 - 1]));
                        arr_82 [i_21] [i_15 - 1] [(signed char)8] [i_12] [i_7] |= ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_7]))));
                        var_36 -= ((/* implicit */unsigned char) (~(1550757731U)));
                    }
                    for (signed char i_22 = 0; i_22 < 19; i_22 += 1) /* same iter space */
                    {
                        arr_86 [i_7] [i_22] [i_13] [(unsigned short)14] [i_22] = ((/* implicit */unsigned int) arr_25 [i_7]);
                        var_37 = ((/* implicit */unsigned short) ((signed char) (+(arr_38 [i_7] [i_7] [i_7] [i_7] [(short)9]))));
                        arr_87 [i_7] [i_22] [i_13] [i_15] [i_22] = ((/* implicit */unsigned int) ((unsigned long long int) arr_85 [i_12] [i_13 - 1] [i_13 - 1] [i_22] [i_22]));
                        var_38 = ((/* implicit */unsigned int) ((signed char) arr_25 [i_15]));
                    }
                    var_39 = ((/* implicit */signed char) ((long long int) arr_36 [i_15 - 1] [i_15] [i_15] [i_15] [i_15 - 1] [i_15 - 2] [i_15]));
                    arr_88 [i_7] [i_12] [i_13] [i_15] &= ((/* implicit */signed char) ((short) arr_35 [i_15] [i_15] [i_15 - 2] [i_15 - 2]));
                }
                for (unsigned char i_23 = 2; i_23 < 16; i_23 += 3) 
                {
                    var_40 = ((/* implicit */unsigned long long int) arr_37 [i_23 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 2] [i_7]);
                    /* LoopSeq 2 */
                    for (int i_24 = 0; i_24 < 19; i_24 += 1) 
                    {
                        arr_94 [i_7] [i_12] [i_23] [i_12] [i_24] = ((/* implicit */unsigned short) (+(arr_1 [i_7] [i_24])));
                        var_41 = ((/* implicit */signed char) arr_10 [i_13 + 2]);
                    }
                    for (signed char i_25 = 1; i_25 < 18; i_25 += 1) 
                    {
                        arr_97 [i_23] [i_23] [(signed char)13] [i_23] [i_25] [i_25] = ((/* implicit */short) arr_19 [i_25 + 1] [i_23 - 1] [i_23] [i_13] [i_7] [2ULL] [i_13]);
                        var_42 = ((/* implicit */unsigned int) arr_29 [i_7]);
                        arr_98 [i_7] [i_23] [i_23] [i_25 - 1] = ((/* implicit */int) arr_65 [i_25 - 1]);
                        var_43 = ((/* implicit */unsigned long long int) (-(arr_23 [i_13] [18] [16ULL] [i_13 + 2] [i_13])));
                        arr_99 [i_23] [i_12] [(signed char)18] [i_23 + 1] [i_12] [i_25 + 1] = ((/* implicit */signed char) arr_68 [i_7] [i_7] [i_7] [i_7] [i_7]);
                    }
                }
                arr_100 [i_7] [i_12] [13LL] [i_13 + 2] = ((/* implicit */unsigned long long int) (+(arr_52 [(signed char)3] [i_13] [17] [i_13] [i_13 - 1])));
                arr_101 [i_7] [i_7] [i_12] [i_13 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_13 + 2] [i_12] [i_12] [0LL])) ? (((/* implicit */int) arr_47 [i_13 + 2] [i_12] [i_13] [i_12])) : (((/* implicit */int) arr_47 [i_13 + 2] [i_7] [i_13] [i_7]))));
                var_44 = ((/* implicit */short) min((var_44), (arr_35 [i_7] [i_12] [i_13] [i_13])));
                arr_102 [i_7] |= ((/* implicit */unsigned int) arr_80 [i_13] [i_13 + 2] [i_7]);
            }
            arr_103 [5] [i_12] = ((/* implicit */short) (+((-(arr_29 [i_12])))));
            arr_104 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_7] [i_12] [i_12])) ? (arr_3 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_7] [i_7] [i_12] [i_12] [i_12] [i_12])))));
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 1) 
            {
                for (long long int i_27 = 0; i_27 < 19; i_27 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_28 = 0; i_28 < 19; i_28 += 2) 
                        {
                            arr_111 [i_7] [i_12] [11ULL] [i_27] [i_28] = ((/* implicit */short) ((signed char) arr_107 [i_7] [i_12] [i_26] [i_27] [i_28]));
                            var_45 = ((/* implicit */unsigned short) arr_7 [i_12] [i_26]);
                        }
                        arr_112 [i_27] [18LL] [7ULL] = ((/* implicit */unsigned char) (~((-(arr_64 [i_27] [i_27] [i_26] [i_12] [i_7])))));
                        /* LoopSeq 1 */
                        for (signed char i_29 = 0; i_29 < 19; i_29 += 3) 
                        {
                            var_46 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_29] [i_26]))));
                            arr_116 [i_29] [i_26] [(unsigned char)8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_7]))));
                            arr_117 [i_7] [i_7] [i_7] [i_7] [i_29] [0LL] [i_7] = ((/* implicit */long long int) ((unsigned short) arr_3 [i_26]));
                        }
                    }
                } 
            } 
            var_47 = ((((/* implicit */_Bool) arr_46 [i_7] [i_7] [i_7])) ? (arr_46 [i_7] [6U] [i_7]) : (arr_11 [i_7] [i_7] [(short)2] [i_7] [i_7] [i_7]));
        }
        /* vectorizable */
        for (unsigned long long int i_30 = 0; i_30 < 19; i_30 += 2) 
        {
            arr_120 [i_7] [i_30] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_115 [i_7] [i_7] [i_7] [3] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_105 [i_30] [18] [i_7])) : (((/* implicit */int) arr_109 [i_7]))))));
            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_30] [i_7])) ? (arr_1 [i_7] [i_30]) : (arr_1 [i_7] [i_30]))))));
        }
        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) arr_56 [i_7] [i_7] [i_7] [i_7] [18ULL]))));
        arr_121 [i_7] = ((/* implicit */unsigned short) arr_68 [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
    for (unsigned short i_31 = 2; i_31 < 20; i_31 += 2) 
    {
        arr_126 [i_31 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) arr_14 [i_31 - 1] [i_31 - 2] [i_31] [i_31] [i_31 - 2])));
        var_50 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(arr_9 [i_31 - 1])))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_31]))))), (max((arr_5 [i_31 + 1] [i_31] [i_31]), (((/* implicit */unsigned long long int) arr_13 [i_31 + 1] [i_31] [i_31 + 1] [i_31 + 1] [i_31 - 2] [i_31])))))) : (((/* implicit */unsigned long long int) arr_13 [i_31] [i_31] [i_31 - 2] [i_31] [i_31 - 1] [i_31]))));
        arr_127 [i_31 - 2] [i_31] = ((/* implicit */unsigned long long int) arr_22 [i_31 - 1] [i_31] [i_31] [i_31 - 2] [i_31]);
    }
}
