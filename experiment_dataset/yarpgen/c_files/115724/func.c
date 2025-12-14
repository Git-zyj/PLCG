/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115724
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((unsigned int) var_6)))));
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((~(1919268053))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 70368743653376LL)) / (18440683178473293258ULL)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (short)31744);
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])) & (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) << (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [(_Bool)1]))))));
                            var_23 = ((/* implicit */short) arr_6 [i_1] [i_1] [i_3 - 1] [i_3 - 1]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) arr_6 [i_1] [(unsigned short)4] [i_4 + 2] [(unsigned short)4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_25 = (-(((/* implicit */int) var_16)));
                                var_26 = ((/* implicit */unsigned int) min((max(((+(arr_6 [i_1] [i_1] [(short)1] [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) var_16)))), (((/* implicit */int) arr_11 [18U])))))));
                                arr_20 [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */signed char) max((((arr_9 [i_1]) - (arr_9 [i_1]))), (((/* implicit */unsigned long long int) arr_0 [i_4]))));
                                arr_21 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_14 [i_0] [(signed char)13] [i_4] [i_4] [i_4] [i_6]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_15)), (min((arr_11 [i_1]), (((/* implicit */unsigned short) (short)21884))))));
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-31744)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_29 &= ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4] [i_7 - 3]);
                                var_30 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_14 [i_8] [i_1] [i_1] [i_1] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [10LL] [i_0] [i_7 - 1]))) : (arr_19 [i_4 + 2] [i_4] [i_0] [i_0] [i_0] [i_7 + 1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65504))) - (arr_6 [i_0] [i_7 - 2] [i_4 + 1] [i_0]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_34 [(signed char)12] [i_1] = ((/* implicit */short) arr_26 [i_0] [11] [(_Bool)1] [11] [i_10]);
                        var_32 = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_10] [i_9] [i_9] [i_1] [i_0]))));
                    }
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 2; i_12 < 17; i_12 += 2) 
                        {
                            var_33 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_16 [i_11] [i_12 + 1] [i_12 + 1] [i_11] [i_12])) & (((/* implicit */int) ((short) 1514407952911710161LL)))))));
                            var_34 ^= ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_23 [i_9])))) == (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) arr_40 [i_0] [i_1] [i_9] [12LL] [i_12] [i_0])))) : ((+(((/* implicit */int) arr_16 [i_0] [(short)2] [(short)2] [(short)2] [i_12]))))))));
                            var_35 &= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_24 [i_0] [i_12] [i_12] [i_11] [i_12 + 1] [i_9] [i_9])) ? (arr_32 [2LL] [i_12] [2LL] [2LL] [i_12 + 2] [(short)10]) : (arr_24 [i_0] [i_1] [i_1] [i_11] [i_12 - 1] [i_12 - 1] [i_12 - 1])))));
                            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (-(14189016748962694608ULL))))));
                            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (((+((~(var_10))))) == (max((((/* implicit */long long int) var_12)), (arr_31 [i_12] [i_0] [(unsigned char)6] [i_0] [i_0]))))))));
                        }
                        arr_41 [i_0] [i_1] [i_0] [(_Bool)1] = (~(1892179966));
                        /* LoopSeq 1 */
                        for (int i_13 = 4; i_13 < 18; i_13 += 1) 
                        {
                            var_38 = ((/* implicit */signed char) (+(var_13)));
                            var_39 += arr_28 [i_0] [i_0];
                            var_40 = ((/* implicit */signed char) arr_39 [5ULL] [i_1] [5ULL]);
                        }
                        var_41 |= ((/* implicit */short) ((((/* implicit */_Bool) 1514407952911710161LL)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (unsigned short)48185))));
                    }
                    /* LoopSeq 1 */
                    for (short i_14 = 1; i_14 < 18; i_14 += 4) 
                    {
                        var_42 *= ((/* implicit */_Bool) (signed char)-90);
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) arr_23 [i_0]))));
                            arr_50 [i_1] [i_1] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_15] [i_14] [i_1] [2U] [i_1] [i_0]))) % (min((6060895236258348ULL), (arr_9 [i_1])))))) || (((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_14 - 1] [i_14 - 1] [(_Bool)0] [i_14]))));
                        }
                        arr_51 [i_0] [4U] [i_9] [i_1] [4U] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_24 [i_9] [(_Bool)1] [i_14 + 1] [i_14] [i_14] [i_14 + 1] [i_14 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 1) 
                        {
                            {
                                var_44 |= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-2))));
                                var_45 = ((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_9] [i_16]);
                                var_46 = ((/* implicit */short) (!(((/* implicit */_Bool) -1514407952911710161LL))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_47 = var_5;
    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) var_6))));
}
