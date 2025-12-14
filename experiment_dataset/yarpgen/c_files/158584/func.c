/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158584
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
    var_14 *= ((/* implicit */signed char) ((((_Bool) (-(((/* implicit */int) (unsigned short)44137))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) var_7))));
    var_15 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)22050)) : (((/* implicit */int) (short)-1))))))));
    var_16 -= var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (var_12)));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_0] [i_0] [20] [(unsigned char)9] &= ((/* implicit */unsigned short) (-(-906306739)));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        {
                            arr_13 [(signed char)5] [i_3] [(unsigned short)2] [i_3] [(signed char)5] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) var_7))));
                            arr_14 [i_0] [i_3] [i_4] [(signed char)19] [i_4] = ((/* implicit */long long int) var_8);
                        }
                    } 
                } 
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                var_17 += ((/* implicit */short) var_6);
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) var_5);
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_3 [i_7 + 1] [i_5 + 1])) : (((/* implicit */int) arr_16 [i_1 - 1] [i_7 - 1])))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_7 - 1])) ? (((/* implicit */int) arr_12 [i_6] [i_1 + 1])) : (((/* implicit */int) arr_11 [i_5 + 1] [i_0]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        arr_24 [(short)0] [i_1] [i_5 + 1] [i_6] [i_0] [i_6] |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                        arr_25 [i_5] [i_6] [i_5] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_0] [6U] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5 + 1] [1LL] [i_8 - 2]))) : (var_12)));
                        var_21 *= arr_17 [i_6] [i_8 - 1] [i_1 + 1];
                        arr_26 [i_1] [i_1] [(short)14] [i_6] [(short)14] [i_6] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)21413))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) (unsigned short)44137)))))))));
                    }
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2846016862999036626LL)) ? (1750508964) : (((/* implicit */int) (unsigned short)21387))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)44119))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_4)))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((unsigned int) 18446744073709551609ULL));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)480)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))));
                        var_26 += ((((/* implicit */int) arr_3 [i_5 + 1] [i_1 - 1])) < (((/* implicit */int) arr_3 [i_5 + 1] [i_1 - 1])));
                    }
                }
                for (signed char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    arr_32 [i_10] [i_0] [i_0] [i_1] [i_5 + 1] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (var_5)));
                    var_27 = ((/* implicit */unsigned int) arr_9 [i_1 - 2] [i_5 + 1]);
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (((((/* implicit */_Bool) var_5)) ? (arr_18 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [5LL] [i_11 + 1]))))))))));
                        arr_36 [i_10] [i_1] [i_1] [i_10] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2]))) % ((-(var_11)))));
                    }
                }
                var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_5 + 1] [i_1 - 2] [20] [i_1 - 2] [i_1 - 1] [i_5 + 1])) ? (arr_28 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_0]))));
                arr_37 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5899482018485280982LL)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)21409))));
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_13 = 2; i_13 < 19; i_13 += 2) /* same iter space */
                {
                    arr_44 [i_12] [i_13 + 2] [i_12] = ((/* implicit */unsigned int) ((unsigned short) (short)-26256));
                    var_31 = ((/* implicit */unsigned char) var_13);
                }
                for (unsigned short i_14 = 2; i_14 < 19; i_14 += 2) /* same iter space */
                {
                    arr_47 [i_14] [10ULL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_27 [i_14] [3LL] [i_14 - 1] [i_14 - 1] [3LL] [i_14 + 2] [i_14 + 1]) : (arr_27 [i_0] [i_14 - 1] [i_1 + 1] [i_14 - 1] [i_0] [i_12] [(_Bool)1])));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_1 - 2] [i_1 - 2] [i_14 - 2] [3])) ? ((-(((/* implicit */int) (unsigned short)21416)))) : ((-(((/* implicit */int) (unsigned short)20706)))))))));
                }
                var_33 = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) var_13))));
                arr_48 [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)44109))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((((/* implicit */_Bool) 152732117U)) || (((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) arr_9 [i_1] [i_1 - 2])) : (((/* implicit */int) ((_Bool) arr_42 [i_0] [i_1] [i_12] [i_15]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        var_35 = ((/* implicit */int) var_3);
                        var_36 = ((/* implicit */unsigned short) var_1);
                    }
                    arr_54 [i_12] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) arr_45 [i_1] [i_12] [i_15]));
                }
            }
            for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 3) 
            {
                arr_58 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)2576)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44141))));
                arr_59 [i_0] [i_1] [i_17 + 1] = ((/* implicit */short) (-(((/* implicit */int) arr_39 [i_1 - 1] [i_1]))));
            }
            var_37 += ((/* implicit */_Bool) 9223372036854775680LL);
            var_38 *= ((/* implicit */unsigned int) arr_16 [i_0] [i_1]);
            var_39 &= ((/* implicit */long long int) ((arr_19 [i_0] [i_0] [i_0] [(signed char)8] [i_1]) ? (arr_35 [i_0] [i_0] [i_1 + 1] [i_0] [(short)0] [i_0] [(short)0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)1786)))))));
        }
    }
}
