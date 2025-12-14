/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185214
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
    var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (-(((/* implicit */int) var_17))))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_12))));
    var_22 -= ((/* implicit */long long int) (-(1167138153U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_23 = min(((_Bool)1), (arr_7 [(unsigned short)9] [i_1] [(unsigned short)9] [i_1]));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_1] [i_3])))) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_10))));
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) (unsigned short)35771)), (min((var_7), (((/* implicit */long long int) (signed char)87))))))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_3) : (((/* implicit */int) min(((unsigned short)35766), (((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_2])))))));
                            var_24 = ((/* implicit */unsigned char) arr_11 [i_0] [i_4] [i_2] [i_3] [i_0] [i_0 + 3]);
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(((arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 2] [(unsigned short)8] [i_0 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))))))))));
                            var_26 += ((/* implicit */long long int) (((((+(((/* implicit */int) (short)-29038)))) + (2147483647))) >> (((((/* implicit */int) var_8)) + (5036)))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            arr_20 [i_0 + 1] [i_1] [i_2] [i_1] [i_5] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_18 [i_2] [i_3]))) ? (((/* implicit */int) arr_1 [0U] [i_0 + 2])) : ((-(((/* implicit */int) (signed char)-69))))));
                            arr_21 [i_0 + 2] [i_3] [i_2] [i_0 + 2] &= ((/* implicit */long long int) ((unsigned int) arr_7 [i_5 - 1] [i_0 - 1] [i_2] [i_1]));
                            arr_22 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_14 [i_0 + 1] [i_0 + 3] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 + 1]) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [7] [i_0 + 1] [i_0 + 3])) : (((/* implicit */int) var_8))));
                            arr_23 [i_0] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) ((_Bool) arr_13 [1] [i_1] [i_2] [i_3] [i_3] [i_2] [(unsigned short)10]));
                        }
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_27 [i_0] [i_0] [9] = ((/* implicit */short) var_16);
                            var_27 = ((/* implicit */long long int) min(((_Bool)0), ((_Bool)1)));
                        }
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_28 += ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) -856081742)) ? (((/* implicit */int) arr_15 [(unsigned char)12] [(short)6] [i_1])) : (((/* implicit */int) arr_1 [i_7] [i_0 + 2]))))))) | (((long long int) (-(((/* implicit */int) (unsigned short)0)))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)29776)) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0 - 2] [i_1])), (arr_29 [i_7] [i_3] [(_Bool)1] [i_1] [i_0])))) : (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) var_8))))));
                        }
                    }
                    arr_31 [i_0] [i_1] = ((/* implicit */_Bool) (signed char)87);
                }
                var_30 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_6 [i_0])) == (((/* implicit */int) arr_6 [i_1]))))));
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    var_31 = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_0 + 1] [i_1] [i_8])) <= ((~(var_2)))));
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)-95))) ? (((/* implicit */int) arr_9 [i_8] [i_0] [i_1] [i_0])) : (((int) (signed char)-60))))))))));
                }
                for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    arr_36 [i_0] [i_0] = ((/* implicit */long long int) (signed char)-125);
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            {
                                arr_42 [i_0 + 2] [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0] [i_10] [i_11])) ? (((/* implicit */int) (unsigned short)35766)) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                                arr_43 [i_0] [i_1] [i_9] [i_9] [(unsigned short)6] [i_1] [i_11] = ((/* implicit */long long int) arr_11 [i_0 + 1] [i_0 + 1] [(signed char)9] [i_10] [i_0 + 1] [i_1]);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-((-(((/* implicit */int) (short)(-32767 - 1))))))))));
                    var_34 = ((/* implicit */signed char) min((((/* implicit */int) arr_41 [i_0] [i_0 + 1] [14U] [14U] [i_9])), ((-(((/* implicit */int) var_11))))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) var_3);
}
