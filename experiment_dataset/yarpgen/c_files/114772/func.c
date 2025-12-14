/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114772
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) (short)4439);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_12 = ((_Bool) arr_6 [i_0] [(unsigned char)17] [i_1 + 1]);
                    var_13 = ((/* implicit */signed char) (!(arr_5 [i_1] [i_1 + 2] [i_1])));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_0] [i_0] [(_Bool)1] &= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) var_5)), (1231563492U))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_4])) ? (((/* implicit */int) arr_10 [(unsigned char)12] [i_4])) : (((/* implicit */int) arr_16 [0U] [i_3 - 1]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32767))));
                        arr_17 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) var_8);
                        arr_18 [16U] [i_1] [i_1 + 2] [i_1] [(signed char)6] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_5 [i_1 - 3] [i_3] [i_1]))))));
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        arr_22 [i_1] = ((/* implicit */signed char) var_1);
                        arr_23 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_1] [i_1])) >= ((-(((/* implicit */int) (_Bool)1))))));
                        var_15 = ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_3] [i_1] [17U]))) & (min((((/* implicit */unsigned int) (unsigned char)255)), (var_4))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_3 - 1] [i_5])) : (((/* implicit */int) var_5))))) + (max((2715719564U), (2292504796U))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))) == (var_10))))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((((/* implicit */_Bool) arr_15 [i_1 - 3] [i_3 - 1])) ? (min((((/* implicit */unsigned int) arr_5 [i_0] [i_6] [(signed char)10])), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)4)) + ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_6] [i_1 - 2]))))))))))));
                        var_18 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */signed char) var_5)), ((signed char)-4)))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_1] [(signed char)4])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_7 [17U] [i_8 - 1] [i_0])), (var_1)))) ? (((/* implicit */int) min(((signed char)-27), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))))) : (max((((1433669294U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))))), ((-(var_7))))));
                                var_21 += ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)170))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [(short)4] [i_1] [i_8 - 1]))) : (arr_30 [i_0] [i_1] [i_7] [i_8] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_7] [i_9]))))) & (((((/* implicit */_Bool) (+(arr_2 [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 17; i_11 += 2) 
                        {
                            {
                                arr_41 [i_0] [i_1] [i_7] [i_7] [i_11 - 1] [i_0] [i_7] = ((/* implicit */signed char) min(((short)-13786), (((/* implicit */short) (_Bool)1))));
                                arr_42 [i_0] [i_11] [i_7] [i_7] [i_11 + 1] &= ((/* implicit */_Bool) (signed char)27);
                                var_22 = (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_1))))))));
                                arr_43 [i_0] [i_11] [i_7] [i_1] [i_1 + 2] [i_11 + 1] = arr_30 [i_0] [i_0] [i_0] [i_0] [i_0];
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((max((((/* implicit */unsigned int) (signed char)-28)), (arr_40 [i_10] [8U] [i_1 + 2] [i_10] [i_11] [i_11]))) | (arr_39 [i_0] [i_1] [i_7] [i_10] [i_7] [i_11] [i_11])))));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */short) ((unsigned int) min((arr_3 [i_1 - 3] [i_1 - 3]), (var_5))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1158166538U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) ((((/* implicit */int) arr_27 [i_1] [i_1 - 1] [i_7])) != (((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-22349), (((/* implicit */short) var_3)))))) | (min((((/* implicit */unsigned int) (unsigned char)247)), (var_4)))))));
                    arr_44 [i_1 - 1] [i_1 + 1] [i_1] [i_7] = ((/* implicit */unsigned int) (!((((_Bool)1) || ((_Bool)1)))));
                }
                arr_45 [(signed char)16] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U))), (((((/* implicit */_Bool) (short)-21873)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))) : (var_6)))))) ? (((min((((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_1 - 1] [i_1 - 1])), (arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [(signed char)14] [18U])) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [(_Bool)1])))) - (46))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_7);
}
