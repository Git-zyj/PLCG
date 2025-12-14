/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165104
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((arr_9 [i_3 - 2] [i_3 - 3] [i_3 + 1] [10] [i_3 - 3] [i_3 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 - 1])))));
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [11])) ? (var_3) : (arr_0 [(unsigned short)10] [i_1])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((unsigned short) arr_6 [i_3 - 3] [i_1] [i_1] [i_0])))));
                        var_13 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3])))))));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~((+(var_6))))))));
                        /* LoopSeq 4 */
                        for (short i_4 = 2; i_4 < 12; i_4 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */long long int) arr_12 [i_4] [i_4 - 2] [i_4] [i_4 - 2] [i_4] [10] [i_4]);
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3 + 2] [i_2])) ? (arr_7 [i_3 - 2] [i_4 - 1] [i_4 - 2] [10]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 + 1])))));
                            var_17 -= ((/* implicit */unsigned short) var_7);
                            var_18 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2)))) ? (var_7) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) var_5))))));
                        }
                        for (short i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0] = ((/* implicit */short) arr_17 [(unsigned char)8] [(unsigned short)6] [i_5 + 1] [i_5 + 1] [i_3 + 1]);
                            arr_19 [i_1] [9] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_2] [i_5] [i_5 + 1] [i_5 + 1] [i_3 + 2] [i_3 - 2] [i_2]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [7] [i_1] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3 - 3] [i_3 + 2] [i_3 - 1] [1] [i_3 + 2] [1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_3 - 1] [i_3 - 2] [5ULL] [i_3 + 1]))) : (arr_16 [i_0] [i_3 + 2] [i_3 - 2] [i_3] [i_3 - 2] [i_3])));
                            arr_23 [i_0] = ((/* implicit */unsigned short) (+(arr_16 [i_3 + 2] [i_3] [5] [i_3 - 2] [i_3 - 2] [i_6])));
                        }
                        for (int i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */int) (~(arr_9 [(unsigned char)12] [i_7 + 4] [i_3 + 1] [(_Bool)1] [i_3 + 2] [i_3 + 2])));
                            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_3 + 1] [i_7 + 2]))));
                            arr_26 [i_0] [(signed char)7] [i_2] [i_3 + 1] [i_3 + 1] [i_7 + 3] [i_7 + 3] = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [(unsigned char)2] [(unsigned char)2] [i_7] [i_7 + 1]);
                        }
                    }
                    for (unsigned int i_8 = 3; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        arr_29 [i_1] |= ((/* implicit */int) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) <= (((/* implicit */int) arr_17 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 2] [i_8 + 1])))));
                        var_21 |= ((/* implicit */long long int) ((arr_16 [i_0] [i_0] [i_1] [i_0] [6LL] [6U]) >= (((/* implicit */unsigned long long int) (-(2147483647))))));
                        arr_30 [i_8] [i_8] = ((((/* implicit */_Bool) ((arr_16 [i_8 + 2] [i_8 - 3] [i_8 - 2] [i_8 - 2] [i_8 - 3] [i_8 - 3]) - (arr_16 [i_8 - 1] [i_8] [(short)1] [i_8 + 2] [i_8 - 3] [i_2])))) || (((/* implicit */_Bool) var_8)));
                        var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((max((var_3), (((/* implicit */unsigned long long int) arr_15 [i_8] [i_8])))) | (arr_28 [i_8] [i_8 - 1] [i_8 + 1] [i_0]))))));
                    }
                    for (unsigned int i_9 = 3; i_9 < 11; i_9 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_17 [i_1] [i_9 + 1] [6] [i_1] [6]))));
                        var_24 = ((/* implicit */unsigned int) arr_21 [i_9 + 2]);
                        var_25 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1] [(unsigned char)6] [4ULL] [i_2] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_9 + 1]))) : (arr_9 [i_2] [7U] [i_2] [i_9] [i_0] [i_2]))))))));
                        var_26 = ((/* implicit */unsigned short) ((short) ((int) min((var_9), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_1] [(unsigned char)4] [i_1]))))));
                    }
                    for (unsigned char i_10 = 3; i_10 < 12; i_10 += 1) 
                    {
                        arr_36 [i_0] [(unsigned short)11] [i_2] [i_10 - 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / ((+(arr_28 [i_10 - 3] [i_10 - 3] [i_10 - 1] [i_10 - 2])))));
                        var_27 = ((/* implicit */unsigned char) min((var_7), (min((((/* implicit */int) ((short) arr_4 [8]))), (arr_27 [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10])))));
                    }
                    var_28 = (((!(arr_14 [i_0] [i_0] [i_0] [0ULL] [i_1]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_2] [i_0])) || (((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_1] [i_1]))))), (var_0)))) : (((unsigned long long int) ((arr_15 [i_1] [i_2]) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_2])) : (var_6)))));
                    arr_37 [i_0] [(unsigned char)2] [(unsigned char)2] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_2 [i_0])))))) << ((((+((+(((/* implicit */int) arr_13 [i_2] [12ULL] [12ULL] [i_2] [i_1] [i_1] [i_2])))))) - (38698)))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_11);
    var_30 |= ((/* implicit */unsigned long long int) var_2);
}
