/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104890
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
    var_17 = ((/* implicit */short) (((+(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_3)))))) | (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) var_10)))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */short) (((~(300801890))) >= (((/* implicit */int) ((((/* implicit */unsigned int) var_5)) <= (var_0))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_20 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_21 = arr_9 [i_0] [i_3 + 1] [i_2];
                        var_22 *= ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)504))) % (1894126846U)));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) var_16);
            /* LoopNest 3 */
            for (unsigned int i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_12 [i_4 + 1] [i_4] [(unsigned char)12] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (var_6)))) ? ((-(134217720))) : (((((/* implicit */_Bool) arr_17 [i_0] [10LL] [i_0])) ? (((/* implicit */int) arr_20 [i_1] [i_1] [(signed char)10] [i_1] [i_6 + 3] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1]))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 3; i_9 < 9; i_9 += 3) 
                    {
                        arr_31 [(unsigned short)4] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) min((((/* implicit */int) var_16)), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_14))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */int) (!(((134217710) != (((/* implicit */int) (_Bool)1))))))) % (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)27397)) : (((/* implicit */int) (unsigned char)180)))))))));
                    }
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(max((max((((/* implicit */long long int) var_6)), (var_8))), (((/* implicit */long long int) min((-450093832), (((/* implicit */int) (unsigned char)184)))))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                arr_38 [i_8] [i_10] [i_10] = (unsigned char)205;
                                arr_39 [i_10] [i_7] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((short)-27397), ((short)27391))))));
                                var_28 -= ((/* implicit */short) ((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) arr_23 [i_7] [i_7])) - (13380)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 -= ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned char) var_13)), (((unsigned char) (short)20440)))));
    }
    /* LoopSeq 1 */
    for (long long int i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_13 = 2; i_13 < 21; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (int i_14 = 2; i_14 < 22; i_14 += 3) 
            {
                for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_53 [i_16] [i_13 + 1] [i_14] [i_13 - 1] [i_16] [i_13 - 1] = ((/* implicit */unsigned char) var_13);
                            arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] [i_14] = ((/* implicit */int) var_14);
                            var_30 -= ((/* implicit */unsigned int) (~(var_6)));
                            var_31 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1328281662)), (((((/* implicit */_Bool) arr_47 [i_13] [i_13 - 2] [i_14 - 1] [i_15])) ? (arr_51 [i_13] [i_13 - 2] [22] [i_14] [i_13] [i_16] [i_13]) : (((/* implicit */long long int) var_11))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 23; i_19 += 1) 
                    {
                        {
                            var_32 |= ((/* implicit */short) ((signed char) 0LL));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((signed char) ((unsigned short) 2420136910U))))));
                            var_34 -= ((/* implicit */signed char) (short)-20998);
                            var_35 = ((/* implicit */short) 2315381689727765080LL);
                        }
                    } 
                } 
            } 
            arr_64 [i_12] [i_12] [i_13] = ((/* implicit */long long int) (signed char)-8);
            var_36 ^= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_58 [i_12] [i_13 + 1] [i_13])) | (((/* implicit */int) ((short) (signed char)-64)))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [i_12] [(unsigned char)20] [(short)20] [i_13] [i_12])) != (((/* implicit */int) var_3))))), (min((((/* implicit */unsigned int) (unsigned char)171)), (arr_49 [i_12] [i_12] [13U] [(unsigned char)0] [i_12] [i_12])))))));
            arr_65 [i_12] [(unsigned char)1] [i_12] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_2)), (var_11)));
        }
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
        {
            for (signed char i_21 = 0; i_21 < 23; i_21 += 1) 
            {
                {
                    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)185)) && (((/* implicit */_Bool) 3317027003U)))))));
                    /* LoopNest 2 */
                    for (signed char i_22 = 0; i_22 < 23; i_22 += 4) 
                    {
                        for (signed char i_23 = 0; i_23 < 23; i_23 += 3) 
                        {
                            {
                                arr_77 [i_21] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_51 [i_12] [i_20] [i_21] [i_20] [i_20] [i_20] [i_22]) >= (var_8))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_59 [i_12]))) | (var_8))))));
                                var_38 *= ((/* implicit */short) max((((((/* implicit */_Bool) (short)22351)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (signed char)-126)))), (((/* implicit */int) (unsigned char)255))));
                                arr_78 [i_12] [i_20] [i_20] [i_20] [i_21] [i_23] = ((/* implicit */signed char) arr_43 [(signed char)9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_79 [i_12] = var_11;
    }
    /* LoopNest 2 */
    for (unsigned char i_24 = 1; i_24 < 10; i_24 += 4) 
    {
        for (int i_25 = 0; i_25 < 11; i_25 += 2) 
        {
            {
                arr_85 [i_24] [2U] [i_24 + 1] = ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_33 [i_24] [i_24] [i_24] [i_24])))) : (((/* implicit */int) arr_42 [i_24 + 1] [i_24 + 1])))) << (((min((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) var_7)), (0U))))) - (30662U))));
                /* LoopNest 2 */
                for (unsigned int i_26 = 0; i_26 < 11; i_26 += 4) 
                {
                    for (unsigned int i_27 = 0; i_27 < 11; i_27 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) max((var_8), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_6)), (2472250783U))), ((~(var_1))))))));
                            arr_90 [i_24] [i_24] [i_24 + 1] [i_24 + 1] [(signed char)8] [i_24] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_70 [i_24] [i_24 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_40 = (-(2315381689727765089LL));
}
