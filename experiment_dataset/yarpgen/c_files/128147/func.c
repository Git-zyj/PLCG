/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128147
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */int) (unsigned short)24376);
            var_10 = ((/* implicit */signed char) (unsigned short)24387);
        }
        for (unsigned char i_2 = 3; i_2 < 7; i_2 += 2) /* same iter space */
        {
            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min((max((((/* implicit */long long int) (unsigned short)41154)), (arr_2 [0LL] [i_0] [0LL]))), (((/* implicit */long long int) ((arr_3 [i_2 + 2] [1LL]) == (arr_3 [i_2 + 2] [i_2])))))))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((arr_2 [i_0] [i_2 + 2] [i_2 - 1]), (((/* implicit */long long int) (signed char)-126)))), (max((arr_2 [i_0] [i_2 + 2] [i_2 - 1]), (arr_2 [i_0] [i_2 + 2] [i_2 - 1])))));
        }
        for (unsigned char i_3 = 3; i_3 < 7; i_3 += 2) /* same iter space */
        {
            arr_14 [i_0] = ((/* implicit */unsigned char) (unsigned short)24382);
            var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_4 [i_3 + 1] [i_3]) ? (((/* implicit */int) arr_7 [i_0] [i_3 - 1] [i_3])) : (((/* implicit */int) (unsigned short)41163))))), (min((arr_9 [i_3] [i_3 - 3]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_3 + 1]))))));
            arr_15 [i_0] = ((/* implicit */unsigned long long int) 131064U);
            arr_16 [9U] [i_0] [i_3] = ((/* implicit */unsigned char) arr_12 [i_0] [(signed char)4]);
        }
        for (unsigned char i_4 = 3; i_4 < 7; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                var_13 = ((/* implicit */short) var_3);
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_14 *= ((/* implicit */_Bool) min((min((arr_12 [i_4 + 1] [i_4 - 1]), (arr_12 [i_4 + 1] [i_4 - 3]))), (var_3)));
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_13 [i_5]))))), (((((/* implicit */_Bool) (unsigned short)24392)) ? (-683028141) : (((/* implicit */int) (unsigned short)41185))))))), (((long long int) arr_24 [i_4 + 2]))));
                    var_16 = ((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [i_0] [6LL]);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                    var_18 = ((/* implicit */unsigned char) (_Bool)1);
                    var_19 ^= ((/* implicit */unsigned short) ((min((((/* implicit */int) (short)-15)), ((~(474322299))))) * (((/* implicit */int) arr_18 [2]))));
                }
            }
            for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_20 |= ((/* implicit */unsigned long long int) min((min((3037887727305715098LL), (((/* implicit */long long int) ((var_2) < (((/* implicit */unsigned int) arr_20 [i_4 + 2]))))))), (((/* implicit */long long int) arr_21 [i_9] [i_9] [(short)0]))));
                    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [2LL] [i_4])) ? (max((min((var_2), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_22 [(unsigned char)2] [i_4] [i_8] [i_9])), (arr_21 [i_4] [i_8] [6U])))) ? (((/* implicit */int) ((signed char) var_6))) : (min((arr_0 [i_9]), (((/* implicit */int) (signed char)-126)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) 1149659639);
                        var_23 = ((/* implicit */signed char) var_3);
                        var_24 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_21 [i_0] [i_4] [i_0]), (((/* implicit */unsigned int) (unsigned short)24394))))), (((long long int) arr_31 [i_9 - 1] [i_4] [i_0] [i_8 + 1] [i_9 - 1]))));
                        arr_33 [i_0] [i_0] [i_0] [i_10] [i_10] [i_0] |= ((/* implicit */unsigned short) ((unsigned int) max(((+(((/* implicit */int) (short)36)))), (((/* implicit */int) arr_23 [i_0] [2LL] [i_10] [i_0])))));
                    }
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) ((long long int) var_4));
                        arr_36 [i_0] [i_4 + 3] [i_0] [i_8 - 1] [i_9] [i_11] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24356)) ? (arr_2 [i_0] [(short)2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41138)))))) ? (max((((/* implicit */long long int) arr_26 [i_4] [i_9 - 1] [i_4] [i_0])), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 + 3] [i_8 - 1]))))), (((/* implicit */long long int) max(((unsigned short)24394), (((/* implicit */unsigned short) (short)-15)))))));
                    }
                    var_26 -= (~(((/* implicit */int) arr_22 [(short)2] [(short)2] [6] [(short)2])));
                }
                arr_37 [i_0] [i_0] = ((/* implicit */int) min(((+(arr_30 [i_4 - 3]))), ((((_Bool)1) ? (arr_30 [i_4 + 2]) : (arr_30 [i_4 + 1])))));
                var_27 -= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_9)) : (arr_20 [i_0]))))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
            }
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                var_28 += ((unsigned int) arr_40 [0LL] [i_4 + 3] [i_12 + 1]);
                var_29 |= ((/* implicit */unsigned char) min((((arr_7 [(_Bool)1] [i_12 + 1] [i_12 + 1]) ? (((/* implicit */int) arr_27 [i_4 - 2] [(_Bool)1])) : (((/* implicit */int) arr_7 [(short)4] [i_12 + 1] [i_12 + 1])))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_4]))) ^ (arr_9 [i_4] [i_12])))) ? (((/* implicit */int) max(((unsigned short)24392), (((/* implicit */unsigned short) arr_4 [i_12] [i_0]))))) : (((int) -2595707439752181819LL))))));
            }
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_29 [i_0] [i_0])))) & (((arr_29 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
            /* LoopSeq 3 */
            for (short i_13 = 1; i_13 < 6; i_13 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    var_31 = ((/* implicit */signed char) min(((~(arr_3 [i_13 + 2] [i_4 - 1]))), (((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) 1978242199)) ? (((/* implicit */int) (unsigned short)10196)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_46 [(unsigned short)6] [i_0] = ((/* implicit */int) arr_39 [i_4 - 2] [i_13 + 1] [i_4 - 2] [i_13 + 2]);
                }
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    var_32 = ((/* implicit */unsigned char) ((unsigned long long int) arr_35 [(short)7] [(short)7] [3U] [i_0] [0LL] [i_13] [i_13 + 2]));
                    arr_49 [i_0] [i_15] [i_4] [i_4] [i_13] [i_15] |= ((/* implicit */unsigned char) arr_39 [(unsigned char)3] [i_4] [i_4] [i_4 - 2]);
                }
                arr_50 [i_4 - 2] [i_0] [i_13 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-118)) ? (min((arr_2 [i_0] [i_4 - 3] [i_13]), (arr_2 [i_0] [i_4 - 3] [i_13]))) : (((/* implicit */long long int) var_4))));
                var_33 = ((/* implicit */unsigned char) min(((signed char)-118), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)28672))) > (arr_39 [i_0] [i_0] [i_0] [i_13 + 2]))))));
                arr_51 [i_0] [i_13] = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_4 [i_4 + 3] [(_Bool)1]), (((_Bool) arr_35 [(signed char)4] [i_4] [i_0] [i_0] [i_4] [(signed char)3] [i_0]))))), ((+(-1047323984)))));
            }
            for (unsigned char i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
            {
                var_34 = ((/* implicit */short) min((min((var_8), (((/* implicit */long long int) (~(-221201731)))))), (((/* implicit */long long int) (~(arr_34 [i_16] [i_4] [i_16] [i_4] [i_0] [i_4]))))));
                var_35 = ((/* implicit */int) arr_11 [i_0]);
            }
            for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_18 = 3; i_18 < 8; i_18 += 2) /* same iter space */
                {
                    var_36 ^= ((/* implicit */long long int) (signed char)125);
                    arr_60 [i_0] [i_4] [i_18 - 1] [i_0] = arr_43 [i_18 + 1] [i_0] [i_0];
                }
                for (unsigned short i_19 = 3; i_19 < 8; i_19 += 2) /* same iter space */
                {
                    arr_63 [i_0] [i_0] [7] [i_17] [i_17] [i_19] = ((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-28698)) ? (4294836241U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41148))))))));
                    arr_64 [i_0] [i_4] = ((/* implicit */unsigned int) arr_4 [i_17] [5ULL]);
                    var_37 += ((/* implicit */signed char) (short)28686);
                }
                for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    var_38 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((signed char) arr_8 [i_17] [i_20]))) ? (((/* implicit */int) min(((unsigned short)24379), (((/* implicit */unsigned short) var_1))))) : (1047323982)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) 
                    {
                        arr_71 [i_0] [i_0] [i_0] [i_17] [i_20] [i_21] = ((((/* implicit */_Bool) (unsigned short)41143)) ? (((/* implicit */int) arr_4 [i_4 - 3] [i_4 + 2])) : (((int) arr_4 [i_4 + 3] [i_4 - 1])));
                        arr_72 [(unsigned short)2] [i_0] [i_17] [i_4 - 3] [i_0] [(unsigned short)2] = min((((/* implicit */short) ((unsigned char) max((arr_12 [i_0] [i_0]), (((/* implicit */long long int) -474322295)))))), (min((((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_4))))), ((short)-28698))));
                    }
                }
                arr_73 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_27 [i_4 - 2] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_4] [(unsigned char)9])))))));
                var_39 = ((/* implicit */int) (-(max((min((((/* implicit */long long int) (unsigned short)41143)), (arr_39 [i_17] [i_4] [i_4] [7U]))), (((/* implicit */long long int) min((arr_59 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_57 [i_0])))))))));
                var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) min((max((2423822642U), (((/* implicit */unsigned int) (unsigned short)24382)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-974)) : (((/* implicit */int) (unsigned char)245))))))))));
            }
        }
        arr_74 [i_0] [i_0] = ((_Bool) arr_0 [i_0]);
        var_41 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) ((short) var_4))))));
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (unsigned short)24379))));
    }
    for (short i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [(signed char)8] [i_22])))))));
        var_44 += ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_66 [i_22] [i_22] [i_22] [i_22]), (arr_66 [(unsigned char)3] [i_22] [i_22] [i_22])))), (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_22] [i_22] [i_22] [i_22])))))));
    }
    for (short i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
    {
        var_45 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned short)10)), (arr_62 [i_23] [i_23]))), (((/* implicit */long long int) (unsigned char)9))));
        arr_80 [i_23] = ((/* implicit */int) var_8);
        /* LoopSeq 2 */
        for (int i_24 = 0; i_24 < 10; i_24 += 2) 
        {
            var_46 = ((/* implicit */signed char) ((int) min((2423822622U), (((/* implicit */unsigned int) arr_47 [7LL] [i_23] [(unsigned char)8] [i_23])))));
            var_47 += ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_25 [i_23] [i_24])) ? (((/* implicit */int) arr_25 [i_23] [i_23])) : (((/* implicit */int) arr_25 [i_23] [i_24])))));
            var_48 = ((/* implicit */short) var_0);
        }
        for (unsigned char i_25 = 0; i_25 < 10; i_25 += 3) 
        {
            var_49 = ((/* implicit */int) min((max((((/* implicit */unsigned short) ((unsigned char) arr_59 [i_23] [i_25] [i_25] [i_25]))), ((unsigned short)41133))), ((unsigned short)24404)));
            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_25] [7] [9LL] [i_23])) ? (min((arr_47 [i_23] [i_25] [i_25] [i_25]), (arr_47 [i_23] [i_23] [i_25] [i_25]))) : (((arr_47 [i_23] [i_23] [i_25] [i_25]) << (((arr_47 [i_23] [3LL] [i_23] [i_23]) - (490308638))))))))));
        }
        var_51 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_57 [(unsigned char)6])))))));
    }
    var_52 = ((/* implicit */signed char) var_0);
}
