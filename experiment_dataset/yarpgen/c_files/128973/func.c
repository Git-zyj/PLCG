/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128973
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
    var_13 *= ((/* implicit */unsigned short) ((int) var_5));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) && (((/* implicit */_Bool) arr_0 [i_1 - 1]))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_10))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            arr_12 [i_0] [6LL] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)2]);
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-55)) + (298153501)));
                        }
                        for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_17 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)57344))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)8246)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((arr_0 [i_1 + 1]) % (arr_0 [i_1 - 1])));
                            var_20 = ((((/* implicit */_Bool) arr_15 [i_0] [i_1 - 1] [i_2] [i_1 + 1] [i_1 + 1] [i_3] [i_1])) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_1 + 1] [i_6] [i_1 + 1] [i_3])) : (((/* implicit */int) arr_15 [i_0] [i_6] [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 3; i_7 < 12; i_7 += 3) 
                        {
                            var_21 &= ((unsigned int) var_1);
                            var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_7 - 3] [i_7] [i_1 + 1] [i_3])) ? (((/* implicit */int) arr_5 [i_7 - 1] [i_1] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_5 [i_7 - 1] [i_1] [i_1 + 1] [i_3]))));
                            var_23 -= ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 10; i_8 += 3) 
                        {
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17340)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */signed char) (unsigned short)49401);
                        }
                        arr_21 [i_0] [i_1] [(short)8] [i_3] [i_0] [i_0] &= ((/* implicit */signed char) arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3] [i_0]);
                        var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17329))))));
                        var_27 = ((/* implicit */unsigned short) arr_3 [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) (-(arr_1 [i_1 + 1])));
                        arr_25 [i_0] [i_1 + 1] [i_1] [i_2] [i_9] = ((/* implicit */_Bool) arr_2 [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        var_29 -= ((arr_20 [i_1] [i_1 + 1] [i_10] [(short)12] [i_1 + 1]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                        arr_28 [(unsigned char)4] [i_2] |= ((/* implicit */unsigned short) 14720868274957845563ULL);
                    }
                }
                var_30 -= ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned char) ((long long int) arr_2 [i_1]));
                            /* LoopSeq 4 */
                            for (unsigned short i_13 = 1; i_13 < 12; i_13 += 4) 
                            {
                                var_32 = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_13 + 2] [i_13 + 1] [i_1 + 1] [i_12] [i_13] [i_12])), (((unsigned short) var_4))))), (arr_33 [i_1] [i_1] [i_1] [i_12] [i_13])));
                                var_33 *= ((/* implicit */short) min((670236564641205671ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                                var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_13] [i_13] [i_13 + 1] [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */int) arr_23 [i_1 - 1] [i_11] [i_13 - 1] [i_13 + 2] [i_13] [i_13])) : (((/* implicit */int) max((((/* implicit */short) arr_20 [i_13] [i_13 - 1] [i_13 - 1] [i_1 - 1] [i_1 + 1])), (arr_31 [i_1] [i_12] [i_1] [i_1] [i_1 - 1]))))));
                            }
                            /* vectorizable */
                            for (signed char i_14 = 2; i_14 < 10; i_14 += 2) /* same iter space */
                            {
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_24 [i_14] [i_14 + 3] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_14])) : (((/* implicit */int) arr_31 [i_14 + 2] [i_1] [i_11] [i_1] [i_11]))));
                                arr_37 [i_1] [i_0] = ((/* implicit */unsigned int) arr_18 [i_11] [i_1]);
                                arr_38 [i_14] [i_14] &= ((/* implicit */short) ((unsigned short) arr_9 [i_12] [i_1] [i_14 + 1] [i_12] [i_1] [i_1 - 1]));
                                var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_1]))));
                                var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1]))));
                            }
                            for (signed char i_15 = 2; i_15 < 10; i_15 += 2) /* same iter space */
                            {
                                var_38 *= ((/* implicit */unsigned int) ((long long int) max((((/* implicit */long long int) arr_24 [i_0] [i_0] [i_1] [i_11] [i_12] [i_15])), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [(unsigned char)0] [i_11] [i_12] [i_15]))) : (var_3))))));
                                var_39 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_13 [i_0] [i_0] [i_15 + 3] [i_12] [i_0])))), (((/* implicit */int) (_Bool)1))));
                                var_40 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((arr_22 [i_0] [i_1 + 1] [i_15 + 4] [i_1 + 1]), (((/* implicit */unsigned char) (_Bool)1))))) : ((-(var_5))));
                                var_41 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((signed char) arr_27 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_12])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)4] [i_1] [i_1 - 1] [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_3) : (((/* implicit */long long int) (-(var_2)))))));
                                arr_41 [i_1] [i_1 - 1] [i_1 - 1] [i_12] [i_15 + 3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_12])) ? (arr_0 [i_12]) : (arr_0 [i_0])))));
                            }
                            /* vectorizable */
                            for (short i_16 = 0; i_16 < 14; i_16 += 2) 
                            {
                                var_42 *= ((/* implicit */unsigned long long int) ((unsigned int) arr_24 [i_0] [i_1] [i_11] [i_12] [i_12] [i_16]));
                                var_43 *= ((/* implicit */unsigned short) ((unsigned int) (unsigned short)17342));
                                var_44 = ((/* implicit */long long int) ((unsigned short) var_5));
                                var_45 = ((/* implicit */unsigned char) arr_30 [i_0] [i_11] [i_11] [i_0]);
                                var_46 = ((/* implicit */_Bool) arr_5 [i_16] [i_11] [i_1] [i_0]);
                            }
                            arr_44 [i_0] [i_1] [i_11] [i_1] = ((/* implicit */_Bool) (-(((((unsigned int) var_12)) - (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_11] [i_12])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned int) var_12);
}
