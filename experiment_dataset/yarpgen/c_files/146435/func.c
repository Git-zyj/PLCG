/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146435
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) (-(1981463142U))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_13 = ((/* implicit */short) min((var_4), (((/* implicit */unsigned int) (signed char)0))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_1])) > (((/* implicit */int) (short)-22095)))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) / (((((/* implicit */_Bool) max((arr_0 [i_1] [i_2]), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22095))) : (4991306921958091960LL)))) : (min((((/* implicit */unsigned long long int) var_7)), (0ULL)))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [11LL] [i_4] [i_5] [i_5] = ((/* implicit */long long int) (signed char)-15);
                                arr_16 [i_0] [i_1] [i_1] [(short)8] [i_4] [i_4] [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_5]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-7))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [5LL]))))));
                }
                for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) ((arr_7 [i_0] [i_0] [i_1] [i_6]) ? (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_1] [i_1] [i_6 + 1])), (arr_6 [i_0] [i_1] [i_6 + 2]))))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1]), (((/* implicit */unsigned short) arr_7 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1]))))))));
                    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) arr_10 [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 + 1]))))) ? ((-(((/* implicit */int) arr_8 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1])))) : (((/* implicit */int) max((arr_10 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 2]), (arr_10 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1]))))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    arr_23 [(_Bool)1] [i_7] [i_7] = ((/* implicit */long long int) (unsigned char)136);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_1] [i_7] [i_8] [i_9])) & (((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [(_Bool)1]))));
                                var_19 += ((/* implicit */long long int) ((unsigned int) (signed char)0));
                            }
                        } 
                    } 
                    arr_28 [i_0] [(signed char)8] [i_7] [i_7] = ((/* implicit */_Bool) (signed char)-7);
                    arr_29 [i_0] [i_1] [i_7] [i_7] = (+(((/* implicit */int) var_10)));
                }
                var_20 -= ((/* implicit */unsigned int) ((long long int) ((min((var_11), (((/* implicit */long long int) var_3)))) / (max((var_9), (((/* implicit */long long int) var_1)))))));
                /* LoopNest 3 */
                for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            {
                                arr_38 [(signed char)2] [i_1] [(unsigned char)12] [1U] [i_12] = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */short) var_3)), (arr_6 [i_0] [i_10] [i_12])))) << ((((((~(((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_12])))) + (11215))) - (20))))) << (((/* implicit */int) min((arr_7 [i_0] [i_10] [i_11] [i_12]), (((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (signed char)-1)))))))));
                                arr_39 [i_0] [i_1] [i_10] [i_11] [i_12] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))));
                                arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_12);
                                var_21 = ((/* implicit */int) min((var_21), (var_8)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_13 = 3; i_13 < 12; i_13 += 3) 
                {
                    for (unsigned char i_14 = 1; i_14 < 14; i_14 += 4) 
                    {
                        for (int i_15 = 1; i_15 < 13; i_15 += 3) 
                        {
                            {
                                arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_1);
                                arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_37 [i_0] [i_0] [i_0] [i_13 + 1] [i_15 - 1] [i_15] [i_15 + 2]), (arr_37 [(signed char)7] [i_13 - 3] [(_Bool)1] [i_13 - 3] [i_13 - 3] [i_15] [i_15])))) <= (((/* implicit */int) max((((/* implicit */unsigned short) arr_37 [i_1] [i_1] [i_1] [i_13 - 1] [i_1] [i_13] [i_15 + 2])), (arr_21 [i_0] [(unsigned char)14] [i_13] [i_13 - 2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 13; i_16 += 3) 
    {
        for (long long int i_17 = 2; i_17 < 12; i_17 += 3) 
        {
            for (int i_18 = 4; i_18 < 11; i_18 += 3) 
            {
                {
                    arr_61 [i_16] [i_16] [(_Bool)0] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24119))) : (-8095224282333506742LL)));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        arr_65 [i_16] [i_16] [i_16] [i_16] = ((unsigned short) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) arr_21 [i_17 - 2] [i_18 - 2] [i_18 - 4] [i_18]))));
                        arr_66 [11] [i_16] [i_19 - 1] = ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) arr_31 [i_16] [i_17 + 1] [i_18 + 2])), (arr_13 [i_16] [(unsigned char)12] [i_17 - 2] [i_18] [i_19]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)133)), (var_9)))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_17 + 1] [i_17 - 2] [i_17] [i_18 - 4])) ? (3005935608U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_17 + 1] [i_17 - 2] [i_17 + 1] [i_18 - 4])))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_18])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_3))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_17 + 1])) : (((/* implicit */int) (unsigned short)29328))));
                        arr_71 [i_16] [i_17 - 1] [i_18 - 2] [i_20 - 1] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_17 - 1] [i_18 - 2]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_21 = 0; i_21 < 12; i_21 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) min((0), (((/* implicit */int) arr_75 [i_21]))))), (((long long int) arr_35 [i_21])))), (((((/* implicit */_Bool) arr_55 [i_21] [i_21])) ? (var_7) : (arr_55 [i_21] [i_21])))));
        arr_76 [i_21] = ((/* implicit */int) (signed char)9);
        arr_77 [i_21] = ((/* implicit */unsigned char) arr_69 [i_21] [i_21] [i_21]);
        var_26 = ((/* implicit */signed char) arr_36 [(unsigned char)14] [i_21] [i_21] [i_21] [i_21] [i_21]);
    }
    for (unsigned int i_22 = 2; i_22 < 19; i_22 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-83))));
        /* LoopNest 2 */
        for (signed char i_23 = 0; i_23 < 21; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) arr_83 [i_22] [i_22 + 1]);
                    var_29 = ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_1))))))) ? ((~(((/* implicit */int) arr_78 [i_22])))) : (((/* implicit */int) (signed char)-8)));
                    var_30 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) (signed char)7)) ? (-64942395) : (((/* implicit */int) (unsigned char)139)))), (arr_83 [i_22] [i_22 + 2])))));
                    arr_84 [i_23] [i_24] = ((/* implicit */short) ((arr_78 [i_22]) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))), (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_79 [i_22 - 2])) ? (((((/* implicit */_Bool) arr_81 [i_23])) ? (var_4) : (2493829808U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1762298367)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)107)))))))));
                }
            } 
        } 
        arr_85 [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_80 [i_22 + 1])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-13))))) : (arr_80 [(unsigned short)11])));
    }
}
