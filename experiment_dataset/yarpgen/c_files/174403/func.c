/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174403
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
    var_18 = ((/* implicit */signed char) -1773501295);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned short) arr_0 [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((unsigned short) arr_2 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)618)) & (((/* implicit */int) (short)-12105)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 7; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_3 + 3] [i_3] [(unsigned char)1] [3LL]))));
                        var_21 = ((/* implicit */short) arr_6 [i_0] [i_0]);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_3 + 2] [i_2])) : (((((/* implicit */_Bool) (short)-967)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))));
                        arr_13 [i_0] [i_0] [(unsigned char)5] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3] [i_0]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [(short)4] [i_1]))));
        }
        for (short i_4 = 1; i_4 < 8; i_4 += 2) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_4 + 2] [i_4 + 2])) ^ (((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1]))));
            var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_0])) : (((/* implicit */int) arr_14 [i_4] [i_4 + 1] [i_0]))));
        }
        for (short i_5 = 1; i_5 < 8; i_5 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) ((unsigned short) arr_10 [i_5 - 1] [i_5 + 2]));
            var_26 &= ((/* implicit */unsigned short) (-(arr_7 [i_0])));
            arr_19 [i_0] [i_5] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_5 + 1]))));
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                var_27 &= ((/* implicit */short) ((((/* implicit */int) arr_14 [i_5 + 2] [i_5 + 2] [i_5 + 2])) ^ ((~(((/* implicit */int) arr_5 [i_0] [6LL] [i_5]))))));
                var_28 = ((/* implicit */short) ((((/* implicit */int) var_11)) * (((/* implicit */int) (short)27140))));
                var_29 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 + 2]))));
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    arr_24 [i_6] [2] [i_0] = ((((/* implicit */int) arr_5 [i_5 - 1] [i_0] [i_6])) ^ (((/* implicit */int) arr_5 [i_5 + 2] [i_0] [i_5 + 2])));
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (unsigned char)255))))) & (((((/* implicit */int) (unsigned char)147)) & (((/* implicit */int) (unsigned char)153)))))))));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                    {
                        arr_27 [(short)8] [i_0] [i_6] [(unsigned short)8] [i_0] = ((/* implicit */short) (+(arr_15 [i_5 - 1] [i_5])));
                        var_31 = ((/* implicit */short) ((signed char) (+(((/* implicit */int) (short)32767)))));
                    }
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [(unsigned short)7] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0]);
                        var_32 = (unsigned short)37291;
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)111)))))));
                    }
                }
                for (short i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                {
                    var_34 += ((/* implicit */unsigned short) (+(((int) var_11))));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_0] [i_5 + 1])))))));
                    arr_35 [i_0] [i_5] [i_6] [i_10] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) % (arr_7 [i_5 + 2])));
                    var_36 = ((/* implicit */unsigned int) arr_10 [i_0] [i_5 - 1]);
                }
                for (short i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                {
                    arr_39 [i_0] [(short)4] [i_0] [i_11] [i_0] = var_14;
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49523)) ? (((/* implicit */int) arr_9 [i_5 + 2] [i_5 - 1])) : (((/* implicit */int) arr_29 [i_0] [1] [i_0]))));
                    arr_40 [i_11] |= ((((/* implicit */_Bool) arr_20 [(short)3] [(short)3] [i_6])) ? (((/* implicit */int) arr_5 [i_5] [i_11] [i_5 + 2])) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_16))))));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_5 + 1])) % (((/* implicit */int) arr_2 [i_5 + 2]))));
                }
            }
            for (short i_12 = 4; i_12 < 8; i_12 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 7; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */short) (+(((/* implicit */int) arr_42 [i_12 + 2] [i_13 + 2] [i_5 - 1] [i_12 + 2]))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_12] [i_13 - 1] [i_0])) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
                            arr_47 [i_0] [i_14] [i_0] [i_13] [i_14] = ((long long int) arr_6 [i_5 + 2] [i_12 - 3]);
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_34 [i_0] [i_5] [i_5] [(short)0]))))));
                var_42 = (+(((/* implicit */int) arr_25 [(unsigned short)5] [i_12 - 3] [i_12] [i_12 - 3] [i_0])));
                arr_48 [i_0] [i_5 + 1] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_12] [i_5])) <= (-630651832)))));
                arr_49 [i_0] [i_5] [i_12] = ((/* implicit */unsigned short) 4294967295U);
            }
            for (short i_15 = 4; i_15 < 8; i_15 += 3) /* same iter space */
            {
                var_43 = ((/* implicit */short) arr_26 [i_0] [i_5 - 1] [(signed char)0] [i_15] [i_5]);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    for (short i_17 = 3; i_17 < 7; i_17 += 1) 
                    {
                        {
                            var_44 = var_0;
                            var_45 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) 4294967291U))));
                            var_46 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15591))) : (var_13)))) ? (arr_37 [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0] [i_0])))));
                            arr_57 [i_0] [i_5 + 1] [i_0] [i_0] [i_17] = ((/* implicit */short) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_28 [i_17 - 3] [i_15 - 1] [i_15 + 2] [i_15 - 3] [i_15 - 4] [i_5 - 1]))));
                        }
                    } 
                } 
                var_47 &= ((/* implicit */unsigned char) ((short) arr_2 [i_15 - 4]));
            }
            arr_58 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32763)) ? (arr_53 [i_0] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [(short)5] [i_5] [(unsigned short)0])))));
        }
    }
}
