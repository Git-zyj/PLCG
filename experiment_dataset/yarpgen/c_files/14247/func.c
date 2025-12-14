/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14247
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_19 = ((/* implicit */_Bool) var_9);
            arr_6 [i_1] = ((/* implicit */signed char) var_6);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_3] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_3] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_3] [i_3 - 1])) : (((/* implicit */int) var_9))));
                            var_20 = ((/* implicit */unsigned int) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_17 [i_0] [i_1] [i_1] [(unsigned short)6] [i_4] [i_0] |= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 9223372036854775781LL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_2]))))));
                        }
                    } 
                } 
                arr_18 [i_1] = ((/* implicit */int) var_6);
            }
        }
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 536862720U)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-56))))))));
            var_22 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0] [i_0]));
            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */signed char) var_4);
            var_23 = ((/* implicit */int) (-(arr_5 [i_0] [i_5] [(_Bool)1])));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_12))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 21; i_8 += 1) 
            {
                for (long long int i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) var_12);
                        arr_31 [(unsigned short)1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_9 + 1]))) : (arr_22 [i_9 + 1])));
                    }
                } 
            } 
            arr_32 [i_6] [i_7] = ((/* implicit */unsigned char) (~(var_11)));
        }
        var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_6] [(signed char)14] [i_6] [(signed char)14]))))), (max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) ((short) arr_28 [i_6] [(signed char)14] [(signed char)14] [i_6])))))));
    }
    var_27 = var_16;
    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_1))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_10 = 2; i_10 < 20; i_10 += 4) /* same iter space */
    {
        var_29 ^= ((/* implicit */long long int) arr_22 [i_10 - 2]);
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            arr_39 [i_10] [i_11] [i_11] |= ((/* implicit */int) (+(var_12)));
            arr_40 [0LL] [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_10 - 1] [i_10]))) < (arr_33 [i_10 - 2])));
            /* LoopNest 2 */
            for (long long int i_12 = 1; i_12 < 17; i_12 += 3) 
            {
                for (long long int i_13 = 1; i_13 < 20; i_13 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) arr_41 [i_13 + 1] [i_12 - 1] [i_11] [i_10 + 1]);
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_13 - 1] [i_10 + 1])) ? (3817347172U) : (((/* implicit */unsigned int) arr_35 [i_13 + 1] [i_10 - 1]))));
                        arr_45 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -838559272)) ? (((-416524670762400102LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_11] [(unsigned short)8] [i_13]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 2; i_14 < 19; i_14 += 3) 
                        {
                            arr_48 [i_13] [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [i_12 + 1] [i_12 + 4]))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_10 - 2] [i_13] [i_13 - 1] [i_14 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)44401))) / (arr_24 [i_13]))) : (((var_12) & (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_10] [6] [6])))))));
                            var_33 = ((/* implicit */short) max((var_33), ((short)-17805)));
                        }
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_10] [i_10] [i_11] [(_Bool)1] [i_10] [1LL])) + (((/* implicit */int) arr_36 [i_10]))))))))));
                    }
                } 
            } 
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_35 = ((/* implicit */unsigned short) arr_42 [i_10] [(short)6] [(unsigned char)3]);
            var_36 = ((/* implicit */unsigned short) arr_49 [i_10] [i_15]);
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) arr_33 [i_15]);
                        arr_57 [i_15] = ((/* implicit */unsigned short) var_8);
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_10 + 1] [i_10 - 2] [i_10 - 1] [i_15])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21135)))));
            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (var_16))))));
        }
        arr_58 [i_10] = ((/* implicit */short) (unsigned short)2040);
        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (-(arr_26 [i_10 - 2] [i_10 - 2] [i_10 + 1] [i_10 - 2]))))));
        arr_59 [i_10] &= var_14;
    }
    for (long long int i_18 = 2; i_18 < 20; i_18 += 4) /* same iter space */
    {
        arr_62 [i_18] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_56 [20U] [20U] [i_18] [i_18 + 1])) ^ (((/* implicit */int) (signed char)-110))))));
        /* LoopSeq 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) var_16))));
            arr_67 [i_19] [i_19] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-58))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 21; i_20 += 3) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    {
                        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) arr_43 [i_18] [i_19] [i_18] [i_21] [(short)20] [i_20]))));
                        var_43 = ((/* implicit */signed char) min((var_43), ((signed char)-99)));
                        /* LoopSeq 3 */
                        for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
                        {
                            arr_74 [18] [i_19] [(unsigned short)20] [(unsigned short)20] [i_21] [i_21] [(_Bool)1] = ((/* implicit */long long int) ((2145386496U) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) : (((((/* implicit */_Bool) (unsigned short)65516)) ? (2484060009U) : (2145386500U)))))));
                            arr_75 [(unsigned short)3] = ((/* implicit */unsigned long long int) max(((~(arr_24 [i_18]))), (min((((/* implicit */long long int) var_9)), (arr_24 [i_18])))));
                        }
                        for (unsigned long long int i_23 = 1; i_23 < 18; i_23 += 4) 
                        {
                            var_44 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_29 [i_18 - 1] [i_18] [(short)2] [i_21]), (((/* implicit */unsigned short) var_7)))))) != (((((/* implicit */_Bool) (short)-697)) ? (((/* implicit */long long int) 3110872127U)) : (arr_49 [i_19] [i_18])))));
                            var_45 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_33 [i_18])) : (2285369124343511228ULL)))) ? (((((/* implicit */_Bool) (short)11261)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (-1LL))) : (((/* implicit */long long int) 1810907306U))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (arr_52 [15ULL])))), (min((arr_41 [i_19] [i_20] [i_21] [i_23 + 1]), (((/* implicit */unsigned long long int) arr_23 [4ULL] [i_19])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-99)), (var_12)))));
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12709)) ? (1810907287U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22313)))));
                        }
                        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                        {
                            arr_83 [(unsigned short)12] [(unsigned short)12] [i_20] [i_21] [i_24] |= ((/* implicit */long long int) var_5);
                            arr_84 [i_18] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                        }
                        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) (!(var_5))))));
                        arr_85 [i_18] [7U] [i_18] [i_18] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (short)9828))))) ? (((1184095169U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)768))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61408))))), (((/* implicit */unsigned int) (short)768))));
                    }
                } 
            } 
        }
        for (unsigned char i_25 = 0; i_25 < 21; i_25 += 4) 
        {
            var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_18] [i_18] [i_18] [i_25])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((var_16) ? (((var_5) ? (var_15) : (((/* implicit */unsigned long long int) 708926894U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_41 [i_25] [i_25] [3LL] [i_25])))))))))));
            arr_88 [i_18] [18] = ((/* implicit */signed char) 2484060009U);
            var_49 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_7)))))))));
        }
        var_50 = ((/* implicit */short) arr_63 [i_18] [i_18] [i_18]);
    }
    for (long long int i_26 = 2; i_26 < 20; i_26 += 4) /* same iter space */
    {
        arr_92 [(unsigned char)16] [i_26 - 2] |= ((((/* implicit */long long int) arr_63 [i_26 - 1] [i_26 + 1] [i_26 + 1])) & (min((((((/* implicit */long long int) arr_79 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] [1])) ^ (arr_33 [i_26]))), (((((/* implicit */_Bool) var_14)) ? (arr_44 [i_26] [i_26] [i_26] [i_26]) : (((/* implicit */long long int) 1534748863U)))))));
        var_51 = ((/* implicit */unsigned long long int) ((long long int) arr_70 [i_26] [i_26]));
        arr_93 [i_26] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_12)) >= (((min((((/* implicit */unsigned long long int) var_2)), (var_1))) << (((/* implicit */int) (!((_Bool)0))))))));
        var_52 = ((/* implicit */long long int) ((unsigned int) arr_80 [i_26 - 2] [i_26 - 2] [i_26 + 1] [i_26 + 1] [i_26 + 1]));
    }
}
