/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114832
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)-27772)) ? (((/* implicit */int) (unsigned short)34366)) : (((/* implicit */int) (unsigned short)50606))))))), (((unsigned int) 1809226415))));
    var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */short) arr_1 [i_2 - 1]);
                                arr_13 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_3 [i_2 - 1])))), (((((/* implicit */int) arr_3 [i_2 - 1])) + (((/* implicit */int) arr_3 [i_2 - 2]))))));
                                var_14 = ((/* implicit */_Bool) (short)-24654);
                                var_15 = ((/* implicit */long long int) -79068269);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_16 = (~(((/* implicit */int) (signed char)-101)));
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_17 *= ((/* implicit */unsigned long long int) (-(((((((/* implicit */int) (unsigned char)167)) - (((/* implicit */int) (unsigned char)149)))) / (1923820189)))));
                            arr_19 [i_2] = ((/* implicit */unsigned short) (signed char)101);
                            var_18 = ((/* implicit */int) max(((unsigned char)167), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9)))))));
                            arr_20 [i_0] [i_2] [i_2] [i_5] [i_6] = ((unsigned char) (!(arr_17 [i_5] [i_2 - 3] [i_2 - 2] [i_2] [i_2 - 4])));
                        }
                        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_2 [i_5] [i_0]))));
                            arr_23 [i_2] [i_5] [i_7] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) arr_14 [i_5] [i_0]);
                            arr_24 [i_7] [i_2] [i_2] [i_2] [15U] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) max((((/* implicit */short) var_6)), ((short)-30408)))))));
                            var_20 = ((/* implicit */short) max(((_Bool)1), ((!(((/* implicit */_Bool) ((-1923820162) & (((/* implicit */int) (short)-22951)))))))));
                            var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) (short)6294)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) : (1041805060U)));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_28 [i_2] [i_2] = ((/* implicit */signed char) (short)6294);
                            arr_29 [i_0] [i_0] [i_2] [i_8] [i_8] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_10 [5] [i_2] [i_2] [i_2 - 4])) | (((/* implicit */int) (unsigned char)107))));
                        }
                        for (unsigned int i_9 = 3; i_9 < 22; i_9 += 2) 
                        {
                            arr_32 [i_0] [i_0] [i_2 - 1] |= ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_33 [i_2] [i_1] [i_5] [i_9] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7676896648492637422ULL)) ? (((/* implicit */int) arr_15 [i_2] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)241))))) : (6532290684155023487LL))));
                        }
                        arr_34 [i_2] [i_1] [i_2 - 2] [i_0] = ((/* implicit */unsigned short) min((((((var_0) != (var_5))) ? (var_5) : (var_1))), (((/* implicit */int) (unsigned char)254))));
                        arr_35 [i_0] [i_1] [i_1] [i_0] [i_0] [i_5] &= ((/* implicit */int) (_Bool)1);
                        arr_36 [i_0] [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) var_9);
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_39 [i_0] [i_2 - 2] [i_10 - 1] |= ((/* implicit */int) (_Bool)1);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_10 - 1]))))) > (((long long int) arr_1 [i_0])))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(2134239948U))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) ((((arr_3 [i_2 - 4]) ? (((/* implicit */int) arr_3 [i_2 - 4])) : (((/* implicit */int) arr_3 [i_2 - 3])))) / (((((/* implicit */_Bool) 8028525203852419800LL)) ? (((arr_38 [i_0] [i_1] [i_2] [(signed char)10]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (min((((/* implicit */int) (_Bool)0)), (763607293)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */short) (-(var_7)));
                            arr_45 [8ULL] [i_2] [i_2 - 4] [(_Bool)1] [i_12] = ((/* implicit */short) var_10);
                        }
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) var_4);
                            var_27 *= ((/* implicit */short) arr_25 [i_0] [(signed char)20] [(unsigned char)22] [i_11] [i_0]);
                            arr_48 [i_13] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) 1979916232))))) < (min((567453553048682496LL), (((/* implicit */long long int) 2604412252U)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_14 = 1; i_14 < 23; i_14 += 4) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), ((-(((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 2] [i_2 + 1]))))));
                            arr_51 [i_14] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) arr_12 [i_0]);
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (signed char)-93))));
                            var_30 = arr_40 [i_0] [i_1] [i_2 - 4] [i_2] [i_14] [i_11];
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 3; i_15 < 22; i_15 += 1) 
                    {
                        for (int i_16 = 2; i_16 < 23; i_16 += 2) 
                        {
                            {
                                arr_56 [i_2] [i_15] [i_2] [i_2] [(signed char)18] [i_1] [i_2] = ((/* implicit */unsigned char) var_6);
                                arr_57 [i_2] [i_15] = ((78596916U) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((short) (unsigned char)167))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_18 [i_0] [i_1] [i_1] [i_2] [i_2]))) ? (((var_1) ^ (((/* implicit */int) (unsigned char)0)))) : (2085298488))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 2; i_18 < 23; i_18 += 4) 
                        {
                            {
                                arr_65 [i_18 - 2] [i_1] [i_2 - 1] [i_2] [i_18 - 1] [1] [5U] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_25 [i_2] [i_2 - 3] [i_2 - 1] [(_Bool)1] [i_2])), ((-(arr_63 [i_2] [i_17] [i_2] [i_1] [i_2]))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_2] [i_2] [i_1] [i_0]))) : (var_8))), (((/* implicit */long long int) arr_30 [(unsigned char)15])))))));
                                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (-(1350958882063982578LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
