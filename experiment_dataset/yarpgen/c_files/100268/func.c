/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100268
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_9))));
        var_20 = ((/* implicit */unsigned int) var_2);
        var_21 = ((/* implicit */long long int) ((((_Bool) 1879872024U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((unsigned long long int) arr_2 [i_0 - 1] [i_0]))));
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) (-(var_14)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) var_0);
            arr_8 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)65523));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_4 = 3; i_4 < 8; i_4 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) -1860090055)) % (3369590524351461756ULL))));
                    var_25 = ((/* implicit */unsigned char) var_14);
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_2]))) < (arr_15 [i_1 - 1] [i_2] [i_3 - 2] [i_4] [i_5 + 3])));
                        arr_16 [i_1] = var_13;
                        arr_17 [i_1] [i_1] [i_3] = ((/* implicit */long long int) var_8);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_4 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_4 + 1] [i_5 - 1])) : (((/* implicit */int) arr_7 [i_1 + 1] [i_4 + 1] [i_5 - 1]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        arr_20 [i_1 + 1] [i_2] [i_3] [i_1] [i_4] [i_6] = ((/* implicit */short) arr_7 [i_1 - 1] [i_1 - 1] [i_1]);
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_1] [i_1] [0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6]))))) ? ((-(4284028062114916368ULL))) : (((/* implicit */unsigned long long int) arr_14 [i_1] [i_2 - 1] [i_3] [i_4] [i_6] [i_3 + 2] [i_3])))))));
                        arr_21 [i_1] [i_2] [i_3] [i_4 + 2] [1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1860090043)) ? (var_11) : (((/* implicit */int) (unsigned short)0))))) ? (arr_9 [i_6] [i_3] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))));
                        arr_22 [i_1] [i_2] [5LL] [i_4] = ((((/* implicit */_Bool) ((unsigned long long int) 2147483647))) ? (((((/* implicit */_Bool) 2730789200U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))) : (8388607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) var_18);
                        var_30 = ((/* implicit */_Bool) var_2);
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 1) /* same iter space */
                    {
                        arr_29 [(short)6] [i_1] [(short)6] = ((/* implicit */unsigned char) ((int) arr_25 [i_1]));
                        var_31 *= ((/* implicit */unsigned char) (unsigned short)24320);
                        arr_30 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16051)) ? (((/* implicit */int) arr_26 [i_1 - 1] [i_1] [i_3] [i_8] [i_9])) : (((/* implicit */int) var_16))));
                        var_32 = ((/* implicit */unsigned short) ((var_3) < (var_2)));
                        arr_31 [i_1 + 1] [i_2] [i_1] [(unsigned short)9] [i_8] [i_9] [i_9 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3369590524351461744ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) : (4389760898698412220LL)));
                    }
                    for (unsigned char i_10 = 1; i_10 < 10; i_10 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (var_10)));
                        var_34 = arr_5 [i_2 - 1];
                    }
                    for (unsigned char i_11 = 1; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((((/* implicit */long long int) var_4)) > (var_3))) ? (7258103043250983086LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 + 1] [i_11 - 1]))))))));
                        arr_39 [i_1] [i_1] [i_3 - 1] [i_3] [i_3] = ((/* implicit */int) (_Bool)1);
                        arr_40 [i_1] [(unsigned short)0] [i_3 - 1] [i_3] [8LL] = (!(var_16));
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((unsigned short) var_12)))));
                    }
                    for (unsigned int i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        var_37 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2)))));
                        arr_44 [i_1] [i_2] [i_1] [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 949851375U)))));
                        var_38 = ((/* implicit */_Bool) var_17);
                    }
                    var_39 *= ((((/* implicit */_Bool) arr_37 [i_1 - 1] [i_2 - 1] [i_2] [i_3 + 2] [i_3 - 2])) ? (arr_9 [i_1 + 1] [i_3 - 2] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        var_40 = ((/* implicit */long long int) var_4);
                        arr_51 [i_1] = var_10;
                        var_41 *= ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_13 + 1] [i_13] [i_3] [i_13 + 1] [i_13])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (~(-4389760898698412220LL)))));
                        arr_52 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_1 - 1] [i_1] [i_1 - 1]))) : (arr_5 [i_1 + 1])));
                    }
                    var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                    var_43 *= ((/* implicit */short) var_10);
                }
                var_44 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) 8388607U)) ? (-966400803562017296LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_2 + 1] [i_1] [i_1 + 1])))));
                arr_53 [8LL] [i_1] = ((/* implicit */unsigned char) (_Bool)0);
            }
            for (unsigned char i_15 = 2; i_15 < 10; i_15 += 4) /* same iter space */
            {
                arr_57 [i_1] = ((/* implicit */_Bool) (~(((var_14) | (((/* implicit */int) var_7))))));
                arr_58 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_1 - 1]);
            }
            arr_59 [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_2] [i_1]);
        }
    }
    for (signed char i_16 = 4; i_16 < 18; i_16 += 2) 
    {
        arr_62 [i_16] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)0));
        arr_63 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_2), (var_3)))) ? (((/* implicit */int) ((short) ((int) var_7)))) : (((/* implicit */int) ((arr_61 [i_16]) > (((/* implicit */int) var_13)))))));
    }
    /* LoopNest 2 */
    for (short i_17 = 1; i_17 < 10; i_17 += 2) 
    {
        for (long long int i_18 = 0; i_18 < 11; i_18 += 1) 
        {
            {
                var_45 = ((/* implicit */unsigned int) var_3);
                arr_70 [i_17 + 1] |= ((/* implicit */unsigned long long int) var_17);
                var_46 ^= ((/* implicit */_Bool) min((arr_50 [i_17] [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned short) var_13))));
            }
        } 
    } 
}
