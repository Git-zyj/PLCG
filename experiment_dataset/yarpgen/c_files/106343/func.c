/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106343
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
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (var_0))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0 - 2] [i_0 + 2]) : (arr_0 [i_0 - 2] [i_0 - 2])))), (max((0LL), ((-(-1LL))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_16 ^= var_5;
                        var_17 -= ((/* implicit */unsigned short) arr_3 [i_2]);
                    }
                } 
            } 
        } 
        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-61)), (var_11)))), (arr_9 [i_1] [(unsigned short)10] [i_1] [i_1])))) && (((/* implicit */_Bool) (~(var_5))))));
    }
    var_19 *= ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15819))))))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((0LL), (3017369468971089353LL)))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)15819)))))))))));
        var_21 = ((/* implicit */int) var_8);
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
    {
        var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            var_23 -= ((/* implicit */unsigned int) var_9);
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(var_2))))));
        }
        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_25 -= ((/* implicit */int) var_1);
            var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)64)))))));
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((unsigned int) (~(arr_1 [i_9] [i_10])))))));
            arr_26 [i_9] &= ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) var_12)))));
            var_29 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) -1LL)))));
            var_30 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_10] [i_10]))));
        }
        var_31 &= ((/* implicit */unsigned int) (+((-(var_5)))));
    }
    for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        var_32 += ((/* implicit */short) ((var_12) ? (((/* implicit */unsigned long long int) (-(var_0)))) : (max((arr_9 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_17 [i_11])), (var_5))))))));
        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((unsigned int) arr_27 [i_11])))));
        var_34 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_2 [i_11]))))))));
    }
    for (unsigned short i_12 = 1; i_12 < 13; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            for (short i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                {
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)8128)) : (((/* implicit */int) arr_31 [i_12 - 1]))))) ? (var_5) : (((((/* implicit */_Bool) var_5)) ? (8LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_4))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */long long int) min((var_37), (max((var_8), (((/* implicit */long long int) arr_16 [i_12] [i_12] [(unsigned char)9]))))));
                                var_38 ^= ((/* implicit */int) var_8);
                                var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (-(((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_17 = 1; i_17 < 13; i_17 += 3) 
                    {
                        var_40 -= ((/* implicit */short) max((((((/* implicit */int) arr_38 [(_Bool)1] [(_Bool)1] [i_17 + 1])) | (((/* implicit */int) arr_38 [i_13] [(_Bool)1] [i_17 - 1])))), (((/* implicit */int) var_11))));
                        var_41 -= ((/* implicit */signed char) (_Bool)0);
                    }
                    for (unsigned char i_18 = 1; i_18 < 13; i_18 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_19 = 1; i_19 < 12; i_19 += 1) 
                        {
                            var_42 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) ((int) var_7)))))) ? ((((!(((/* implicit */_Bool) var_4)))) ? (max((((/* implicit */long long int) var_3)), (var_4))) : (arr_30 [2U]))) : (var_5)));
                            var_43 = ((/* implicit */_Bool) max((var_43), ((!(((/* implicit */_Bool) var_10))))));
                        }
                        for (signed char i_20 = 1; i_20 < 11; i_20 += 3) 
                        {
                            arr_50 [i_12] [(unsigned short)8] [i_12] [i_12] [i_12 - 1] [i_12] [i_12 - 1] &= (~(max((arr_44 [(unsigned short)11] [i_14] [i_14] [i_18]), (arr_44 [i_12] [i_12] [i_12] [i_12]))));
                            var_44 &= ((/* implicit */signed char) max((((/* implicit */long long int) var_7)), ((-(max((((/* implicit */long long int) arr_39 [i_18] [i_13] [i_14] [i_20] [i_18] [3ULL])), (var_4)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_21 = 0; i_21 < 14; i_21 += 3) /* same iter space */
                        {
                            var_45 = ((/* implicit */int) arr_32 [(short)8] [4LL]);
                            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((unsigned long long int) 0LL)))));
                        }
                        for (unsigned int i_22 = 0; i_22 < 14; i_22 += 3) /* same iter space */
                        {
                            var_47 += ((/* implicit */long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */int) var_12))));
                            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) (unsigned short)49716))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_23 = 2; i_23 < 10; i_23 += 1) /* same iter space */
                        {
                            var_49 = max((var_2), (((/* implicit */long long int) max(((~(var_9))), (((/* implicit */int) ((unsigned short) var_4)))))));
                            var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) arr_57 [i_12] [i_12] [i_14] [i_12] [i_12] [i_12]))));
                        }
                        for (unsigned long long int i_24 = 2; i_24 < 10; i_24 += 1) /* same iter space */
                        {
                            var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) max((var_0), (((unsigned int) (~(1071106906)))))))));
                            var_52 = ((/* implicit */unsigned short) var_9);
                            var_53 *= ((/* implicit */short) (-((+(max((((/* implicit */long long int) 2432190428U)), (var_8)))))));
                            var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) ((int) (~(((/* implicit */int) (signed char)64))))))));
                        }
                        for (unsigned char i_25 = 0; i_25 < 14; i_25 += 3) 
                        {
                            var_55 = ((/* implicit */long long int) max((var_55), (((max((4834447301357019684LL), (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)-19))))))) % (((/* implicit */long long int) (-(max((var_9), (((/* implicit */int) var_3)))))))))));
                            var_56 += ((/* implicit */short) max((((/* implicit */int) arr_57 [i_18] [i_18] [i_18] [i_18 - 1] [i_18 - 1] [i_18])), (((((/* implicit */int) arr_57 [i_18] [i_18 + 1] [11] [i_18 - 1] [i_18 - 1] [i_18])) / (((/* implicit */int) arr_57 [7ULL] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18] [7ULL]))))));
                            var_57 ^= ((/* implicit */signed char) var_3);
                        }
                        var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) ((max((((((/* implicit */_Bool) arr_34 [i_14] [i_13] [i_14])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((((/* implicit */int) arr_35 [(short)2] [i_13])) > (((/* implicit */int) var_6))))))) % (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) max((max((((/* implicit */unsigned int) (unsigned short)45793)), (max((arr_37 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_13]), (((/* implicit */unsigned int) arr_17 [2LL])))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))))));
                        var_60 -= ((/* implicit */unsigned short) arr_45 [i_14]);
                        /* LoopSeq 2 */
                        for (unsigned short i_27 = 0; i_27 < 14; i_27 += 4) /* same iter space */
                        {
                            var_61 -= max((((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) arr_11 [i_12] [i_27])))))), (((unsigned short) (~(arr_66 [i_14] [i_14] [i_14] [i_14] [(unsigned char)1])))));
                            var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) (+(var_9))))));
                            var_63 = ((/* implicit */unsigned short) max((var_63), (var_13)));
                            var_64 -= ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) arr_39 [i_12] [i_12] [i_14] [i_26] [i_14] [i_14])), (arr_48 [(_Bool)1] [(unsigned short)12] [i_26] [i_26] [i_26] [i_26])))))));
                        }
                        for (unsigned short i_28 = 0; i_28 < 14; i_28 += 4) /* same iter space */
                        {
                            var_65 -= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_19 [i_28] [i_12 + 1]))))));
                            var_66 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) (-(1971235677)))), ((+(var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (short)21887)))));
                        }
                        var_67 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)45793))));
                        var_68 = ((/* implicit */unsigned short) min((var_68), (((/* implicit */unsigned short) max(((+(var_4))), (((/* implicit */long long int) var_7)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_29 = 0; i_29 < 14; i_29 += 1) 
                    {
                        for (int i_30 = 0; i_30 < 14; i_30 += 4) 
                        {
                            {
                                var_69 ^= ((/* implicit */int) var_1);
                                var_70 = ((/* implicit */int) min((var_70), (((/* implicit */int) ((short) (signed char)-27)))));
                                var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) arr_62 [i_12] [i_12] [i_14] [i_13] [i_29] [(signed char)7] [i_13]))));
                                var_72 *= ((/* implicit */unsigned short) max(((~(max((var_5), (((/* implicit */long long int) (short)12340)))))), (max((((/* implicit */long long int) max((((/* implicit */int) (signed char)48)), (arr_72 [i_12] [(unsigned short)11] [5] [i_29] [i_29])))), ((+(var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_73 = ((/* implicit */signed char) min((var_73), (((/* implicit */signed char) arr_55 [i_12] [i_12] [i_12] [i_12] [0] [i_12]))));
    }
}
