/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174873
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
    var_17 = min((((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_11)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) >= (1049487597U))) ? (max((3245479705U), (695335611U))) : (1049487597U))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned short)1626))) || (((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned short)3)), (-4876462454890299425LL))) << (((((((/* implicit */_Bool) 4756843503109425992ULL)) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))))) - (200253932U)))))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_10 [i_0] [i_0 + 3]))));
                            var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned short) max((arr_7 [i_0 + 2] [(unsigned short)2] [i_2] [(unsigned short)2] [i_3]), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_4])))))), (((max((arr_8 [i_0 + 2] [13LL] [i_2]), (((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_1] [i_1] [i_4])))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [16U]))))))));
                            var_21 = ((/* implicit */unsigned int) ((unsigned short) min((arr_10 [i_0 + 3] [i_1 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) 3867426942U))))))));
                            arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) ((int) ((signed char) (unsigned short)15)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_0]);
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned int) min((arr_6 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_1]))))), (arr_13 [(unsigned char)4] [(short)8] [13LL]))));
            }
            for (unsigned short i_6 = 3; i_6 < 18; i_6 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [i_0])) && (((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_0] [i_0])))))) % (((unsigned int) arr_2 [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) ((unsigned int) arr_5 [(signed char)9] [i_1] [i_0] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) & (((/* implicit */int) arr_12 [i_0 + 3]))))) : (((((/* implicit */_Bool) arr_3 [i_6] [(unsigned short)9] [(unsigned short)9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))) : (arr_10 [i_1] [i_1])))))));
                var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_0] [2U] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [6LL] [i_1 - 2] [i_1 + 1])) || (((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_6 - 3] [i_6] [i_1] [i_6]))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_0] [i_1 + 1] [i_0] [i_6])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_0 - 2] [i_1 - 2] [i_6 - 3] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_0 + 1] [i_0 + 1] [8U] [i_0 + 1]))))));
            }
            /* LoopNest 3 */
            for (signed char i_7 = 3; i_7 < 17; i_7 += 4) 
            {
                for (unsigned char i_8 = 2; i_8 < 18; i_8 += 3) 
                {
                    for (unsigned short i_9 = 4; i_9 < 18; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((int) max((arr_21 [i_8] [i_8 - 2] [i_8] [i_8 + 1] [i_8 - 2] [i_8 - 1]), (((unsigned short) arr_1 [i_7])))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned char) ((unsigned int) min((arr_8 [18LL] [18LL] [i_7]), (arr_8 [6ULL] [6ULL] [i_7 - 1]))))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((((/* implicit */long long int) arr_8 [i_0] [(signed char)4] [i_8])), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_7 + 1] [i_7] [i_7] [i_8 - 2]))) | (((((/* implicit */_Bool) arr_16 [i_1])) ? (arr_23 [(short)4] [i_0] [i_0] [i_7] [i_8] [i_9] [i_9]) : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_10 = 2; i_10 < 18; i_10 += 2) /* same iter space */
        {
            arr_28 [4] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [8U] [i_0] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 2] [i_0 + 2])) ? (((/* implicit */long long int) arr_27 [i_10])) : (arr_23 [i_0] [i_10] [i_0] [3] [i_10 + 1] [i_10] [12])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) arr_1 [i_10])), (arr_5 [i_0] [i_0] [i_0] [i_10 - 2])))))) : (max((((/* implicit */long long int) ((int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_7 [(unsigned short)16] [i_0] [i_0] [(short)14] [(unsigned short)16]) : (((/* implicit */long long int) arr_26 [i_0] [i_0] [i_0]))))))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_0] [i_0 + 2] [i_0] [9] [5LL] [i_10])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((short) arr_6 [i_10] [i_10] [i_0] [i_0] [i_10] [i_0]))) : (((/* implicit */int) ((signed char) arr_16 [i_10])))))) ? (((((/* implicit */_Bool) ((signed char) arr_20 [i_10] [i_0 - 1] [i_0 - 2] [i_10]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_24 [i_0 + 2] [13LL] [i_10] [12] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_10])) ? (arr_10 [i_0] [i_10]) : (((/* implicit */long long int) arr_20 [(unsigned short)18] [i_10] [i_10] [i_10])))))) : (((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) arr_6 [i_10] [i_10] [i_0] [i_10] [i_10] [i_10])), (arr_23 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_10] [(unsigned short)0] [i_10] [i_10]))))))))));
            /* LoopNest 2 */
            for (long long int i_11 = 3; i_11 < 15; i_11 += 2) 
            {
                for (short i_12 = 1; i_12 < 15; i_12 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_0 [i_10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_13] [i_10] [i_10] [i_10] [i_10])))))), (((long long int) arr_33 [9ULL] [i_10] [i_10] [i_10] [i_10] [i_10 + 1]))))) && (((/* implicit */_Bool) ((((unsigned long long int) arr_8 [i_0] [i_0] [i_0])) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_12] [i_12])) < (((/* implicit */int) arr_33 [(unsigned short)9] [12LL] [(short)15] [(signed char)14] [12LL] [i_10]))))))))))))));
                            var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max(((unsigned short)65495), (((unsigned short) (unsigned char)221))))), (1049487597U)));
                        }
                        for (long long int i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) min((((short) arr_8 [i_0 + 1] [i_10 + 1] [i_11 - 1])), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [12U] [12U] [i_14] [i_12 - 1])) || (((/* implicit */_Bool) arr_18 [i_14] [i_10] [i_11 + 4]))))))))));
                            arr_39 [i_12] [i_0] [i_11] [i_12] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) arr_14 [i_12] [i_11] [i_10] [i_0]))) ? (((((/* implicit */_Bool) arr_26 [i_0] [i_11] [(unsigned short)12])) ? (((/* implicit */long long int) arr_27 [i_0])) : (arr_10 [i_0] [i_0 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_35 [i_0] [i_0] [i_11 + 1] [(short)5] [12LL])) != (((/* implicit */int) arr_9 [i_0] [(short)14] [i_11] [i_10] [i_0])))))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_19 [i_10 + 1] [i_10 + 1] [i_12] [i_14]))))));
                            var_32 = ((/* implicit */int) min(((unsigned char)245), ((unsigned char)99)));
                        }
                        var_33 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 1049487616U)) || (((/* implicit */_Bool) 7896637567866923257LL)))));
                        var_34 = ((/* implicit */long long int) ((unsigned long long int) max((((((/* implicit */_Bool) arr_12 [i_12 + 4])) ? (((/* implicit */int) arr_19 [(unsigned short)3] [i_10] [i_10] [(unsigned short)3])) : (((/* implicit */int) arr_25 [i_11 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_12] [i_11] [i_10 - 1] [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) arr_16 [i_10]))))))));
                        var_35 += ((/* implicit */short) min((((arr_37 [i_0 - 2] [i_10 + 1] [i_11] [i_11] [i_11 + 1]) - (arr_37 [i_0 - 1] [i_10 - 1] [10ULL] [(signed char)15] [i_11 + 3]))), (max((((/* implicit */long long int) ((unsigned short) arr_8 [i_0] [i_0] [i_0 + 1]))), (max((((/* implicit */long long int) arr_36 [i_0] [i_10] [i_0] [i_11] [i_11])), (arr_10 [i_12] [i_10 + 1])))))));
                    }
                } 
            } 
        }
        for (unsigned short i_15 = 2; i_15 < 18; i_15 += 2) /* same iter space */
        {
            var_36 &= ((/* implicit */signed char) ((short) ((signed char) ((unsigned short) arr_33 [i_0] [4U] [4U] [i_15] [4U] [4U]))));
            var_37 = ((/* implicit */short) ((unsigned short) (signed char)-115));
            var_38 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_40 [i_0] [i_15 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [1]))) : (((unsigned long long int) max((arr_21 [4U] [i_15] [i_15] [i_0 + 2] [i_15] [i_15]), (arr_31 [i_15] [i_15] [i_0 - 2] [6ULL] [(short)18] [i_15]))))));
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_18 [i_15] [i_15] [0LL])))) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [(unsigned short)8])) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [16])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_15 - 1] [i_15] [i_15])) : (((/* implicit */int) arr_36 [i_15 + 1] [i_15 + 1] [(short)17] [i_15] [i_15]))))))));
        }
        var_40 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [5U] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 787427325U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40))) : (3245479691U))))));
    }
    var_41 |= ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_8)), (((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((short) ((unsigned int) var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
    {
        for (short i_17 = 0; i_17 < 20; i_17 += 4) 
        {
            {
                var_42 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_47 [i_17])) : (arr_46 [i_16] [i_16])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [(unsigned short)15])) || (((/* implicit */_Bool) arr_44 [i_16]))))) : (((/* implicit */int) ((unsigned short) arr_45 [i_17] [(unsigned short)19] [i_16])))))) & (((long long int) ((((/* implicit */_Bool) arr_42 [i_16])) ? (arr_45 [i_16] [i_16] [i_16]) : (((/* implicit */long long int) arr_46 [i_17] [i_16])))))));
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((int) ((arr_42 [i_16]) << (((((((/* implicit */_Bool) arr_46 [(signed char)17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_16]))) : (arr_45 [i_16] [15] [i_17]))) - (38254LL)))))))));
                var_44 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_47 [(unsigned char)5])) ? (((/* implicit */int) ((unsigned short) (short)8289))) : (((/* implicit */int) ((short) arr_43 [i_17]))))), (((min((arr_43 [i_16]), (arr_46 [i_16] [i_16]))) - (min((arr_46 [18U] [i_17]), (((/* implicit */int) arr_44 [i_16]))))))));
                var_45 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_44 [i_17]), (arr_47 [i_17])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_16])) ? (((/* implicit */int) arr_44 [i_16])) : (arr_43 [i_16])))) : (((((/* implicit */_Bool) arr_45 [i_16] [(short)7] [i_16])) ? (arr_42 [(short)11]) : (((/* implicit */long long int) arr_43 [i_17]))))))) && (((/* implicit */_Bool) ((arr_45 [(unsigned short)3] [(unsigned short)18] [i_16]) / (((((/* implicit */_Bool) arr_46 [i_17] [19])) ? (arr_45 [i_17] [i_16] [i_16]) : (arr_42 [i_16]))))))));
                var_46 = ((/* implicit */unsigned short) ((signed char) max((arr_45 [i_17] [i_17] [i_17]), (((/* implicit */long long int) ((short) arr_45 [i_16] [i_16] [i_16]))))));
            }
        } 
    } 
}
