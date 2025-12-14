/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114848
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
    var_12 = ((/* implicit */unsigned char) var_5);
    var_13 = ((/* implicit */unsigned char) (+(min((((9223372036854775799LL) / (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_11))))));
    var_14 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [15U] [15U] = ((/* implicit */short) arr_6 [i_1]);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_15 = ((/* implicit */long long int) ((short) arr_9 [i_0] [i_1] [i_2]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_3))), (((((/* implicit */int) var_1)) % (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_4)))) ? (var_6) : (((/* implicit */unsigned long long int) min((arr_6 [i_0]), (((/* implicit */long long int) var_11))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_3 [i_4])))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) var_10)))))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_1 [i_0]))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    var_18 = ((/* implicit */unsigned int) arr_14 [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned int) (((!(arr_10 [i_1] [i_5]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15756))))) : (((((/* implicit */_Bool) (short)-15742)) ? (((/* implicit */int) (short)15756)) : (((/* implicit */int) var_2))))))))));
                    var_20 += ((/* implicit */signed char) 85036302070294584LL);
                }
                arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (-(var_3)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)10))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 3; i_9 < 12; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_6] [4U] [i_8])) + (((/* implicit */int) arr_21 [i_10] [i_9 + 1] [i_10]))))) ? (min((((/* implicit */unsigned long long int) arr_25 [i_6])), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7] [i_7 + 1] [i_7 + 1])))))) ? (min((((/* implicit */long long int) arr_17 [2U] [i_7 + 3] [i_9 + 1] [i_9])), (arr_22 [i_7 + 2] [i_10]))) : (((/* implicit */long long int) (+(((((/* implicit */int) arr_2 [i_6])) * (((/* implicit */int) var_11)))))))));
                            var_22 = var_4;
                            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((unsigned char) arr_30 [i_7] [6U] [i_8] [i_9 - 1] [i_10] [i_9 - 1]))), (min((var_5), (((/* implicit */short) var_0))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) min((((/* implicit */short) arr_28 [i_6] [i_7] [(short)8] [i_10] [i_10])), (var_5)))) ? ((-(arr_29 [i_6] [i_6] [i_7 + 1] [i_8] [i_9 - 2] [i_9 - 3] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7 + 4] [i_7 + 4])))))))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                        {
                            arr_33 [i_6] [i_6] [i_7] [2LL] [i_8] [i_11] [i_11] |= ((/* implicit */long long int) min((((((/* implicit */int) var_8)) / (((/* implicit */int) arr_15 [(unsigned char)7] [i_7 + 1] [i_7 + 3] [i_9 + 1])))), (((/* implicit */int) ((unsigned char) arr_15 [i_6] [i_7 + 3] [i_7 - 1] [i_9 - 3])))));
                            arr_34 [i_6] [i_7] = min((((((/* implicit */_Bool) arr_5 [i_6] [i_7 + 3] [i_8])) ? (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))));
                        }
                        arr_35 [i_6] [i_7] = min((min((((short) arr_17 [i_6] [i_6] [i_7 + 4] [i_7])), (((/* implicit */short) var_11)))), (((/* implicit */short) ((unsigned char) min((arr_29 [i_6] [(signed char)2] [i_8] [i_9] [i_9] [i_7 + 2] [i_7 + 4]), (((/* implicit */unsigned long long int) arr_31 [6LL] [i_7] [i_8])))))));
                        arr_36 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */long long int) var_2);
                    }
                    arr_37 [i_7] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_2 [i_7 + 1])) % (((/* implicit */int) arr_2 [i_7 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 11; i_13 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), ((~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2384882025U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (arr_3 [i_13 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)15713))))))))));
                                arr_42 [i_7] [i_12] [i_8] [(unsigned char)5] [i_7] [i_7] = ((/* implicit */short) min(((~(((/* implicit */int) min((var_1), ((short)4018)))))), (((/* implicit */int) arr_10 [i_13] [(unsigned char)9]))));
                            }
                        } 
                    } 
                    arr_43 [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (arr_3 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) arr_30 [i_7] [i_8] [i_8] [i_7 + 2] [i_6] [i_7])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_7])) : (((/* implicit */int) (short)32767)))))), (((/* implicit */int) var_0))));
                }
            } 
        } 
    } 
}
