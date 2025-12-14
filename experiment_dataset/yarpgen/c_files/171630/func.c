/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171630
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((arr_5 [i_0] [i_2] [i_0]), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)30937)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-30935))))) : (max((arr_1 [i_0] [i_0]), (var_3)))))));
                    var_12 = (-(((((/* implicit */_Bool) (unsigned short)22882)) ? (((((/* implicit */_Bool) (short)-17216)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27411))) : (353725227424421983LL))) : (((/* implicit */long long int) max((2813589162U), (((/* implicit */unsigned int) var_10))))))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned int) ((long long int) arr_5 [i_0] [i_0] [i_0]));
        var_14 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) (short)-30945))));
        arr_7 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-30945))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (var_9)))) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_3] [i_3]))))) : (max((((/* implicit */unsigned int) (signed char)-101)), (1779829902U)))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
            {
                var_15 = ((/* implicit */_Bool) (-(max(((-(2813589162U))), (var_5)))));
                arr_17 [i_3] [i_4] [16LL] = ((/* implicit */unsigned short) (+((-(min((824539752U), (((/* implicit */unsigned int) var_2))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        {
                            var_16 = var_10;
                            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_7] [i_3])) ? ((-(((/* implicit */int) arr_2 [i_3] [i_6])))) : (((/* implicit */int) arr_3 [i_4] [i_5] [i_6]))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
            {
                var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((unsigned short) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_3]))) : (arr_16 [i_4] [i_4] [i_4] [(_Bool)1])));
                /* LoopNest 2 */
                for (long long int i_9 = 3; i_9 < 18; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) 824539743U)), (var_3)))) ? (((/* implicit */unsigned long long int) 1779829902U)) : (arr_11 [i_3])))));
                            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30935))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_8])) ? (((/* implicit */int) arr_20 [i_3] [i_3] [i_3])) : (((/* implicit */int) var_11))))), (max((arr_11 [i_3]), (((/* implicit */unsigned long long int) arr_1 [i_10] [i_4]))))))));
                            var_21 = ((/* implicit */_Bool) (short)30944);
                        }
                    } 
                } 
            }
            for (short i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                arr_33 [(unsigned short)4] [i_4] [i_11] = ((/* implicit */long long int) min(((unsigned char)3), ((unsigned char)175)));
                arr_34 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_27 [i_3] [i_4] [i_3] [i_3])), ((-(((/* implicit */int) min((arr_15 [i_3] [i_4] [i_4] [i_11]), (((/* implicit */unsigned char) arr_24 [i_3] [i_3] [i_4] [i_4] [i_11])))))))));
            }
            var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3])) ? (arr_11 [i_4]) : (arr_11 [i_4])))) ? (((((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51861))) : (var_9))) : (min((arr_11 [i_3]), (arr_11 [i_3])))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    {
                        arr_41 [i_3] [17ULL] [i_3] [(unsigned char)1] [i_13] [(signed char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_4 [18LL] [i_3] [i_12] [i_12 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) + (((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (short)17208)) : (((/* implicit */int) (short)-27551))))))) : (max((((/* implicit */unsigned long long int) var_10)), (((arr_30 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                        arr_42 [i_13] [i_4] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((arr_37 [i_12] [(unsigned short)7]), (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)123)) % (((/* implicit */int) (unsigned short)42653))))) : (min((arr_13 [i_3]), (arr_31 [i_3] [i_4] [i_3] [i_13]))))), (((/* implicit */unsigned long long int) ((short) arr_14 [i_3] [i_4])))));
                        arr_43 [i_12] [i_12] [i_4] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */int) var_4)) << (((3887253852U) - (3887253848U))))), (((/* implicit */int) min((((/* implicit */signed char) arr_14 [i_12 - 1] [i_12 + 1])), (((signed char) 4294967295U)))))));
                        arr_44 [i_3] [i_3] [i_12] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_5 [i_12 + 1] [i_12 - 1] [i_12 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_32 [i_3] [i_3] [i_12] [i_13]))), (((/* implicit */unsigned long long int) ((short) 2515137393U)))))));
                    }
                } 
            } 
        }
        for (unsigned int i_14 = 4; i_14 < 17; i_14 += 3) 
        {
            arr_48 [i_14] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */short) arr_9 [i_3] [i_3])), ((short)-18125))))));
            var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 5116159838664194809ULL)))) - (max((((((/* implicit */_Bool) (signed char)27)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [18LL] [i_3] [i_3]))))), (((((/* implicit */_Bool) arr_0 [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18151))) : (arr_21 [15LL] [i_3] [i_3] [i_3] [(_Bool)1]))))));
        }
    }
    /* vectorizable */
    for (short i_15 = 1; i_15 < 10; i_15 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            for (unsigned char i_17 = 1; i_17 < 11; i_17 += 4) 
            {
                {
                    arr_60 [i_15] [9U] [i_15] = ((/* implicit */unsigned char) var_8);
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) 22U))));
                    arr_61 [i_15] = ((/* implicit */unsigned int) ((long long int) ((var_1) ? (((/* implicit */int) arr_24 [i_15] [i_15 + 2] [i_16] [i_16] [i_17])) : (((/* implicit */int) var_6)))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (signed char)-96)))) == (((((/* implicit */_Bool) arr_37 [(unsigned char)2] [i_15 + 2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_15] [i_15] [i_15] [(short)18])) ? (((((/* implicit */_Bool) arr_4 [i_15] [i_15 + 1] [i_15 + 1] [i_15])) ? (((/* implicit */int) arr_23 [i_15] [i_15] [i_15] [i_15] [i_15 - 1] [i_15 - 1] [i_15 + 1])) : (((/* implicit */int) arr_9 [i_15] [i_15])))) : ((+(((/* implicit */int) (unsigned short)0))))));
    }
    var_27 = ((/* implicit */unsigned long long int) max((max((var_3), (var_3))), (((/* implicit */long long int) (-(((unsigned int) 4294967295U)))))));
    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_1))));
}
