/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164962
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
    var_11 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) min((var_12), (max((((max((var_8), (((/* implicit */int) (short)-1)))) - (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -7144227987808634480LL)) : (16627677428593460995ULL))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (1819066645116090623ULL))))))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_1] [5ULL]) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1] [i_0 - 1])) / (((/* implicit */int) arr_1 [i_0] [i_1]))))), (max((((/* implicit */long long int) var_1)), (arr_2 [i_1]))))) : ((~(arr_3 [i_1] [i_1])))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            arr_13 [i_2] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_5 [i_1] [i_1]), (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_0]))))), ((-(7144227987808634479LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51737))) != (arr_11 [i_0] [i_1] [i_2] [12] [i_4]))))))) : (min((max((3730360893U), (((/* implicit */unsigned int) (short)-6071)))), (((unsigned int) var_3))))));
                            var_14 = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 2; i_5 < 19; i_5 += 2) 
            {
                var_15 = ((/* implicit */unsigned char) ((arr_7 [i_1] [i_5 - 2] [i_5] [i_5]) | (arr_7 [i_1] [i_5 + 4] [i_5 + 2] [i_5])));
                /* LoopNest 2 */
                for (long long int i_6 = 3; i_6 < 22; i_6 += 1) 
                {
                    for (int i_7 = 2; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_1] [0LL] [i_5] [i_5] [i_6] [i_1] = ((/* implicit */unsigned char) ((arr_2 [i_1]) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)25)))))));
                            var_16 -= ((/* implicit */unsigned int) (~(-2755588776894060725LL)));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((signed char) arr_16 [i_0] [i_1])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_0 - 1] [5ULL] [i_5 + 2]))));
            }
        }
        for (int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
        {
            arr_24 [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_20 [i_0] [i_8] [22ULL] [i_8] [i_0])) != (1819066645116090621ULL)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (16405554099716715799ULL))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0 - 1] [(_Bool)1] [i_0] [i_0 - 2] [i_8])))))));
            /* LoopNest 3 */
            for (signed char i_9 = 3; i_9 < 21; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((long long int) (+(arr_20 [i_0] [i_8] [i_9] [i_10] [i_11])))))));
                            var_20 = ((unsigned int) ((((/* implicit */_Bool) 564606425U)) ? (arr_20 [i_0] [i_9 - 1] [i_0 + 2] [i_10] [i_11]) : (arr_20 [i_0] [i_9 + 2] [i_0 + 1] [i_10] [i_10])));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                for (signed char i_13 = 1; i_13 < 21; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) (-(((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_12] [i_0])) ? (var_6) : (arr_28 [i_0 - 2] [i_12] [i_12] [8U] [i_14]))) - (((/* implicit */unsigned long long int) (-(var_8))))))));
                            arr_40 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) <= (-5967698551180812421LL))))) | (max((((/* implicit */unsigned long long int) 3730360882U)), (var_6))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5127307513775521756LL)) ? (16405554099716715802ULL) : (((/* implicit */unsigned long long int) 564606414U)))) >= (min((16405554099716715799ULL), (((/* implicit */unsigned long long int) var_0)))))))));
                            var_22 = ((((/* implicit */_Bool) (-(((long long int) var_2))))) ? (max((arr_7 [i_0] [i_0 - 1] [i_13 + 2] [i_0]), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_2)), (var_10)))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_8)) ^ (arr_11 [i_0] [i_0] [(unsigned char)8] [i_0] [i_0 - 1])))));
                            var_23 |= ((/* implicit */unsigned int) ((int) min(((-(((/* implicit */int) arr_17 [22] [22] [i_12] [22] [i_14])))), (((/* implicit */int) ((arr_31 [i_0] [(unsigned char)1] [i_0] [i_13] [i_14] [8U]) < (18322649301594714085ULL)))))));
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(var_6))) - (((/* implicit */unsigned long long int) max((7144227987808634479LL), (((/* implicit */long long int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (16165112020265497504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9652)))))) ? (((unsigned int) (unsigned char)190)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (1443161464835542440LL)))))))) : ((-(((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_31 [i_0] [i_8] [i_12] [17LL] [i_14] [i_8])))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
        {
            arr_44 [i_0] [i_0] = ((/* implicit */int) var_3);
            var_25 = ((/* implicit */int) ((max((arr_25 [i_0 + 3] [i_15] [i_15]), (arr_25 [i_0 + 3] [i_15] [i_15]))) / (min((arr_25 [i_0 - 2] [i_0 - 2] [13LL]), (arr_25 [i_0 - 1] [i_15] [i_15])))));
        }
        /* LoopSeq 2 */
        for (long long int i_16 = 1; i_16 < 21; i_16 += 4) 
        {
            var_26 = ((/* implicit */short) (-(var_6)));
            arr_47 [i_16] = ((/* implicit */unsigned int) var_1);
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-7732)) || (((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (short)-23446)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))));
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                for (unsigned int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 23; i_19 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */short) ((long long int) (-(16627677428593460995ULL))));
                            var_29 = ((/* implicit */unsigned short) 2216299699920241346LL);
                            arr_57 [i_0] [19U] [i_16] [i_18] [i_19] [(_Bool)1] = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-104)) || (((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) ((unsigned long long int) arr_32 [i_16] [i_16])))))), (max((-7144227987808634475LL), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))));
                            arr_58 [i_16] [i_16] [i_16] = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) arr_39 [i_16 + 1] [i_16] [i_16 + 2] [i_16 + 2] [i_16 + 2] [i_16])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_16 - 1] [i_0 + 3])))))));
        }
        for (int i_20 = 1; i_20 < 22; i_20 += 3) 
        {
            var_31 = ((/* implicit */short) ((int) arr_59 [i_0] [i_0] [8LL]));
            /* LoopNest 2 */
            for (unsigned short i_21 = 4; i_21 < 20; i_21 += 4) 
            {
                for (unsigned int i_22 = 4; i_22 < 22; i_22 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_63 [(short)16])), (var_9))) >= (((((/* implicit */unsigned long long int) var_8)) | (var_6)))))) << (((max((((var_4) / (var_8))), (((/* implicit */int) arr_6 [i_0 - 2] [i_21] [i_20] [i_22 - 3])))) - (39)))));
                        var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 30639990U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_20] [i_21 - 4] [i_0 + 3] [i_0 - 2] [i_21 - 4] [i_22]))) : (18205518778337385218ULL))) < (((/* implicit */unsigned long long int) (+(4294967279U))))));
                    }
                } 
            } 
            var_34 = ((/* implicit */int) ((unsigned int) (+(var_9))));
            var_35 = ((/* implicit */signed char) (_Bool)1);
            /* LoopSeq 3 */
            for (int i_23 = 3; i_23 < 22; i_23 += 2) 
            {
                arr_71 [i_0] [i_20] [i_23 - 3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_37 [i_20 + 1] [i_20] [i_20 + 1] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_62 [(unsigned short)4])) ? (16627677428593460993ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_23] [i_0])))))));
                var_36 = ((/* implicit */unsigned short) arr_16 [i_0] [i_0]);
                arr_72 [i_0] [(short)4] [i_23] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_23] [(signed char)0] [i_0] [i_23 - 1] [4ULL])) ? ((~(max((arr_16 [i_0 + 1] [i_20]), (((/* implicit */int) (unsigned short)24034)))))) : (max((arr_64 [i_0] [i_0] [i_20 + 1] [i_23 - 1]), (arr_64 [i_0] [i_20] [i_20 - 1] [i_23 - 2])))));
                /* LoopNest 2 */
                for (signed char i_24 = 2; i_24 < 20; i_24 += 1) 
                {
                    for (unsigned char i_25 = 0; i_25 < 23; i_25 += 1) 
                    {
                        {
                            var_37 = ((((/* implicit */_Bool) (-(837264179)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_74 [i_0] [i_20] [i_23 - 3] [i_23 - 3])) || (((/* implicit */_Bool) arr_36 [i_20] [i_24] [i_24] [i_24 + 3] [8LL] [i_20]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)90)) : (-1373991867)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9653))) == (var_6)))) : (((int) arr_65 [i_23] [i_23])))));
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_0)), (94945549)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_20] [i_23]))) : (max((arr_20 [i_0] [i_0] [i_0 - 1] [i_0 + 3] [i_0 - 1]), (arr_20 [i_0] [i_20 - 1] [i_23] [i_23] [i_25])))));
                            var_39 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_59 [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (arr_20 [i_0] [(unsigned char)6] [i_0] [(unsigned char)6] [(short)3]) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0] [i_0] [i_0 + 1]))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) arr_52 [i_0] [i_0] [i_23] [i_0])))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))))))));
                            arr_79 [i_25] [i_24] [i_20] [i_20] [i_20] [i_0 + 3] [11LL] = ((/* implicit */short) arr_30 [(signed char)18] [(signed char)18] [i_0] [i_0] [i_0 + 1]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_26 = 0; i_26 < 23; i_26 += 2) 
            {
                var_40 = ((/* implicit */unsigned int) (-(-94945549)));
                var_41 |= ((/* implicit */long long int) (((+(var_3))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40)))));
                /* LoopNest 2 */
                for (signed char i_27 = 2; i_27 < 20; i_27 += 4) 
                {
                    for (unsigned int i_28 = 0; i_28 < 23; i_28 += 1) 
                    {
                        {
                            var_42 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_28] [i_28] [i_28]))) / (4U));
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_28] [2] [2] [i_0 + 1])) ^ (((/* implicit */int) arr_18 [i_0] [i_26] [i_20] [i_0]))));
                            var_44 = ((/* implicit */int) ((((/* implicit */long long int) 2841472311U)) | (arr_52 [i_28] [i_20] [i_20 - 1] [i_28])));
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [(_Bool)1] [i_27] [i_27] [i_27 - 2] [i_0 + 3])) ? (arr_37 [12] [(unsigned short)8] [i_27 + 3] [i_27 + 1] [i_0 - 2]) : (-599443413295722925LL)));
                            var_46 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_20] [i_20 - 1] [i_27]))));
                        }
                    } 
                } 
                var_47 = ((unsigned long long int) ((unsigned short) var_6));
            }
            for (unsigned int i_29 = 0; i_29 < 23; i_29 += 4) 
            {
                var_48 = ((/* implicit */unsigned int) 16627677428593460995ULL);
                arr_90 [2LL] [i_20] [i_20] [2LL] = ((/* implicit */long long int) var_4);
            }
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_30 = 2; i_30 < 8; i_30 += 1) 
    {
        var_49 ^= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16556)) << (((((/* implicit */int) arr_19 [i_30] [i_30] [16U] [(short)18] [i_30] [(short)18] [i_30])) - (61866)))))) ? (((/* implicit */unsigned long long int) arr_91 [i_30 - 1])) : (((var_9) % (((/* implicit */unsigned long long int) 94945549)))));
        /* LoopSeq 1 */
        for (int i_31 = 2; i_31 < 10; i_31 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_32 = 0; i_32 < 12; i_32 += 4) 
            {
                arr_99 [i_30] [i_30] [i_32] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                var_50 = ((/* implicit */int) arr_48 [i_30 + 3] [16U] [i_32] [i_32]);
            }
            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_56 [i_30] [i_30 - 1] [i_31] [i_31 + 2] [i_31] [i_31] [i_31])));
            var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_31 - 2] [i_30 + 2] [(unsigned short)12] [(unsigned short)12])) ? (((((/* implicit */_Bool) arr_92 [11])) ? (var_6) : (((/* implicit */unsigned long long int) 2665456341U)))) : (((/* implicit */unsigned long long int) ((long long int) var_3)))));
            /* LoopNest 3 */
            for (long long int i_33 = 1; i_33 < 11; i_33 += 4) 
            {
                for (unsigned char i_34 = 2; i_34 < 10; i_34 += 1) 
                {
                    for (long long int i_35 = 0; i_35 < 12; i_35 += 1) 
                    {
                        {
                            var_53 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_30 [i_30] [i_30] [i_31] [i_31] [i_34 + 2]))));
                            var_54 = ((/* implicit */short) ((((/* implicit */_Bool) arr_95 [i_30 + 1] [i_30])) ? (arr_95 [i_30 + 2] [i_30]) : (arr_95 [i_30 + 2] [i_30])));
                        }
                    } 
                } 
            } 
        }
        var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_30] [i_30] [i_30] [i_30])) ? (arr_81 [17U] [17U]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (unsigned short)30737)) | (((/* implicit */int) (unsigned short)16552)))) : (((/* implicit */int) arr_48 [i_30] [i_30 + 3] [20U] [20U]))));
        var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) ((arr_61 [i_30] [22ULL] [i_30 + 2]) * (arr_61 [i_30] [i_30] [i_30 + 3]))))));
    }
}
