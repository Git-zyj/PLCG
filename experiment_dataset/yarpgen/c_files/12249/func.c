/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12249
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
    var_14 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))))));
    var_15 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))))) : (((unsigned long long int) arr_7 [i_3]))))));
                        var_17 -= (~((+((+(arr_5 [i_0] [i_0] [i_0]))))));
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_5 [i_0] [i_0] [i_0])));
    }
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_19 *= arr_3 [i_4];
        /* LoopSeq 3 */
        for (unsigned char i_5 = 2; i_5 < 8; i_5 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_12 [i_5 + 2] [i_5 + 1]) ? (((/* implicit */int) arr_12 [i_5 + 4] [i_5 - 2])) : (((/* implicit */int) arr_12 [i_5 + 3] [i_5 - 1])))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 4; i_7 < 10; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            arr_23 [1] [1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_5 + 3] [i_5 - 1]))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_8] [i_7] [i_6] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4] [i_5 + 3] [i_4]))))) : ((~(((/* implicit */int) arr_0 [i_6])))))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_7 - 3] [i_7 - 3] [i_7 + 1] [i_7 - 2] [i_7 - 1])))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_29 [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_9 [(unsigned short)16] [(unsigned short)16])) ? (((/* implicit */int) arr_19 [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_9] [i_5 - 1] [i_5 - 1] [i_4] [i_4]))))));
                        var_23 = ((/* implicit */unsigned char) arr_26 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5 - 1]);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_11 = 1; i_11 < 8; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_26 [i_4] [i_11] [i_9] [i_6] [i_4] [i_4] [i_4]))))));
                        arr_32 [i_5] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(signed char)8]))))));
                    }
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        var_25 ^= ((unsigned short) arr_25 [i_5 + 2] [i_5] [i_5]);
                        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_12] [i_5 + 2] [4LL] [i_5 + 1] [i_5] [i_5] [i_4])) ? ((~(((/* implicit */int) arr_9 [6ULL] [i_4])))) : (((/* implicit */int) arr_25 [i_5 - 1] [(_Bool)1] [i_5 - 2]))));
                        arr_37 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_12] [i_12] [i_12] [i_9] [i_5 - 2])) ? (((/* implicit */int) arr_36 [i_12] [i_12] [(unsigned char)0] [i_12] [i_5 + 4])) : (((/* implicit */int) arr_36 [i_12] [i_12] [i_12] [i_6] [i_5 + 2]))));
                        var_27 -= ((/* implicit */unsigned short) ((signed char) arr_26 [i_5] [(unsigned char)11] [6ULL] [i_5 + 2] [i_5 - 2] [i_5 + 1] [i_5]));
                    }
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned long long int) arr_15 [(unsigned char)9] [i_5 + 2])))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((unsigned short) arr_24 [(unsigned char)6] [i_9] [(unsigned char)6] [i_5 - 1] [i_4])))));
                }
                for (signed char i_13 = 1; i_13 < 9; i_13 += 4) 
                {
                    var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_5 + 4]))));
                    var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_4] [i_4] [i_4] [i_4] [i_4])))))));
                    /* LoopSeq 3 */
                    for (short i_14 = 1; i_14 < 9; i_14 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned int) arr_38 [(unsigned short)2] [i_14 + 3] [i_14 + 3] [i_14 + 3] [i_14 + 1] [i_14]);
                        var_33 *= ((unsigned short) arr_43 [i_5 - 2]);
                        arr_45 [i_4] [i_4] [i_4] [i_4] [(unsigned char)8] [i_4] = ((/* implicit */unsigned char) arr_43 [i_4]);
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [(_Bool)1] [(_Bool)1] [i_4]))))) ? (((/* implicit */int) ((unsigned char) arr_15 [i_5] [6LL]))) : (((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_26 [(unsigned char)10] [i_5 - 2] [(short)1] [i_5 + 3] [(unsigned char)10] [i_5] [(unsigned char)2])) : (((/* implicit */int) arr_19 [i_4]))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) arr_24 [i_5 - 2] [i_5 - 2] [i_5] [(unsigned char)6] [i_5 - 2]);
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((unsigned int) arr_20 [i_13 + 1] [i_5 - 1] [i_5])))));
                    }
                    for (signed char i_16 = 2; i_16 < 8; i_16 += 3) 
                    {
                        arr_51 [i_4] [i_4] [i_4] [i_4] = (-(((/* implicit */int) arr_31 [i_16 + 4] [i_13 + 3])));
                        arr_52 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_46 [i_13] [i_13] [i_13 + 3] [(_Bool)1] [i_13 + 3] [i_13 + 2]))));
                        var_37 = ((/* implicit */unsigned char) (~(((arr_34 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]) ? (arr_33 [i_4] [i_4] [i_4] [i_4] [1U]) : (((/* implicit */unsigned long long int) arr_15 [i_16] [(signed char)2]))))));
                        var_38 = ((/* implicit */signed char) (-(((/* implicit */int) arr_28 [i_13 + 2] [i_13 - 1] [i_6] [i_6] [i_5] [i_5] [i_5]))));
                    }
                    var_39 = ((/* implicit */int) ((_Bool) arr_14 [i_4] [i_4]));
                    var_40 -= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_48 [i_4] [(unsigned char)4] [i_4]))))));
                }
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_18 [i_5] [i_4] [i_6] [i_5] [i_4]))))));
                    var_42 = ((/* implicit */short) min((var_42), (arr_10 [i_4] [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 1] [i_4])));
                    arr_55 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_5 - 1] [i_5 + 1] [i_5]))));
                }
                for (signed char i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_36 [8U] [i_5 + 1] [i_5] [i_5] [i_5])))))));
                    var_44 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_30 [i_4] [i_4] [i_4] [i_4] [(unsigned short)6] [i_4] [i_4])))));
                    var_45 = ((((/* implicit */_Bool) arr_20 [(short)3] [i_5 + 1] [i_4])) ? ((~(((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))) : (((/* implicit */int) ((short) arr_28 [(unsigned char)11] [i_18] [i_6] [i_6] [i_4] [i_4] [i_4]))));
                    var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [(unsigned char)11] [i_5] [(unsigned char)11] [i_5] [i_5] [(unsigned char)11] [i_5 - 2])))))));
                }
            }
            for (unsigned char i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
            {
                var_47 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned char)4] [(unsigned char)6]))))));
                /* LoopSeq 3 */
                for (long long int i_20 = 1; i_20 < 10; i_20 += 3) 
                {
                    var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_20] [i_19] [(unsigned char)0] [(unsigned char)0] [2])) ? (arr_30 [i_5 - 2] [i_5] [i_5 - 2] [i_5 + 4] [(unsigned short)1] [i_5] [i_5]) : (((/* implicit */unsigned long long int) arr_7 [i_4]))))))))))));
                    arr_62 [(unsigned short)10] [7ULL] [7ULL] [7ULL] = ((unsigned char) ((arr_56 [i_5 + 2] [i_5 - 1]) ? (((/* implicit */int) arr_53 [i_5 + 1])) : (((/* implicit */int) arr_53 [i_5 + 3]))));
                    var_49 = ((/* implicit */short) (((!(((_Bool) arr_36 [11LL] [7] [i_19] [i_19] [i_19])))) ? ((-((~(((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))))) : (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_4] [i_4]))) ? (((((/* implicit */_Bool) arr_40 [i_4] [3] [i_4])) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_41 [i_4] [i_4] [(short)1] [i_4])))) : (((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_20 + 2])) : (((/* implicit */int) arr_19 [i_5]))))))));
                }
                for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_22])))));
                        arr_70 [8] [i_19] [i_19] [i_19] [i_19] &= ((/* implicit */unsigned char) ((signed char) (~(arr_59 [i_5 + 4] [i_5 + 2] [i_5 - 2] [i_5]))));
                    }
                    arr_71 [i_21] [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_4] [i_4]))));
                    arr_72 [i_4] [i_4] [i_4] [i_21] = ((/* implicit */unsigned char) arr_14 [i_5] [i_4]);
                }
                for (unsigned char i_23 = 0; i_23 < 12; i_23 += 3) /* same iter space */
                {
                    arr_75 [i_23] [i_19] [(unsigned char)10] [i_4] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_54 [i_5 - 1]))))));
                    arr_76 [i_19] [i_19] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_6 [i_5 + 2] [i_5 + 3] [i_5 + 3])))));
                    arr_77 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5 + 4])) ? (arr_5 [i_5] [i_5] [i_5 + 2]) : (arr_5 [i_5 + 3] [i_5] [i_5 + 2]))));
                }
            }
            var_51 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_66 [i_5] [i_4] [i_5 - 2] [i_4] [(unsigned short)8]))))));
            arr_78 [i_5] = ((/* implicit */unsigned char) arr_25 [i_5] [i_5] [i_5]);
            /* LoopSeq 3 */
            for (int i_24 = 2; i_24 < 11; i_24 += 1) /* same iter space */
            {
                var_52 ^= ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_20 [i_24] [i_24 - 1] [i_24 + 1]))))));
                var_53 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_5] [i_5 - 1] [i_5])))));
            }
            for (int i_25 = 2; i_25 < 11; i_25 += 1) /* same iter space */
            {
                var_54 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_82 [i_4] [i_4] [i_4]))))) ? ((-(((/* implicit */int) arr_74 [i_5] [i_5 + 2] [i_5 - 2] [i_5 - 2])))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_4] [i_4] [2] [i_4] [i_4] [i_4] [i_4])))))))));
                var_55 += ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_73 [8U] [i_5 + 2] [(unsigned char)7] [i_5])))))));
            }
            for (int i_26 = 2; i_26 < 11; i_26 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    arr_88 [i_27] [(unsigned char)7] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (-(arr_68 [i_4]))))) ? (((/* implicit */unsigned int) (-(arr_61 [i_27] [i_26 + 1] [(signed char)2] [10ULL] [10ULL])))) : (((((/* implicit */_Bool) (~(arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [3ULL] [0U] [i_4])))))) : (((((/* implicit */_Bool) arr_61 [i_27] [i_26] [i_5 + 4] [9ULL] [9ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (arr_1 [i_4] [i_4])))))));
                    var_56 = ((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_69 [i_27] [3U] [i_26] [i_5] [(unsigned char)8] [(unsigned char)8]))))) ? ((+(((/* implicit */int) arr_49 [i_4] [i_4] [i_4] [3ULL] [i_4] [i_4])))) : (((/* implicit */int) arr_12 [i_5 + 1] [i_5]))))));
                    var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) (-(((/* implicit */int) arr_10 [i_4] [14] [i_26] [i_26 - 2] [i_26] [i_4])))))));
                }
                for (long long int i_28 = 0; i_28 < 12; i_28 += 1) 
                {
                    arr_91 [i_28] [i_26] [i_4] [i_4] [i_4] [i_4] = ((short) ((unsigned long long int) arr_66 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_4] [i_5 + 1]));
                    /* LoopSeq 4 */
                    for (unsigned char i_29 = 0; i_29 < 12; i_29 += 3) 
                    {
                        var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) arr_54 [i_4]))));
                        arr_94 [i_29] [i_28] [i_26] [1] [1] = ((/* implicit */int) (~((+(arr_14 [i_26] [i_5 - 1])))));
                        arr_95 [2ULL] [i_28] [i_26] [i_4] [i_4] = ((/* implicit */_Bool) (-(((unsigned long long int) arr_4 [i_26 - 1] [i_26 - 1] [(_Bool)1]))));
                    }
                    for (unsigned char i_30 = 0; i_30 < 12; i_30 += 1) 
                    {
                        arr_98 [i_30] [i_28] [i_26 - 1] [i_5] [i_4] = ((/* implicit */short) ((int) arr_15 [i_4] [(unsigned char)9]));
                        var_59 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5 - 1] [(unsigned short)1]))));
                        var_60 ^= ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_30]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_31 = 1; i_31 < 9; i_31 += 4) /* same iter space */
                    {
                        var_61 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [9U])))))));
                        arr_102 [i_31 + 2] [i_28] [i_26 + 1] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_39 [i_4] [i_4] [i_4] [i_4] [(unsigned char)11]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_32 = 1; i_32 < 9; i_32 += 4) /* same iter space */
                    {
                        var_62 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [7LL] [7LL] [i_26 - 2] [i_26] [i_26 - 2] [i_26 - 1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_32 + 2] [i_28] [i_5 - 1] [i_4]))) : ((~(arr_15 [i_28] [i_26])))));
                        var_63 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_92 [(_Bool)1] [i_32] [i_32 + 1] [i_32 + 3] [i_28] [i_26] [i_26]))));
                    }
                    var_64 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (arr_24 [i_4] [i_26 - 1] [i_5] [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_99 [i_4] [i_4] [i_4] [(_Bool)1] [i_4] [i_4])))))))))));
                }
                /* LoopNest 2 */
                for (signed char i_33 = 0; i_33 < 12; i_33 += 2) 
                {
                    for (long long int i_34 = 0; i_34 < 12; i_34 += 2) 
                    {
                        {
                            arr_109 [i_4] [i_4] [i_4] [i_4] [10U] &= ((/* implicit */unsigned long long int) arr_44 [i_4] [i_4] [i_4] [(short)9] [i_4]);
                            arr_110 [i_4] [i_4] [3ULL] [i_4] [i_4] [i_4] = ((unsigned char) ((unsigned int) ((unsigned char) arr_18 [i_34] [i_33] [i_26 - 2] [i_5] [1U])));
                        }
                    } 
                } 
                var_65 = (-(((unsigned int) arr_36 [i_5] [i_5 + 2] [i_5 + 1] [i_5 + 2] [(_Bool)1])));
                var_66 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_46 [i_26] [(signed char)0] [i_26] [i_5] [i_5] [i_4]))));
                arr_111 [5U] [i_26] [i_4] [i_4] &= ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) arr_15 [i_4] [i_4])))))) ? (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [(short)8])))))) : (((/* implicit */int) arr_47 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
            }
        }
        for (unsigned long long int i_35 = 0; i_35 < 12; i_35 += 1) 
        {
            arr_114 [i_4] [i_4] = ((/* implicit */short) ((int) ((unsigned char) arr_104 [i_4] [i_4] [i_4] [i_4])));
            var_67 = ((/* implicit */short) ((_Bool) (+((~(((/* implicit */int) arr_13 [i_4] [i_4])))))));
        }
        for (unsigned long long int i_36 = 0; i_36 < 12; i_36 += 1) 
        {
            var_68 = ((unsigned char) ((unsigned char) ((((/* implicit */_Bool) arr_100 [(unsigned char)8] [i_36] [i_4] [i_4])) ? (((/* implicit */int) arr_113 [i_4] [i_4])) : (((/* implicit */int) arr_20 [i_4] [i_4] [i_4])))));
            arr_119 [(signed char)1] = ((/* implicit */short) (~((+(((/* implicit */int) arr_43 [i_4]))))));
            var_69 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) (~(arr_58 [i_4] [i_4] [i_4])))));
        }
        var_70 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_56 [i_4] [i_4])))));
        /* LoopNest 3 */
        for (unsigned long long int i_37 = 1; i_37 < 10; i_37 += 2) 
        {
            for (int i_38 = 0; i_38 < 12; i_38 += 3) 
            {
                for (int i_39 = 0; i_39 < 12; i_39 += 3) 
                {
                    {
                        var_71 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_31 [i_37] [i_37]))));
                        arr_129 [i_4] [i_4] [3] [i_4] [i_4] = ((/* implicit */unsigned int) (+(arr_124 [i_4] [i_4])));
                    }
                } 
            } 
        } 
    }
}
