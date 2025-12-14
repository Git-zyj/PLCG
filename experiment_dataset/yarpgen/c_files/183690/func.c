/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183690
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
    var_12 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((arr_2 [i_1]) - (3971347995U)))))) >= (var_9))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(short)7] [2U])) ? (arr_5 [i_2] [(unsigned char)0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) >= (arr_2 [i_0])))) : (((/* implicit */int) arr_3 [21LL])))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */int) (((!(var_6))) ? (var_4) : (arr_7 [i_2] [i_2])));
                        var_15 = ((/* implicit */int) arr_3 [i_3]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                        {
                            var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (max((arr_5 [i_0] [4] [(unsigned char)10]), (((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_5]))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_3), (((/* implicit */short) max((arr_11 [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) arr_9 [i_5] [(short)12]))))))))));
                            arr_18 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | ((((_Bool)1) ? (11778599697694225135ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_5]) : (arr_1 [i_1])))) : (((((/* implicit */_Bool) arr_16 [12LL] [i_0] [12LL] [i_1] [9ULL] [i_1] [i_1])) ? (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)88)))))))));
                            var_17 -= ((/* implicit */int) arr_9 [i_4] [i_4]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_1)))))) == (((arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0]) ^ (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_11)))))))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [(unsigned char)13] [i_0]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) min(((signed char)103), (((/* implicit */signed char) (_Bool)1))))) <= (((/* implicit */int) arr_17 [19U] [i_1] [i_2] [i_4] [i_1] [i_7]))))), (var_2)));
                            arr_23 [i_1] = (+(var_8));
                            var_21 = ((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_6)), (var_0))), (((/* implicit */unsigned int) arr_9 [i_2] [i_2])))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_9)));
                            var_23 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0]);
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_8))));
                            var_25 = ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) / (min((var_10), (((/* implicit */long long int) arr_5 [5U] [i_8] [5U])))));
                            var_26 ^= ((/* implicit */short) (-(var_0)));
                        }
                        var_27 = ((/* implicit */signed char) var_9);
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_0))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (~(max((arr_2 [i_1]), (arr_2 [i_10]))))))));
                                arr_31 [i_10] [i_0] [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0]);
                                var_30 ^= ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        var_31 += ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_0] [i_2] [i_11])) + (var_8)));
                        arr_35 [(unsigned short)18] [i_1] = ((/* implicit */short) arr_5 [i_1] [(signed char)20] [i_1]);
                        var_32 = ((/* implicit */_Bool) var_10);
                        arr_36 [i_0] [i_0] [19LL] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_2] [i_0]) : (arr_0 [i_0] [i_11])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_11))));
                        var_34 = ((/* implicit */unsigned char) arr_30 [(unsigned char)13] [(unsigned char)13] [10U] [i_2] [(unsigned char)13] [i_12]);
                        var_35 = ((/* implicit */signed char) var_3);
                    }
                }
                arr_40 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) / (var_4)))) || (((/* implicit */_Bool) var_5)));
            }
        } 
    } 
}
