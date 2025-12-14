/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179561
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-9380))))) ? (((/* implicit */int) (short)-3674)) : ((~(1384100611)))));
        var_17 *= ((/* implicit */_Bool) max(((-(((/* implicit */int) max(((short)-12770), ((short)-12767)))))), (max((((((/* implicit */_Bool) (short)12767)) ? (((/* implicit */int) (short)12772)) : (((/* implicit */int) (unsigned char)209)))), (((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((arr_2 [i_0]) - ((-(max((arr_2 [i_0]), (((/* implicit */int) (_Bool)1))))))));
        var_18 = ((/* implicit */signed char) arr_2 [i_0]);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            var_19 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12778)) ? (arr_1 [i_0] [(signed char)13]) : (arr_5 [i_0] [i_1] [i_1])))) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_20 |= ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_2 [i_2]))))));
                    arr_14 [i_3] [i_1] [i_3] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30811)) - (((/* implicit */int) arr_11 [i_1] [(short)1] [i_1] [11] [i_1 + 2]))));
                }
                for (short i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max(((((-(arr_13 [i_0] [i_2] [i_0] [i_0]))) / (((-1854119989) / (((/* implicit */int) (unsigned short)57791)))))), (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)65535)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57344)))))))))))));
                    arr_18 [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_4])), (arr_16 [i_0] [i_1]))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((((((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1 - 4])) / (16777152))) / (arr_16 [i_0] [i_1 + 3])))));
                }
                for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (arr_11 [i_0] [(unsigned char)9] [i_2] [i_0] [i_5])));
                    var_23 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_7 [i_5] [i_2] [i_0])) % (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))), (((/* implicit */int) max((arr_7 [i_5] [i_2] [(_Bool)1]), (arr_7 [i_0] [2] [i_0]))))));
                    arr_22 [i_5] [i_5] [i_5] [i_5] [(short)18] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_5] [i_0])), (arr_1 [18U] [i_1])))) ? (((/* implicit */int) max(((unsigned short)42609), (((/* implicit */unsigned short) arr_8 [i_0] [i_1 - 3] [i_2] [i_5]))))) : (((/* implicit */int) arr_19 [i_5] [i_2] [(short)2])))) : ((-(((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_2] [i_1]))))));
                }
                arr_23 [i_2] = ((/* implicit */unsigned int) ((arr_19 [i_0] [i_1 - 2] [i_2]) ? ((-(457725752))) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))));
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            var_24 += ((((/* implicit */int) arr_21 [i_0] [(short)10] [i_0] [i_0])) >= (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])));
            arr_28 [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_0])) ? (((/* implicit */int) arr_27 [1])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_16 [i_6] [i_0])))));
            arr_29 [i_0] [i_6] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153))))) : (((/* implicit */int) arr_8 [i_0] [i_6] [i_0] [i_0]))));
            var_25 = (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_26 = max(((~(((/* implicit */int) arr_26 [i_0])))), (((((/* implicit */_Bool) 10250478519262242216ULL)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned short)0)))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                arr_35 [i_0] [i_0] [i_0] [i_7] = (unsigned short)4;
                arr_36 [i_0] [(short)0] [i_7] [i_8] = ((/* implicit */int) (~((+(((((/* implicit */_Bool) (short)0)) ? (arr_10 [10LL] [i_0] [(signed char)9] [10LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0])))))))));
            }
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
                        arr_45 [i_7] [i_7] [i_7] [i_7] [6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-12772)) ? (((/* implicit */int) arr_38 [i_0] [i_7])) : (((/* implicit */int) arr_38 [i_7] [i_7])))) / (arr_39 [i_10] [i_9] [i_7])));
                        var_28 = ((/* implicit */unsigned int) arr_13 [i_0] [i_7] [i_9] [i_9]);
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                    {
                        arr_48 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)50)), ((short)9222)));
                        var_29 = ((((/* implicit */_Bool) (~(457725768)))) ? (((((/* implicit */int) arr_32 [i_0] [i_7] [i_10] [i_12])) - (((/* implicit */int) arr_32 [i_0] [i_7] [i_9] [i_10])))) : (((/* implicit */int) (unsigned short)2388)));
                    }
                    arr_49 [i_0] [i_7] = ((/* implicit */short) (unsigned short)65506);
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) max((max((((/* implicit */int) (short)2301)), (-457725726))), (max((arr_2 [i_13]), (((/* implicit */int) arr_34 [i_0] [i_7] [i_9]))))));
                        var_31 += ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((max((arr_6 [i_13] [i_9] [i_0]), (arr_6 [i_0] [i_10] [i_9]))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_13] [(unsigned char)1] [i_9]))))))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        {
                            arr_59 [i_7] [i_7] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_53 [i_7] [i_14] [i_7] [i_7])))), (((((/* implicit */_Bool) arr_53 [i_7] [i_9] [i_7] [i_7])) && (((/* implicit */_Bool) (short)30811))))));
                            arr_60 [17] [i_7] [(short)10] [i_14] [(short)10] = ((/* implicit */_Bool) ((unsigned char) (((!(arr_20 [i_15] [i_9] [i_9] [i_7] [i_0]))) && (((/* implicit */_Bool) ((arr_1 [i_15] [i_7]) - (((/* implicit */int) arr_54 [i_14] [i_14] [i_9] [i_7] [i_15]))))))));
                            var_33 = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) 1854119989))), (-1857815934)));
                        }
                    } 
                } 
            }
            var_34 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_32 [i_7] [i_7] [i_7] [i_7])), (arr_10 [i_0] [i_0] [i_0] [i_7]))))));
            var_35 += ((/* implicit */short) (-((-((+(arr_13 [i_0] [i_0] [i_0] [8U])))))));
        }
    }
    /* LoopNest 2 */
    for (short i_16 = 1; i_16 < 9; i_16 += 3) 
    {
        for (int i_17 = 0; i_17 < 13; i_17 += 4) 
        {
            {
                arr_68 [i_16] = ((/* implicit */short) (+(((/* implicit */int) (short)-9681))));
                arr_69 [i_16] [i_16] = ((/* implicit */unsigned short) (((!(((_Bool) arr_58 [i_16 + 1] [i_16 + 1] [i_16] [i_17] [i_17] [i_17] [i_17])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_17] [i_17] [i_17] [i_17]))))) : ((-(((/* implicit */int) arr_25 [i_16]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
                {
                    arr_72 [i_16] [i_17] [i_18] |= ((/* implicit */short) (-(((/* implicit */int) arr_26 [i_16 + 4]))));
                    arr_73 [i_16] = (((+(-457725752))) | (((/* implicit */int) ((unsigned short) -1743530316))));
                }
                /* vectorizable */
                for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 2) /* same iter space */
                {
                    arr_77 [i_17] [i_17] [i_16] [i_17] = ((((/* implicit */_Bool) 688760135)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-12770)));
                    arr_78 [i_16] = ((/* implicit */short) (+(((arr_30 [i_16]) ? (80801682U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_19])))))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_9 [i_16] [i_16]))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */short) (+(max(((+(((/* implicit */int) arr_32 [i_16] [i_16 + 1] [i_17] [i_16 + 1])))), (((((/* implicit */_Bool) arr_26 [i_20])) ? (((/* implicit */int) arr_65 [i_16])) : (((/* implicit */int) arr_34 [i_20] [i_17] [i_20]))))))));
                    var_38 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)20386)), ((+(((/* implicit */int) ((unsigned char) arr_51 [i_16])))))));
                    var_39 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_10 [i_16 + 4] [i_16] [i_16] [i_16 + 3]))))));
                    arr_81 [i_16] = ((((/* implicit */_Bool) max((arr_26 [i_16 + 1]), (((/* implicit */unsigned short) max((arr_42 [i_16] [i_17] [i_17] [i_17] [i_16]), ((short)29834))))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) 503316480)) && (((/* implicit */_Bool) (short)9696))))))) : (((((/* implicit */_Bool) (~(arr_9 [i_16] [i_17])))) ? ((-(((/* implicit */int) arr_57 [i_16])))) : (max((((/* implicit */int) (short)12702)), (arr_5 [i_16] [i_17] [i_20]))))));
                    var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((776110242) / (((/* implicit */int) (short)4700)))))));
                }
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 13; i_21 += 3) 
                {
                    for (unsigned char i_22 = 0; i_22 < 13; i_22 += 3) 
                    {
                        {
                            var_41 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) -19813734))) ? (max((arr_83 [i_16] [i_16 + 1] [i_17]), (((/* implicit */unsigned int) arr_42 [i_17] [i_16 + 1] [i_16 + 3] [i_16 + 2] [i_16 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_44 [i_16] [i_21] [i_21] [i_17] [i_21] [i_17])) <= (((/* implicit */int) arr_27 [i_21]))))) >= (((/* implicit */int) ((signed char) arr_85 [i_16] [i_16] [i_17] [(signed char)12])))))))));
                            var_42 = ((/* implicit */long long int) (unsigned short)4146);
                        }
                    } 
                } 
                arr_87 [i_16] [i_16] [i_16] = ((((/* implicit */_Bool) arr_16 [6] [6])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_57 [i_16]))))) : (((arr_82 [i_16] [i_16] [i_16]) / (((/* implicit */unsigned int) ((arr_12 [i_16] [i_17] [i_16] [i_16 + 4] [i_16]) ? (((/* implicit */int) arr_80 [i_16] [i_16])) : (((/* implicit */int) arr_67 [i_16]))))))));
            }
        } 
    } 
    var_43 = ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) max((var_4), (((/* implicit */long long int) (-2147483647 - 1))))))), (var_12)));
    var_44 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
}
