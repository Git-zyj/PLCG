/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118425
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((_Bool) -1018612893))))), ((+(((2540831988U) * (((/* implicit */unsigned int) 2147483632))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_16 = ((/* implicit */int) ((_Bool) arr_1 [i_1 - 1]));
                    var_17 = ((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_0 - 1]);
                }
                /* LoopSeq 2 */
                for (long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    var_18 *= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-94)) / ((+(arr_10 [i_0])))))) : (min((((/* implicit */long long int) min((var_13), (((/* implicit */int) arr_5 [i_0] [(_Bool)1]))))), (min((arr_8 [i_1] [i_1 - 1] [i_3] [(_Bool)1]), (((/* implicit */long long int) (signed char)92)))))));
                    var_19 = ((/* implicit */_Bool) (~((~(max((arr_11 [i_0]), (((/* implicit */long long int) (_Bool)0))))))));
                    arr_12 [i_0 + 2] [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */int) (+(5636970637219763456LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (((-((+(((/* implicit */int) (unsigned char)29)))))) < (((((/* implicit */_Bool) (+(arr_15 [i_4] [i_3] [i_3] [i_4])))) ? ((-(((/* implicit */int) (unsigned char)228)))) : (((/* implicit */int) (_Bool)1))))));
                                var_21 = ((arr_3 [i_0] [6ULL] [i_0]) ? (min((arr_9 [i_1 - 1] [i_3]), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)226), ((unsigned char)10)))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0] [i_1] [i_0])), ((signed char)-69)))) : (((/* implicit */int) min((arr_16 [i_0 + 1] [i_1 - 1] [i_3 + 1]), (((/* implicit */unsigned char) var_2)))))))));
                                var_22 = ((/* implicit */unsigned short) ((unsigned long long int) -2147483633));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) min(((unsigned short)39309), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */long long int) arr_15 [10] [i_1] [10] [(unsigned char)20])) : (max((-5636970637219763464LL), (((/* implicit */long long int) 0))))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) (((~(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)63))))))) / ((-(((arr_7 [i_0] [i_1] [9]) / (((/* implicit */int) (_Bool)1))))))));
                            arr_24 [i_0] [i_3] [i_6] [(short)10] [i_6] [i_1] [(short)10] = (-(((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_1] [i_3 - 2] [i_7 - 1] [i_0])) ? (((/* implicit */int) arr_21 [i_1 - 1] [i_1] [i_0] [i_7 - 1] [i_7])) : (((/* implicit */int) arr_21 [i_0 + 2] [i_0] [i_3] [i_7 + 2] [i_0])))));
                            arr_25 [i_0] [i_6] [(signed char)12] [i_6] [(unsigned short)1] = ((/* implicit */long long int) ((((/* implicit */int) ((min((arr_11 [i_0]), (((/* implicit */long long int) -630055187)))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_3 + 1] [i_0])) || (((/* implicit */_Bool) arr_10 [i_0]))))))))) != (((/* implicit */int) max((max(((unsigned short)3), ((unsigned short)15))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [(signed char)20] [i_1] [(signed char)20]))))))))));
                            var_25 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(min((((/* implicit */int) var_4)), (var_6))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        arr_28 [i_0] [i_1 - 1] [i_3 - 1] [i_1] = ((/* implicit */int) ((long long int) (~(var_11))));
                        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65520))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 134217727)) < (9223372036854775807LL)));
                        arr_29 [i_0] [i_1] = ((/* implicit */short) ((unsigned char) var_12));
                        var_28 += ((/* implicit */unsigned char) var_0);
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_0] [i_1] [i_0 - 2] [i_1 - 1] [i_3 - 2]))));
                        arr_34 [i_1] [i_1] [i_1 - 1] [i_9] [i_3 - 2] [i_3 - 3] = ((/* implicit */_Bool) arr_9 [i_0] [11]);
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1 - 1] [i_3 - 1] [20])) ? (((arr_5 [i_0] [i_9]) ? (arr_32 [i_0 - 1] [i_0] [i_0] [i_9] [0] [i_0]) : (((/* implicit */int) (unsigned char)226)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_18 [i_0] [i_1])) < (2751541985472041254ULL))))));
                    }
                    for (int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        var_31 = var_7;
                        arr_38 [i_3] [i_3] [i_0] [i_10] = ((/* implicit */signed char) arr_0 [i_3]);
                    }
                }
                /* vectorizable */
                for (signed char i_11 = 1; i_11 < 18; i_11 += 4) 
                {
                    var_32 = ((/* implicit */signed char) ((unsigned char) (short)1023));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_11 - 1])) ? (arr_6 [i_0 + 1] [i_11 - 1]) : (arr_6 [i_0 + 1] [i_11 - 1])));
                    var_34 *= ((/* implicit */signed char) arr_30 [i_0 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_11 + 1]);
                }
                /* LoopSeq 4 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_35 *= (((_Bool)1) ? (((/* implicit */long long int) 4294967295U)) : (-7211055497711129087LL));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_0 + 2] [i_1 - 1])) ? ((-(-1108289500))) : (arr_43 [i_0 + 1] [i_1] [i_1])))) ? (arr_36 [i_0] [i_1 - 1] [i_12] [i_0 - 2]) : (((/* implicit */unsigned long long int) -6080767093165475086LL))));
                                var_37 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(-17)))), (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_1] [i_1] [i_12])) < (arr_15 [i_13] [i_1] [i_1] [i_13]))))))));
                                var_38 = ((/* implicit */unsigned long long int) var_7);
                                arr_51 [i_0] [i_1] [i_12] [3LL] [i_1] [i_0] [i_13] = ((/* implicit */signed char) arr_10 [i_0]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                {
                    var_39 = ((_Bool) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_4 [i_0]))));
                    var_40 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) & (-6337346825570902392LL)));
                    var_41 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0 + 1] [i_1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)21]))) : (5636970637219763471LL)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (679583977));
                }
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_16] [i_16]))));
                    var_43 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_14 [(unsigned short)8] [i_1 - 1] [i_16] [i_0]))))) / (arr_45 [i_0] [i_0] [i_16])));
                }
                for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned int) max((-2012935708), (((/* implicit */int) (_Bool)1))));
                                arr_65 [i_18] [i_18] [i_18] [i_18] [i_19] [i_18] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_8)), (arr_1 [i_0 + 1])));
                                arr_66 [(short)21] [i_1] [i_1] [i_17] [i_18] = ((/* implicit */unsigned char) min((var_7), (((((/* implicit */_Bool) arr_35 [i_1 - 1] [3ULL] [i_17] [i_18] [i_19] [i_17])) ? (((/* implicit */int) var_10)) : (arr_35 [i_1 - 1] [i_19] [i_19] [i_17] [i_0] [i_1])))));
                            }
                        } 
                    } 
                    var_45 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9633661966156042083ULL)) ? (-7211055497711129087LL) : (((/* implicit */long long int) 201326592U))));
                    var_46 -= ((/* implicit */unsigned short) min((arr_52 [i_0] [i_1] [i_17] [(unsigned char)18]), (((((/* implicit */_Bool) ((unsigned int) arr_20 [i_0] [i_1 - 1] [20LL] [i_17]))) ? (((/* implicit */unsigned long long int) (+(var_11)))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) 1996657109)) : (8813082107553509537ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 1; i_20 < 19; i_20 += 4) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_47 -= ((((((/* implicit */int) min(((unsigned short)30492), (((/* implicit */unsigned short) (_Bool)1))))) != (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) ((unsigned char) arr_27 [i_1] [i_1] [(unsigned short)20] [i_20] [i_21]))) ? (max((((/* implicit */int) arr_70 [i_17] [(_Bool)1])), (var_6))) : ((~(67108863))))));
                                var_48 = ((/* implicit */unsigned long long int) arr_31 [i_21] [i_20]);
                                arr_72 [i_17] [i_1] [i_17] [i_0] [i_21] = ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (short)-30770))));
                                var_49 -= ((/* implicit */int) arr_59 [(_Bool)1] [17] [i_17] [i_1]);
                                var_50 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_17]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned int) (signed char)81);
}
