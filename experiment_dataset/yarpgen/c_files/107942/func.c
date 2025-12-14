/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107942
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_0] [0ULL] [4ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [21U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)22]))) : (arr_2 [i_1])))) ? (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [11LL] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_0])))) : (((/* implicit */int) arr_1 [(unsigned char)12])))) : (((/* implicit */int) var_1))));
                arr_5 [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((signed char) arr_2 [i_1]))) <= (((/* implicit */int) arr_0 [i_1] [i_0])))) ? (var_10) : (((/* implicit */long long int) ((unsigned int) arr_0 [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)124))))))));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(unsigned char)6])) - (((/* implicit */int) arr_6 [i_2 + 2] [i_2]))));
                            arr_18 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_5]))));
                            var_14 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) (short)11622)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_15 += ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_7])) && (((/* implicit */_Bool) (unsigned char)71))));
                            var_16 += ((/* implicit */short) var_11);
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2855283433951423259LL)) ? ((~(((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_5 + 1] [i_5] [i_7])))) : ((~(((/* implicit */int) arr_9 [i_7]))))));
                            arr_21 [i_2] [i_2] [i_4] [i_5 - 1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-14220)) ? (((/* implicit */int) arr_8 [i_2 + 1])) : (((/* implicit */int) arr_20 [i_5 - 1] [i_2] [i_2 + 2] [i_2] [(unsigned char)3]))));
                            var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_3 [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_4] [i_5 - 1] [i_7])))))));
                        }
                        for (short i_8 = 2; i_8 < 9; i_8 += 1) 
                        {
                            arr_26 [i_2] [i_3] [i_3] [i_2] [i_5] [i_8] = ((/* implicit */unsigned char) var_8);
                            var_19 = (i_2 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */int) ((signed char) arr_23 [i_2] [i_8 - 1] [i_8] [(unsigned char)2] [i_8 + 2]))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) <= (var_8))))))) : (((/* implicit */short) ((((((((/* implicit */int) ((signed char) arr_23 [i_2] [i_8 - 1] [i_8] [(unsigned char)2] [i_8 + 2]))) - (2147483647))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) <= (var_8)))))));
                        }
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_3])) + (((/* implicit */int) arr_1 [i_3]))));
                            var_21 = ((/* implicit */unsigned char) ((arr_10 [i_2] [i_2 + 2] [i_5 + 1]) - (arr_10 [i_2 - 3] [i_2 + 1] [i_5 - 1])));
                            arr_29 [i_2] [i_3] [i_2] [i_5] [i_9] = ((/* implicit */unsigned long long int) (((-(2561885387U))) ^ (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15543))) : (arr_7 [i_2])))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9944274402432574868ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_22 [i_2 - 3] [i_3] [i_4] [i_5] [i_3])))))))));
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2]))));
                        }
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_27 [i_2] [i_5] [i_4] [i_5] [(_Bool)1] [(signed char)8] [i_5 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(unsigned char)3] [i_2] [i_5 + 1] [i_5]))) : (arr_2 [i_2])));
                    }
                    for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)219))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_34 [i_2] [i_2] [(short)2] [i_10 - 1] [i_11] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_3 [i_2 - 2])))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 6298082246048127454LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) : (arr_23 [i_2] [i_3] [i_4] [i_10] [i_11])))))));
                            var_26 = ((/* implicit */short) ((((((/* implicit */int) arr_17 [(signed char)7] [i_11] [i_11] [i_11] [i_11] [i_10 - 1])) & (((/* implicit */int) arr_17 [i_11] [i_11] [i_11] [i_11] [i_11] [i_10 - 1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_11] [i_11] [i_11] [i_10] [10LL] [i_10 - 1])))))));
                            var_27 *= ((/* implicit */unsigned char) (+(arr_2 [i_2])));
                        }
                    }
                    var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)15543)) ? (((((/* implicit */_Bool) arr_2 [(short)5])) ? (((/* implicit */int) arr_31 [i_2 + 1] [i_2] [i_2] [i_2] [i_4] [i_4])) : (((/* implicit */int) arr_24 [i_2] [4ULL] [i_3] [i_4])))) : (((/* implicit */int) arr_0 [i_2 - 3] [i_2 - 2]))))));
                }
            } 
        } 
    } 
}
