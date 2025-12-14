/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152366
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
    var_20 = ((/* implicit */_Bool) var_0);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(((/* implicit */int) (signed char)-39)))) : (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) var_13))))))) + (((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) (_Bool)1))))));
        arr_3 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [10U] [i_0]))));
    }
    for (unsigned short i_1 = 2; i_1 < 7; i_1 += 4) 
    {
        arr_8 [(unsigned short)2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) < (18446744073709551615ULL)));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), ((~(18446744073709551615ULL)))));
        var_23 -= ((/* implicit */unsigned int) var_19);
        var_24 = (-(min((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 7; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) var_11);
                            var_26 -= ((((/* implicit */int) arr_5 [i_1 + 3])) <= (((/* implicit */int) (_Bool)1)));
                            var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_2] [i_2 - 1] [i_5 - 1] [i_5 - 2] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) arr_18 [i_4] [6U] [i_5 - 1] [5LL] [i_5] [6U] [6U])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) + (arr_18 [i_4] [i_4] [i_5 - 1] [i_5] [i_5] [i_5 - 1] [(_Bool)1]))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            arr_21 [i_6] [i_2 + 1] [1] [i_3] [i_3] [i_2 + 1] [i_1] &= ((/* implicit */short) ((_Bool) (_Bool)1));
                            var_28 = ((/* implicit */_Bool) (-(((arr_7 [i_2 - 1] [i_1 - 2]) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) + (35993612646875136LL))))))));
                        }
                        arr_22 [i_4] [i_3] [i_2] [8ULL] = ((/* implicit */_Bool) arr_11 [i_1 + 2] [(_Bool)1] [i_1]);
                        var_29 = ((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) (signed char)51))))) ? (((/* implicit */int) (signed char)116)) : (((int) var_18))))));
                    }
                } 
            } 
            arr_23 [4U] &= ((/* implicit */unsigned short) arr_6 [i_2 - 2] [i_1 + 3]);
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (262143U))))) >= (((((/* implicit */_Bool) ((3448157122U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116)))))) ? (max((((/* implicit */unsigned int) var_13)), (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_1] [i_1] [(unsigned short)2] [i_1] [i_2])) | (((/* implicit */int) arr_15 [i_2] [i_1] [i_1])))))))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 2; i_7 < 7; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                for (int i_9 = 2; i_9 < 9; i_9 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_8] [i_8 + 1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned short)5] [i_8 + 1] [(unsigned short)2] [i_9 - 1] [i_9]))) : (arr_30 [i_8] [i_8 + 1] [i_8])));
                        arr_33 [i_8] [i_8 + 1] [i_8] [i_7] [i_8] = ((/* implicit */unsigned int) ((((var_2) ? (arr_20 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)136))))) > (((/* implicit */long long int) var_15))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_8] [i_8] [i_8] [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_19)) <= (((/* implicit */int) var_5))));
                            var_32 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (signed char)-5)) < (((/* implicit */int) (short)136)))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_33 = arr_34 [i_1] [i_7] [i_8] [i_9] [i_11];
                            arr_41 [i_8] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */int) arr_16 [i_1 + 2] [0ULL]);
                        }
                    }
                } 
            } 
            var_34 = ((/* implicit */short) ((unsigned short) var_3));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (unsigned char i_13 = 3; i_13 < 8; i_13 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) (-(1354709720)));
                        arr_47 [i_1] = ((/* implicit */unsigned char) ((arr_7 [i_7 + 1] [i_13]) & (arr_7 [i_7 - 2] [(short)8])));
                        var_37 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [9LL] [9LL] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) (+(-965882508)))) : (((((/* implicit */_Bool) 4294967286U)) ? (14567298789777297754ULL) : (((/* implicit */unsigned long long int) -35993612646875142LL)))));
                    }
                } 
            } 
        }
    }
    var_38 ^= ((/* implicit */long long int) (+((~(((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (short i_14 = 0; i_14 < 22; i_14 += 2) 
    {
        for (unsigned int i_15 = 1; i_15 < 19; i_15 += 4) 
        {
            {
                arr_53 [i_15] = ((/* implicit */long long int) arr_50 [(short)19] [i_15] [i_14]);
                arr_54 [i_15] [(unsigned char)9] = ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)12)))) << (((3295013460U) - (3295013437U)))));
                var_39 = ((/* implicit */_Bool) max((var_39), (((_Bool) ((((/* implicit */_Bool) min((var_18), (arr_49 [(signed char)19])))) ? ((~(var_11))) : (((arr_48 [i_14] [i_14]) / (arr_48 [(unsigned short)20] [17]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        arr_59 [i_14] [i_15] [i_14] [i_17 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_56 [i_15 + 2] [i_15 + 2] [i_15])) <= (((/* implicit */int) arr_56 [i_15 + 2] [i_15] [i_15]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                        {
                            arr_62 [i_14] [i_14] [i_14] |= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)60495))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_10)))));
                            arr_63 [(unsigned short)11] [i_15] [i_16] [(unsigned short)11] [i_18] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21908)) ? (((/* implicit */int) (short)-9542)) : (-1109007273)));
                            var_41 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_14]))) * (arr_55 [i_17 - 1] [i_18])));
                        }
                    }
                    arr_64 [i_15] = ((/* implicit */unsigned long long int) ((((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-56)) >= (((/* implicit */int) var_5))))))));
                    /* LoopSeq 1 */
                    for (long long int i_19 = 1; i_19 < 20; i_19 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                        {
                            arr_70 [i_14] [i_15 + 1] [(short)21] [i_15] [i_20] [i_14] = ((((/* implicit */int) arr_68 [i_14] [i_15] [i_15] [i_20])) == (((/* implicit */int) arr_65 [i_14] [i_14] [i_14] [i_14])));
                            arr_71 [i_15] [(short)9] [i_16] [i_19] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_55 [i_14] [i_14])) ? (((/* implicit */int) arr_56 [1ULL] [i_16] [i_15])) : (arr_58 [(signed char)15] [i_16]))) <= (-2147483629)));
                            var_42 = ((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_14] [i_14] [i_16] [(signed char)19] [(_Bool)1])) && (((/* implicit */_Bool) arr_65 [i_20] [i_19] [i_15] [i_15]))));
                            var_43 = ((/* implicit */unsigned short) 4294967295U);
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                        {
                            arr_75 [(unsigned short)11] [i_21] [i_14] [(unsigned char)0] [i_21] [(short)18] [i_15] = ((/* implicit */unsigned char) ((arr_67 [i_15]) > ((~(((/* implicit */int) var_12))))));
                            var_44 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)25))) <= (-858797152329432695LL)));
                            arr_76 [i_15] [i_19] [i_19] [11U] [i_15] [i_14] [i_15] = ((/* implicit */_Bool) var_11);
                        }
                        arr_77 [i_19] [i_15] [(short)4] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_73 [i_15] [i_15] [i_19] [i_19 + 2] [i_14])))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))) >= (26U))))));
                        var_45 = ((/* implicit */unsigned short) ((_Bool) 70368609959936LL));
                        arr_78 [i_15] [i_16] [0ULL] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 3040699510070580751ULL)) ? (15454804280697289897ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))))) <= (((/* implicit */unsigned long long int) arr_58 [i_14] [i_15 + 2]))));
                    }
                }
            }
        } 
    } 
}
