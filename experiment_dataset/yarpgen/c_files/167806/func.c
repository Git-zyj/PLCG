/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167806
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
    var_13 = max((((/* implicit */unsigned int) ((int) (unsigned char)62))), (min((((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) (unsigned char)194))))))));
    var_14 |= ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) min(((~(1598156673U))), (((arr_1 [i_0] [i_1]) & (arr_1 [i_0] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0 + 1] [i_1] [(unsigned char)6] [i_3] |= ((/* implicit */unsigned int) (unsigned short)7);
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (unsigned char)62);
                        arr_12 [i_0] [i_1] [11ULL] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((+(var_10))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0])), (2696810622U))))));
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_1 [i_1] [i_0 - 1]))));
                    }
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)6)) & (((/* implicit */int) arr_2 [i_0] [i_0 + 2]))))) ? (((1598156674U) + (2696810627U))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)57667)), ((((-2147483647 - 1)) / (((/* implicit */int) var_11)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (~(1598156674U)));
                            var_18 *= ((/* implicit */unsigned int) (unsigned char)238);
                        }
                    } 
                } 
            } 
            arr_24 [11] [i_0] = var_3;
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [(unsigned char)7] [i_0] [i_0 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))))));
        }
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            arr_27 [i_0] = ((/* implicit */int) ((((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-13640))))) / (max((arr_3 [i_0 - 1]), (((/* implicit */unsigned int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                arr_30 [i_0] [i_0] [i_8] [i_9] = ((/* implicit */unsigned int) arr_20 [i_0]);
                var_20 = ((/* implicit */unsigned int) min((var_20), (max((var_0), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_10))))))))));
                var_21 = ((/* implicit */unsigned int) arr_17 [i_0] [(unsigned char)10]);
            }
            arr_31 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)218)) * (((/* implicit */int) (unsigned char)187)))) / (((arr_25 [(_Bool)1] [i_0] [i_8]) / (((/* implicit */int) var_9))))))), (4294967290U)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                arr_36 [i_0] [i_10] = ((/* implicit */_Bool) (+(((2696810627U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 1724585798)) != (arr_1 [i_0] [i_0 + 1])));
                var_24 = (!(((/* implicit */_Bool) var_7)));
                var_25 = ((/* implicit */unsigned short) ((var_4) + ((+(var_7)))));
                arr_41 [i_0] [i_0] = ((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_11])) | (((/* implicit */int) (short)26430)))))));
            }
            var_26 = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) arr_21 [i_0] [(unsigned short)5] [(unsigned short)5] [i_0] [i_0] [i_8])) / (var_7))) + (max((((/* implicit */unsigned long long int) (unsigned short)7868)), (var_7))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)54)), (arr_19 [i_0]))))));
        }
        arr_42 [i_0] = ((/* implicit */short) arr_18 [i_0] [i_0] [i_0]);
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            arr_45 [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_0 + 2] [i_12])), (var_8)))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0]))) : (var_10))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) + (max((var_6), (((/* implicit */long long int) var_9)))))))));
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) 4294967295U)) * (((((/* implicit */unsigned long long int) 668978640)) / (var_8))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_40 [i_0 + 1] [i_0] [i_0])) : (arr_29 [i_0 + 1] [i_0] [i_0])))), (((unsigned int) var_2)))))));
                arr_48 [i_13] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0 + 1])) + (((/* implicit */int) arr_20 [i_0 + 2]))))), (min((var_7), (((/* implicit */unsigned long long int) var_1))))));
                arr_49 [i_0] = (_Bool)1;
                /* LoopNest 2 */
                for (unsigned char i_14 = 1; i_14 < 10; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        {
                            arr_54 [i_0] [i_12] [i_15] [i_0] [i_15] = ((/* implicit */unsigned short) arr_35 [i_12] [i_12]);
                            arr_55 [i_0] [i_12] [i_0] [i_0] [i_0] [i_13] = ((/* implicit */unsigned int) (((+(arr_0 [i_0]))) < (((arr_0 [i_0]) - (arr_0 [i_0])))));
                            arr_56 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)45)) ^ (668978636)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_0 - 1] [i_0] [i_0]))) / (var_0))) : (arr_0 [i_0])));
            var_29 &= ((/* implicit */unsigned int) ((arr_18 [i_0 - 1] [i_0 + 1] [i_16]) / (arr_18 [i_0 - 1] [i_0 - 1] [i_16])));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */unsigned int) var_2)) - (arr_9 [i_16]))))));
        }
    }
}
