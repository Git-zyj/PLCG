/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130051
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
    var_11 = ((/* implicit */int) ((((/* implicit */int) var_7)) >= ((((((_Bool)1) ? (2109778601) : (2109778602))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (-2109778618))))))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                var_12 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_1)))) + (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                /* LoopSeq 3 */
                for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_3 - 1]) : (2109778609)));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_9 [i_1] [i_2] [i_1] [i_3] [17LL]);
                }
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    var_14 &= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                    arr_15 [i_0 - 4] [i_0 - 2] [i_0 - 4] [11LL] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 2003647625)))) ? (arr_1 [i_0]) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned short)58382)))))));
                }
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_15 -= ((/* implicit */short) 9223372036854775807LL);
                    arr_18 [i_5] [i_2] [i_1] [(short)6] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 2]))));
                }
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_1] [i_2] [i_2] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) arr_16 [i_7] [i_2] [7] [i_0 - 1])) ? (((/* implicit */int) var_1)) : (899166215)))));
                        var_16 = ((/* implicit */int) (!((_Bool)1)));
                    }
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                    {
                        arr_28 [i_8] [i_8] [(short)16] [i_2] [(unsigned char)19] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0 - 2])) ^ (((/* implicit */int) (_Bool)1))));
                        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (arr_24 [i_0 - 1] [i_0 - 1] [19U] [1LL] [(unsigned short)13] [i_0 - 1] [(unsigned short)1])));
                        var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_1] [i_2] [i_1] [i_8]))));
                        var_19 -= arr_3 [i_0] [i_0];
                    }
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                    {
                        arr_31 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0 - 2] [(unsigned short)4] [i_2] [i_6])) ? (((int) arr_20 [i_0 - 4] [i_0 + 1] [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) arr_0 [i_1]))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_1])) || (((/* implicit */_Bool) arr_19 [i_2] [i_6] [i_2] [i_1] [i_0]))));
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                        var_22 = ((/* implicit */short) (((~(((/* implicit */int) arr_7 [i_9] [i_6] [i_0 - 1] [i_1] [i_0 - 1])))) | ((~(((/* implicit */int) arr_17 [i_0 - 2] [i_0 - 2] [(unsigned char)10] [i_0]))))));
                    }
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_23 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -191522527)) || (((/* implicit */_Bool) var_6)))));
                        var_24 = (+(((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_2])));
                        var_25 *= ((/* implicit */signed char) ((arr_8 [i_0] [i_1] [i_2] [i_6] [i_10]) - (((/* implicit */int) var_1))));
                    }
                    arr_34 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) arr_11 [i_0 - 2] [i_1] [i_0] [i_6]));
                }
            }
            arr_35 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 3]))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)56261))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 3; i_12 < 22; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_13 = 1; i_13 < 23; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) -8052162567726089816LL);
                            arr_46 [i_12] [i_13 + 1] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_45 [i_14] [i_11] [i_12] [i_11] [i_0 + 1])) | (arr_21 [i_11] [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 - 2]))))) : (((int) arr_38 [(_Bool)1])));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-22)) || (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)32768))))));
                            var_29 ^= ((/* implicit */signed char) ((((((/* implicit */int) arr_19 [i_0] [i_0] [i_13 - 1] [i_13 - 1] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_29 [i_0] [i_12 + 1] [i_13 + 1] [i_0 + 1])) - (38)))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned short) ((((-328453412) / (((/* implicit */int) var_3)))) == (((((/* implicit */_Bool) arr_40 [i_12] [i_0] [i_11] [i_0])) ? (arr_1 [i_0 - 2]) : (4177920)))));
                arr_47 [i_11] |= ((/* implicit */int) (_Bool)1);
            }
            /* LoopSeq 1 */
            for (unsigned char i_15 = 1; i_15 < 22; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    for (int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                            var_32 = ((/* implicit */long long int) ((unsigned int) arr_0 [i_16]));
                            var_33 = ((/* implicit */int) var_8);
                        }
                    } 
                } 
                arr_57 [i_15] [i_11] [i_0 - 3] = ((/* implicit */unsigned short) arr_19 [i_0] [i_11] [(unsigned char)5] [i_15] [i_15 - 1]);
            }
        }
        var_34 = ((/* implicit */signed char) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_23 [i_0 - 3] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0])), (var_5)))))));
    }
}
