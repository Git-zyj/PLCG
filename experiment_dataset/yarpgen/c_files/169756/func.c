/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169756
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
    var_10 = ((/* implicit */unsigned int) (_Bool)1);
    var_11 -= ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0 + 1]))));
                        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)251))))));
                        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
                        arr_9 [i_0] [13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_0] [i_0] [i_0]))) * (((/* implicit */int) arr_3 [i_1 - 1] [i_0]))));
                        arr_10 [i_0] [20LL] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [17LL] [17LL] [i_3] [i_2])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        var_15 ^= ((/* implicit */signed char) (+(-636004055)));
                        var_16 += ((/* implicit */unsigned long long int) ((arr_3 [i_1 - 1] [(signed char)18]) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (unsigned short)60190))));
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            arr_15 [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                            arr_16 [i_0] [(short)7] [i_2] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                            arr_17 [i_0] = ((/* implicit */signed char) arr_0 [i_4 + 1] [i_5]);
                            arr_18 [i_5] [i_4] [0ULL] [i_0] [4] [i_0] [0U] = (+(arr_5 [i_4 + 1] [i_1 - 1] [i_0 + 1]));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_17 &= arr_4 [i_6];
                            var_18 = ((/* implicit */short) (_Bool)0);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
                            arr_23 [i_0 - 1] [i_1 - 1] [i_0 - 1] [(_Bool)1] [i_0] [i_2] [(short)11] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [(unsigned char)3] [(unsigned char)3] [(unsigned char)3]);
                            arr_24 [(_Bool)1] [(_Bool)1] [9LL] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 2]))));
                            arr_25 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_2 [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))));
                        }
                        for (long long int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            arr_29 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0] [i_0]))));
                            arr_30 [i_0] [(short)5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            arr_33 [i_0 - 1] [i_0 - 1] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28177)) ? (((/* implicit */unsigned long long int) 1600710985U)) : (arr_27 [i_4 - 1] [1LL] [i_0] [i_4 - 1] [16ULL] [i_4] [i_4 + 1])));
                            var_20 = ((/* implicit */short) (+(2178312604U)));
                            arr_34 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-(arr_22 [i_9] [i_4 + 1] [5ULL] [i_1] [i_0])));
                            arr_35 [i_0] = ((/* implicit */_Bool) (+(arr_4 [i_4 + 2])));
                            var_21 = (-(((/* implicit */int) var_5)));
                        }
                    }
                    for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) var_2);
                        arr_38 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (!(var_6)))) : (((/* implicit */int) (_Bool)1))));
                    }
                    arr_39 [i_0] = ((/* implicit */unsigned long long int) (~(983422596U)));
                    arr_40 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((-((~(((/* implicit */int) var_1)))))) + (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) (_Bool)1))))))));
                    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)23))))), (var_4)));
                }
                /* vectorizable */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    arr_43 [i_0] [i_1] [i_0] [i_0 - 1] = ((((/* implicit */int) arr_21 [i_0] [i_1] [(_Bool)1] [i_0 + 1] [(short)7] [i_11 - 1] [i_1 - 1])) ^ (-1358020837));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        for (signed char i_13 = 4; i_13 < 18; i_13 += 2) 
                        {
                            {
                                arr_51 [20] [20] [(signed char)14] [(short)16] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_12] [18] [i_0] [i_12] [(signed char)8] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_22 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_13 - 4])));
                                var_24 = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_14 = 1; i_14 < 20; i_14 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_3))));
                    var_26 = ((/* implicit */unsigned char) arr_11 [i_0 - 1] [i_0] [i_1 - 1] [i_14] [i_14 + 1]);
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                }
                /* vectorizable */
                for (unsigned char i_15 = 3; i_15 < 20; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        for (short i_17 = 4; i_17 < 20; i_17 += 2) 
                        {
                            {
                                arr_61 [i_0] [(short)11] [i_0] [i_0] [i_0] = ((/* implicit */short) (!((_Bool)1)));
                                arr_62 [i_17 + 1] [i_15] [i_0] [i_16] [i_16] [16U] [i_1] = ((/* implicit */_Bool) arr_5 [10U] [i_16] [(signed char)18]);
                                arr_63 [i_0] [(unsigned short)20] [8LL] [i_16] [i_0] = (~(((/* implicit */int) arr_58 [i_17 - 4] [2U] [i_0 - 1] [i_16])));
                            }
                        } 
                    } 
                    arr_64 [i_0] [i_0] [i_1] = ((/* implicit */int) (-(4399749938741046402ULL)));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-110)))))));
                }
                var_29 = ((/* implicit */short) (~(min((arr_42 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_50 [i_1 - 1] [(signed char)14] [i_1 - 1] [i_0 - 1]))))));
            }
        } 
    } 
}
