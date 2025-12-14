/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147577
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))))))));
                    var_20 *= ((/* implicit */short) ((var_17) ^ ((+(((/* implicit */int) (short)-2068))))));
                    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_4 [i_0] [i_0]))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    arr_11 [i_0] |= ((/* implicit */short) var_7);
                    arr_12 [i_3] [i_3] [i_3] [8] = ((/* implicit */long long int) (-((-(((-749917314) ^ (((/* implicit */int) (short)-32754))))))));
                }
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_9 [i_0] [i_0])) & (arr_1 [i_0] [i_1]))), (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_4])) | (((/* implicit */int) arr_3 [5] [i_1 + 1] [5]))))))) ? ((~(((/* implicit */int) (unsigned short)28672)))) : (((((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned char)121)))) & (((((/* implicit */int) (unsigned short)511)) << (((((/* implicit */int) (signed char)-1)) + (16)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_22 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)4] [i_5]))) ^ (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_4]))))), (((arr_18 [i_0] [(_Bool)1] [i_0] [(signed char)2] [i_4] [i_5]) << (((var_17) + (615606943)))))))));
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_5] [i_1 - 1] = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-32754))) ^ (min((0U), (3891120986U)))))));
                            arr_22 [i_0] [i_5] = (((-((-(((/* implicit */int) arr_4 [i_0] [i_0])))))) ^ (((/* implicit */int) arr_20 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_5] [i_5])));
                            var_23 = ((/* implicit */unsigned int) min(((~(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_5] [i_6]))) / (arr_17 [i_0] [i_4] [i_0] [i_0]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_5])))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((arr_17 [i_0] [i_0] [i_0] [i_6]) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_4] [i_4] [i_4])) ^ (((/* implicit */int) var_7))))))) ^ (((/* implicit */long long int) (+((+(((/* implicit */int) arr_15 [i_5] [i_4] [i_1] [i_0]))))))))))));
                        }
                        for (int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_5))));
                            var_26 ^= ((/* implicit */long long int) ((unsigned char) (signed char)78));
                        }
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) min((arr_17 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (((arr_17 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]) ^ (arr_17 [i_1 + 1] [i_1] [i_1] [i_1 + 1])))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43239)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-1712441757197223951LL))))))) ^ (((/* implicit */int) arr_2 [(unsigned short)1]))));
                            var_29 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), ((-(2732619619U)))));
                            var_30 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_8 [i_0] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_27 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_27 [i_8] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_0] [i_0]))))) ^ (max((((/* implicit */unsigned int) arr_27 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_0] [i_0] [i_0])), (arr_18 [i_0] [i_1 - 1] [i_8] [i_1 - 1] [i_0] [i_5])))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_33 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_1 + 1]))));
                        arr_34 [i_9] [i_1 - 1] [i_0] = ((/* implicit */signed char) (+((+(1562347677U)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 9; i_10 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_4] [(short)7] [i_1 - 1])) ? (((/* implicit */int) arr_35 [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 1] [i_9] [i_4] [i_1 + 1])) : (((/* implicit */int) arr_35 [i_9] [i_10] [i_9] [i_10 - 1] [i_9] [i_9] [i_1 + 1])))))));
                            var_32 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_10 - 1] [i_1] [i_4] [i_9] [i_10] [i_0]))));
                            var_33 = ((/* implicit */int) arr_10 [i_10 + 1] [i_10] [(unsigned short)2]);
                        }
                        for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            arr_40 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) ((_Bool) arr_6 [i_1 + 1] [i_0] [i_11]))), (arr_19 [i_11])));
                            var_34 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_18)) ? (arr_30 [i_0] [i_1 + 1] [i_1 + 1] [(signed char)8] [i_1]) : (((/* implicit */int) var_2)))) ^ (min((arr_32 [i_11] [i_0] [i_0]), (((/* implicit */int) arr_9 [i_11] [i_11])))))) ^ (((/* implicit */int) arr_2 [i_9]))));
                            arr_41 [i_0] [i_1 + 1] [i_4] [i_9] [i_11] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (arr_36 [i_11]))), (((/* implicit */unsigned long long int) ((((long long int) arr_26 [i_4] [i_0])) ^ (((long long int) arr_6 [i_9] [i_0] [i_1 - 1])))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_0] [i_1 + 1] [i_4] [(_Bool)1] [i_13])) ^ (((((/* implicit */int) arr_5 [i_13] [i_0] [i_4] [i_0])) ^ (((/* implicit */int) ((unsigned char) arr_14 [i_13] [i_4] [i_1] [(_Bool)0])))))));
                                var_36 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) ((arr_7 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_12] [i_0])))))))) ? (((((((/* implicit */int) (unsigned char)0)) ^ (-996235725))) ^ ((+(((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_4] [i_12])))))) : (min(((~(arr_32 [i_0] [i_1] [i_1]))), (((/* implicit */int) ((signed char) arr_4 [i_13] [i_0])))))));
                            }
                        } 
                    } 
                }
                for (short i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) min((((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [i_15])), (min((3390277708U), (((/* implicit */unsigned int) (unsigned char)0)))))))));
                                var_38 = ((/* implicit */short) ((signed char) arr_47 [i_0] [i_0] [i_14] [i_15] [i_16] [i_0] [i_16]));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */_Bool) (~(((((((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_1 + 1] [(signed char)3])) ^ (((/* implicit */int) var_5)))) ^ (max((((/* implicit */int) var_16)), (arr_23 [i_0] [i_1 + 1] [i_14])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 1; i_18 < 8; i_18 += 3) 
                        {
                            arr_62 [i_0] [i_0] [i_1] [i_0] [i_14] [i_17] [i_18 - 1] = ((/* implicit */_Bool) (-(((((arr_19 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(unsigned short)7] [i_1] [(unsigned short)7] [i_17] [i_18] [i_17] [i_17]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                            arr_63 [i_0] [i_1] [i_14] [i_17] [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_27 [i_18 - 1] [i_18 - 1] [i_1 - 1] [i_18 - 1] [i_1 - 1] [4] [i_0])) ^ (((/* implicit */int) arr_0 [i_1 - 1] [i_18 + 2])))) ^ (((/* implicit */int) arr_27 [i_17] [i_17] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_0]))));
                            arr_64 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_17 [i_1] [i_14] [i_14] [i_18]);
                            var_40 = ((/* implicit */signed char) min((arr_60 [i_1] [i_14] [i_14] [i_18]), (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_1])), (arr_20 [i_17] [i_18 - 1] [i_1 - 1] [i_14] [i_1 - 1] [i_17])))) ^ (((1085935928) ^ (465895403))))))));
                        }
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (((-((-(((/* implicit */int) arr_35 [i_0] [i_0] [i_14] [i_17] [i_0] [i_0] [i_14])))))) ^ ((~(((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_1 + 1])))))))));
                        var_42 = (-(((((/* implicit */int) (short)-12353)) / (-1747445550))));
                        /* LoopSeq 3 */
                        for (int i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            arr_69 [i_1] [i_1] [i_14] [i_1] |= ((/* implicit */short) max((((/* implicit */long long int) ((signed char) arr_23 [i_1] [i_1 - 1] [i_1 + 1]))), (((((/* implicit */_Bool) ((arr_18 [i_0] [i_0] [i_17] [i_0] [i_0] [i_17]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_14] [i_17] [i_19])))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_19] [i_19] [i_19] [i_19] [0] [i_17]))) ^ (arr_31 [i_0] [i_1] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_68 [i_0] [i_1] [i_14] [i_1 + 1] [i_19])) ^ (((/* implicit */int) arr_56 [i_19] [i_14] [i_0] [i_14] [i_1] [i_0])))))))));
                            arr_70 [i_0] [i_1 + 1] [i_0] [i_14] [i_0] [i_14] = ((arr_67 [i_0] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(var_1)))))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) 
                        {
                            var_43 *= ((/* implicit */short) ((int) arr_3 [i_0] [i_20] [i_1 - 1]));
                            var_44 -= ((/* implicit */long long int) ((_Bool) ((unsigned char) ((signed char) arr_45 [i_0] [i_1 + 1] [i_17] [i_20]))));
                            arr_75 [(unsigned char)1] [i_20] [i_14] [i_0] [i_20] [i_0] = ((/* implicit */unsigned short) (((~(8388544))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 - 1] [i_0])))))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 2) 
                        {
                            var_45 = ((/* implicit */_Bool) (((+(((465895393) ^ (-576125309))))) ^ ((-(((arr_23 [i_1 + 1] [i_14] [(unsigned char)7]) - (var_17)))))));
                            var_46 = ((/* implicit */signed char) (-((+(((/* implicit */int) var_11))))));
                        }
                    }
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_47 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 1] [i_22] [i_22]);
                    arr_82 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_22] [1] [i_22] [i_1 - 1] [i_0]))))) ^ (((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_1 - 1] [i_22]))));
                    var_48 = ((/* implicit */long long int) var_2);
                    var_49 *= ((/* implicit */unsigned long long int) (((~(((var_12) ^ (((/* implicit */long long int) arr_32 [i_0] [i_1] [(signed char)4])))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_22])))))))))));
                }
            }
        } 
    } 
    var_50 = ((/* implicit */unsigned int) (((~(((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned char)121)))))) ^ ((-(var_1)))));
}
