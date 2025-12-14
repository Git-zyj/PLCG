/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100894
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
    var_18 -= ((/* implicit */unsigned int) var_3);
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) var_3);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 + 1] [i_2 - 2] [i_2 + 3]))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((var_17) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))));
                        var_23 = var_1;
                        arr_10 [i_3] [i_1] [i_2 + 2] [i_3 + 1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)8128))));
                        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)32755))) ? (((/* implicit */int) ((short) var_3))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [(short)7])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_2] [i_3]))))));
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_9))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            arr_18 [i_6] [(unsigned char)16] [i_2 - 2] [i_2 - 2] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32745)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1] [(short)4])) < (((/* implicit */int) var_10))))) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [12U] [(_Bool)1]))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((int) ((((/* implicit */int) arr_7 [i_6] [i_0 + 3] [i_2] [18LL] [i_1] [i_0 + 3])) ^ (((/* implicit */int) (short)-32749))))))));
                            arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (!(arr_8 [i_0] [i_0] [i_0] [i_0] [(short)16] [i_6])));
                            var_28 = ((/* implicit */signed char) ((unsigned int) -32196160971897302LL));
                        }
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(9223372036854775791LL)))))) ? (((((/* implicit */int) arr_13 [i_0] [3U] [i_2] [i_4])) % (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_4])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (unsigned short)35)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (signed char)-42)))))))))));
                        var_30 &= ((/* implicit */signed char) min((-32196160971897277LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)72)) / (((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned char)255)))))))));
                    }
                    for (short i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        arr_22 [i_0] [i_2] [6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(-662285676))) >> (((((/* implicit */int) arr_21 [i_0 - 2] [i_2 + 2] [i_2 + 2])) - (25399)))))) ? ((+(((/* implicit */int) arr_7 [i_0 + 1] [15U] [i_1] [i_2] [i_7] [i_7 + 1])))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_0] [16U] [(_Bool)1] [i_0] [i_2 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) (short)32762)))))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (~((-((+(((/* implicit */int) arr_2 [i_1] [i_2 + 3] [i_7 - 1])))))))))));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_1 + 1]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((-2147483646) > (((/* implicit */int) arr_20 [i_1 + 1])))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_2] [i_2 + 1] [i_9 - 1])) || (((/* implicit */_Bool) arr_11 [i_0 - 2] [i_2] [i_2 - 1] [i_9 - 1]))));
                            arr_28 [i_0] [i_2] [i_2] [i_8] [i_9] &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-1))));
                        }
                        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_0 + 3] [i_0 - 2] [i_2 - 1] [i_1 + 1] [i_0]))));
                        var_35 = ((/* implicit */unsigned short) max((var_35), ((unsigned short)45)));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_11 = 4; i_11 < 22; i_11 += 1) 
                        {
                            var_36 = ((/* implicit */int) var_0);
                            arr_36 [i_11] [i_1 + 1] [22U] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)12720)) == (((/* implicit */int) var_5))))) <= (arr_25 [i_11 - 2] [i_10])));
                        }
                        for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned char) max((var_37), (arr_17 [i_0] [i_10] [i_0] [(unsigned char)4] [(signed char)19])));
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 + 1])) != (((/* implicit */int) arr_0 [i_0 + 1])))))));
                        }
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            arr_43 [i_0] [i_10] [(signed char)0] [(short)17] [i_13] = ((/* implicit */_Bool) 4271236376U);
                            var_39 = ((/* implicit */unsigned char) var_7);
                            var_40 ^= ((/* implicit */short) (+(((/* implicit */int) arr_34 [i_1 + 1] [i_10] [19LL]))));
                        }
                        var_41 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_0 - 1] [i_1] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_10]))));
                        var_42 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((3270023514U) > (((/* implicit */unsigned int) arr_32 [i_10] [i_2] [i_1] [i_0])))))));
                        var_43 += ((/* implicit */long long int) ((((4294967290U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_10]))))) > (((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_10] [i_2 - 1] [(short)12])))))));
                        var_44 = ((/* implicit */_Bool) arr_32 [i_0 - 2] [i_1] [i_1 + 1] [i_2 + 2]);
                    }
                    for (short i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        var_45 = ((/* implicit */short) ((((((/* implicit */_Bool) 128488657U)) || (((/* implicit */_Bool) (short)32261)))) && (((/* implicit */_Bool) var_11))));
                        var_46 = ((/* implicit */unsigned char) arr_35 [i_0] [(signed char)7] [i_14]);
                        var_47 = ((/* implicit */short) arr_1 [i_0]);
                        arr_46 [i_2] [i_1] [(short)18] [i_14] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_14)));
                        var_48 = ((((/* implicit */int) ((signed char) (unsigned short)65504))) ^ ((-((-(((/* implicit */int) var_1)))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
                        {
                            {
                                var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) (-(max((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (short)-9972)))), (((/* implicit */int) arr_29 [i_0])))))))));
                                var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            var_51 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (32196160971897277LL)))) ? (((((unsigned int) arr_12 [(unsigned char)5] [(unsigned char)5] [i_0] [i_17] [i_17] [16U])) / (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [19] [i_0 - 2] [3U] [i_17] [(unsigned char)11]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_53 [i_0]) | (var_16)))))));
            /* LoopNest 2 */
            for (unsigned int i_18 = 2; i_18 < 22; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 23; i_19 += 1) 
                {
                    {
                        var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) (~((~(((572339350650303451ULL) ^ (((/* implicit */unsigned long long int) arr_24 [i_17] [i_17] [(unsigned short)20] [8ULL])))))))))));
                        var_53 = ((/* implicit */unsigned char) (((+(((((/* implicit */int) var_8)) & (((/* implicit */int) var_13)))))) != (((((/* implicit */_Bool) ((int) var_16))) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) (signed char)-106))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 0; i_20 < 23; i_20 += 2) 
                        {
                            var_54 = var_5;
                            arr_65 [i_20] [i_18] [i_19] [i_18] [i_0] [i_18] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-102)) || (((/* implicit */_Bool) (short)-32761)))) ? (((/* implicit */unsigned int) 997234215)) : (139425852U))))));
                            var_55 = ((/* implicit */short) arr_47 [i_0] [i_18 - 2] [(short)8]);
                            var_56 = ((signed char) ((long long int) max((583659869U), (((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_18] [i_18 - 1] [i_19] [13U])))));
                        }
                        var_57 = ((/* implicit */short) ((((/* implicit */int) (signed char)90)) - (((/* implicit */int) (unsigned char)107))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_21 = 1; i_21 < 19; i_21 += 4) 
            {
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    for (long long int i_23 = 2; i_23 < 20; i_23 += 2) 
                    {
                        {
                            var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_0 + 1] [i_17] [i_23 + 3] [i_22 - 1])))))) & (((((((/* implicit */int) (short)18697)) == (((/* implicit */int) (short)-10958)))) ? (arr_26 [i_21 - 1] [i_0 + 3] [i_0 + 3] [i_22] [i_22 - 1] [i_23 - 1] [i_23]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)11701)))))))));
                            var_59 = ((/* implicit */unsigned short) (short)32259);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            var_60 = ((/* implicit */unsigned int) (short)-12035);
            var_61 = ((/* implicit */signed char) (-(((/* implicit */int) (short)9968))));
            var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_47 [22U] [22U] [(short)0]))) - (((/* implicit */int) (_Bool)1))))) ? ((-(arr_73 [i_0] [i_0 + 2] [i_0 + 2] [(short)16]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_17)))), ((_Bool)1))))))))));
        }
        for (unsigned short i_25 = 3; i_25 < 22; i_25 += 4) 
        {
            arr_80 [i_25] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)12043))))))));
            arr_81 [9U] [18] = (-(((/* implicit */int) (!((!(((/* implicit */_Bool) -918848305799350456LL))))))));
            var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) var_8))));
            arr_82 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (arr_63 [i_0] [i_25] [(short)11] [i_25 - 1] [i_0])))) || (((arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2]) && ((((_Bool)1) && (((/* implicit */_Bool) (short)12689))))))));
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_26 = 0; i_26 < 14; i_26 += 1) /* same iter space */
    {
        arr_85 [i_26] &= ((/* implicit */unsigned char) var_6);
        var_64 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_15)))));
        var_65 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (8U))) ^ (arr_73 [i_26] [i_26] [i_26] [(signed char)4])));
    }
    for (short i_27 = 0; i_27 < 14; i_27 += 1) /* same iter space */
    {
        arr_90 [(short)12] [(short)12] &= ((/* implicit */unsigned short) min((min((arr_11 [i_27] [(_Bool)1] [(short)3] [(_Bool)1]), (arr_11 [i_27] [i_27] [i_27] [i_27]))), (var_1)));
        var_66 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-9952)) || (((/* implicit */_Bool) 2761341485U)))))) * (((((/* implicit */_Bool) arr_2 [i_27] [5U] [i_27])) ? (arr_77 [i_27] [i_27]) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_27] [i_27])))))))) ? (((/* implicit */int) (short)12047)) : (((/* implicit */int) arr_11 [i_27] [(short)7] [19] [i_27]))));
    }
    for (long long int i_28 = 0; i_28 < 21; i_28 += 1) 
    {
        var_67 = ((/* implicit */unsigned char) min((var_67), (((/* implicit */unsigned char) var_14))));
        arr_93 [i_28] = var_17;
        arr_94 [i_28] = ((/* implicit */unsigned short) (+(((int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (4294967295U))))));
    }
}
