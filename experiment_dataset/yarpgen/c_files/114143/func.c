/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114143
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) var_13)))))));
        var_18 -= ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(arr_8 [(short)1] [i_1] [(short)1] [i_0])))) ? (max((((/* implicit */long long int) arr_2 [i_2])), (arr_7 [i_0] [i_0] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) != (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_0])), (var_13))))));
                arr_9 [(signed char)15] [i_1] [i_2] [7LL] &= ((/* implicit */unsigned int) max((arr_1 [i_2] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_13)))))));
            }
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                arr_14 [i_0] &= ((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_1 [i_3] [i_1]))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) var_16)), (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_4] [i_5])) ? (arr_10 [i_0] [i_1] [i_3] [i_5]) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_4])))))));
                            var_21 -= ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
                var_22 -= ((/* implicit */long long int) arr_15 [i_0]);
            }
            for (short i_6 = 4; i_6 < 22; i_6 += 3) 
            {
                arr_24 [i_0] [i_1] [i_6 + 2] = ((/* implicit */int) 14845223145920912812ULL);
                arr_25 [i_0] [i_0] [i_6] |= (!((!(((/* implicit */_Bool) (-(arr_11 [i_0] [i_1] [21U] [i_6])))))));
                var_23 ^= max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1]))))))), ((-((+(((/* implicit */int) var_14)))))));
            }
            arr_26 [i_1] [i_0] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) var_3))))), (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_21 [i_0] [i_1] [i_1] [(signed char)3]))))) | (((/* implicit */unsigned long long int) (+(max((var_13), (((/* implicit */unsigned int) (signed char)-125)))))))));
        }
        for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 22; i_8 += 1) 
            {
                var_24 ^= ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_7] [i_7] [i_7 - 1] [20ULL])) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (arr_18 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_8] [i_8 + 2] [i_8 + 2] [i_8]))))) : ((+(((long long int) var_10))))));
                var_25 &= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_8] [i_8 + 1] [i_0] [i_0])) & (((/* implicit */int) arr_16 [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_7])))) & (((/* implicit */int) max((arr_16 [i_8] [i_8 + 2] [8LL] [i_0]), (arr_16 [11LL] [i_8 - 1] [i_8] [i_8]))))));
                var_26 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_13 [i_7 + 1] [i_8 - 1])))) - (((((/* implicit */_Bool) arr_29 [i_7 - 1])) ? (arr_21 [i_0] [i_7 + 1] [i_8 + 2] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            arr_36 [(unsigned char)3] [i_9] [i_9] [14LL] [i_7] [i_0] &= min((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_33 [i_9] [i_8 + 1] [i_7] [i_0]) >> (((arr_11 [i_0] [i_7] [5ULL] [i_7]) - (1833412602767663166ULL))))))))));
                            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) 393092500)) ? (331086510) : (((/* implicit */int) (unsigned char)181))));
                            arr_37 [i_0] [(unsigned short)8] [i_0] [i_0] [i_0] [10U] [10U] = arr_2 [i_7];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 20; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        {
                            arr_42 [i_0] [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_39 [i_12]);
                            var_28 -= max((arr_16 [i_0] [i_0] [i_8 + 1] [i_11 - 1]), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) (unsigned short)55360))) > (((/* implicit */int) ((signed char) arr_8 [i_8] [i_8] [i_7] [i_0])))))));
                            arr_43 [i_12] [i_11 + 4] [i_8] [i_7] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) arr_31 [i_7 + 1] [i_7 + 1] [(signed char)13]))), (((((/* implicit */_Bool) arr_8 [i_7 - 1] [(signed char)2] [16U] [i_7 - 1])) ? (arr_31 [i_7 + 2] [i_7 + 2] [i_8]) : (arr_8 [i_7 - 1] [i_7 - 1] [i_8] [i_7 - 1])))));
                            arr_44 [i_0] [i_8] = ((unsigned char) (!(((/* implicit */_Bool) (-(1876799228))))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */long long int) arr_11 [(unsigned short)9] [i_7] [i_7 - 1] [(signed char)7]);
        }
        var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((/* implicit */int) (signed char)3))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))))), (((((/* implicit */long long int) -1876799229)) / (-8419541936582162347LL))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]))) - (arr_29 [i_0]))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0])), (var_11))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_17 [i_0] [i_0])) + (2147483647))) >> (((arr_11 [i_0] [i_0] [i_0] [i_0]) - (1833412602767663170ULL))))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) -555587223)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) (short)-13547))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
    {
        for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            {
                arr_49 [i_13] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_13] [i_13])))))) : (((max((8419541936582162346LL), (((/* implicit */long long int) 1194180368U)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 4611686018418999296LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5128)))))))));
                var_32 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((8419541936582162349LL), (8419541936582162354LL)))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_3)))))), (((/* implicit */int) var_8))));
                var_33 -= var_3;
                var_34 = ((/* implicit */unsigned int) var_2);
                /* LoopSeq 2 */
                for (unsigned short i_15 = 3; i_15 < 12; i_15 += 2) /* same iter space */
                {
                    arr_53 [i_15] [i_14] [i_15 - 1] = ((/* implicit */long long int) var_2);
                    arr_54 [i_15] [i_15] = arr_7 [i_13] [i_14] [i_15 + 1] [i_14];
                    arr_55 [(signed char)14] [i_14] [i_14] &= ((/* implicit */unsigned long long int) ((1425808744203280590ULL) == (((/* implicit */unsigned long long int) -8419541936582162378LL))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            var_35 = (+(((/* implicit */int) arr_20 [i_13] [i_13] [i_13] [i_16 + 1])));
                            arr_61 [i_15] [10] = ((/* implicit */unsigned short) var_14);
                            var_36 = var_16;
                        }
                        var_37 -= ((/* implicit */short) (-(arr_18 [i_15 + 3] [i_15] [i_16 + 1] [i_16 + 1])));
                        arr_62 [i_13] [i_15] [i_13] = ((/* implicit */unsigned char) var_14);
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) -8419541936582162393LL)) && (((/* implicit */_Bool) (unsigned short)2047))));
                        var_39 &= ((/* implicit */int) ((short) min((((/* implicit */int) arr_56 [i_13])), (((((/* implicit */int) arr_46 [i_14] [i_14])) << (((arr_58 [(unsigned short)12] [i_18] [i_18] [i_13]) - (16176227247093371173ULL))))))));
                        arr_67 [i_13] [i_13] [i_13] [i_13] [i_15] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) -8419541936582162367LL)) ? (((/* implicit */int) (!((_Bool)1)))) : (1876799228)));
                    }
                    arr_68 [i_14] [14U] [i_15] [i_13] = ((/* implicit */_Bool) var_4);
                }
                for (unsigned short i_19 = 3; i_19 < 12; i_19 += 2) /* same iter space */
                {
                    var_40 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_19] [(unsigned short)20] [13ULL] [i_13]))))), (arr_21 [i_13] [i_13] [i_13] [i_13])));
                    /* LoopSeq 2 */
                    for (int i_20 = 2; i_20 < 13; i_20 += 2) 
                    {
                        var_41 = ((/* implicit */long long int) ((((((/* implicit */int) arr_47 [i_19 + 1] [i_20 + 1])) == (((/* implicit */int) arr_32 [i_13] [i_13] [i_13] [(short)14] [i_20 + 1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_32 [i_14] [i_20] [7] [i_20 - 1] [i_20 + 1])) : (((/* implicit */int) arr_32 [i_19 + 3] [i_19] [i_19 + 3] [i_20] [i_20 - 1])))) : (((/* implicit */int) arr_32 [i_14] [i_19] [i_20] [i_20] [i_20 - 2]))));
                        /* LoopSeq 1 */
                        for (signed char i_21 = 0; i_21 < 15; i_21 += 3) 
                        {
                            var_42 = ((/* implicit */long long int) arr_33 [i_13] [i_14] [i_19] [i_20]);
                            arr_76 [i_13] [i_13] [i_19] [i_20] [(unsigned short)3] = ((/* implicit */unsigned long long int) arr_65 [i_13] [i_20] [i_20]);
                            var_43 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_21 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [i_14]) > (((/* implicit */unsigned long long int) 1906050957U)))))) % (2388916350U)))) ? (((/* implicit */int) arr_51 [i_21] [i_14] [i_19])) : (((((5521180058135193850ULL) <= (12925564015574357775ULL))) ? (((/* implicit */int) arr_32 [i_13] [i_14] [i_19] [i_20 - 1] [i_13])) : (((/* implicit */int) var_4)))));
                        }
                    }
                    for (signed char i_22 = 3; i_22 < 12; i_22 += 1) 
                    {
                        var_44 = ((/* implicit */signed char) max((((arr_22 [i_14] [i_22 + 2] [i_19 + 2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_22 - 1])) > (((/* implicit */int) var_3))))))), (((/* implicit */int) ((arr_57 [i_19] [i_19] [i_19 + 2] [i_19 + 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                        arr_79 [i_13] [i_13] [i_13] [i_13] [13LL] [i_22] = ((/* implicit */signed char) arr_31 [i_13] [(signed char)10] [i_13]);
                    }
                    var_45 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_14))) ? (((((/* implicit */_Bool) arr_46 [i_14] [i_19])) ? (arr_33 [i_13] [18ULL] [i_13] [i_19 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_14)))))))) ? (max((((((/* implicit */int) arr_2 [i_14])) << (((arr_38 [(short)3] [i_14]) - (2235177614989371148LL))))), (((/* implicit */int) var_8)))) : (max(((((_Bool)1) ? (arr_41 [i_13] [i_14] [i_19 - 3] [i_14] [i_14] [(unsigned short)13] [i_19]) : (((/* implicit */int) arr_27 [i_19] [10] [i_13])))), (((/* implicit */int) arr_66 [6LL] [8ULL] [i_14] [i_13] [8ULL]))))));
                    arr_80 [i_14] = ((/* implicit */short) (((+(((/* implicit */int) var_15)))) < (((/* implicit */int) arr_50 [i_13] [i_14] [i_19] [i_14]))));
                    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) var_5))));
                }
            }
        } 
    } 
    var_47 = var_16;
}
