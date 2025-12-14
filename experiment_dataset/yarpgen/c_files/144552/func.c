/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144552
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) min((var_2), (((/* implicit */short) (_Bool)1)))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
        arr_3 [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0])))) - (arr_2 [i_0])));
        var_12 = ((/* implicit */long long int) min((((arr_2 [i_0]) + (arr_2 [i_0]))), (((/* implicit */unsigned long long int) min(((+(var_0))), (((/* implicit */int) ((signed char) arr_1 [i_0]))))))));
        var_13 = ((/* implicit */signed char) ((int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_2 [i_0]))) << (((/* implicit */int) arr_1 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((long long int) arr_4 [i_1]));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_0 [i_1]))) & (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) -1282876577))))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned short) arr_7 [i_3] [i_2] [i_3])))));
                var_17 = arr_1 [21LL];
                arr_11 [i_1] [i_1] [i_2] [(short)5] = ((/* implicit */short) (-(((unsigned long long int) arr_2 [(short)6]))));
            }
            for (int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                arr_15 [i_4] [i_2] [i_4] = ((/* implicit */long long int) arr_1 [i_1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1] [i_5])) && (((/* implicit */_Bool) (unsigned short)19187))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5])) && (((/* implicit */_Bool) arr_1 [i_2]))));
                        arr_21 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_8 [i_1] [i_2] [i_5] [i_6]))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1] [i_2] [i_4] [(unsigned short)11] [i_6])) || (arr_17 [i_2]))))));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_1] [i_2] [i_4] [i_7] [i_2] [i_1]))));
                    var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [i_7] [i_4] [i_1] [i_1])))) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_4] [i_1] [(short)4])) && (((/* implicit */_Bool) arr_14 [i_1] [11ULL] [i_4] [i_7])))))));
                }
                arr_25 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_4])) ? (arr_20 [i_4] [i_2] [i_2] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9)))))))) || (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_14 [i_4] [i_1] [(unsigned char)0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)42881)))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 1) 
            {
                var_22 = ((arr_20 [i_8 + 2] [i_8] [i_8] [i_8 + 2] [i_1]) < (arr_20 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_1]));
                var_23 += ((/* implicit */short) ((((((/* implicit */long long int) arr_14 [i_1] [i_2] [i_2] [9LL])) ^ (var_9))) - (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_1] [i_1] [i_8 - 1] [i_8 + 2])) & (((/* implicit */int) (_Bool)1)))))));
                var_24 = ((/* implicit */long long int) arr_9 [i_1] [i_2] [i_8] [i_2]);
            }
            for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) -2725018199510750264LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (arr_2 [(unsigned char)5])))))))));
                arr_32 [i_9] [i_2] [i_9] [5ULL] = ((/* implicit */signed char) min((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == ((-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)15)) - (((/* implicit */int) var_1))))) : (((long long int) arr_20 [i_1] [i_2] [i_9] [i_2] [i_9])))), (((/* implicit */long long int) min((arr_22 [i_1] [i_2] [i_9] [i_1]), (((/* implicit */unsigned int) ((arr_12 [i_9] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2725018199510750279LL))));
                    var_27 = ((/* implicit */unsigned short) (+(arr_14 [i_2] [(unsigned char)14] [i_2] [i_11])));
                    var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) ((signed char) arr_31 [i_1] [i_2] [i_10] [i_11]))) : (((/* implicit */int) (_Bool)1))));
                    var_29 *= ((/* implicit */short) var_8);
                }
                for (long long int i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned int) ((signed char) arr_2 [i_2]));
                    arr_41 [i_1] [i_2] [i_1] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_23 [11U] [i_2] [11U] [i_10] [i_2])) && (((/* implicit */_Bool) arr_5 [i_1])))) ? (2725018199510750279LL) : (var_9)));
                }
                for (long long int i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
                {
                    var_31 -= ((((/* implicit */int) arr_9 [i_1] [i_2] [i_10] [i_13])) - (((/* implicit */int) var_7)));
                    arr_44 [i_2] [(unsigned short)4] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_10] [i_13])) ? (((((/* implicit */_Bool) arr_37 [2ULL] [i_2])) ? (((/* implicit */unsigned int) var_0)) : (arr_26 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                    arr_45 [15LL] [i_10] [i_10] [i_10] [i_2] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_1] [i_2] [i_10])) ? (((/* implicit */int) var_1)) : (arr_34 [i_13] [i_1] [i_1])));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_1] [i_2] [i_15] [i_14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))));
                            arr_52 [i_1] [i_1] [i_10] [i_10] [(short)7] [i_1] [i_10] = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned long long int) arr_31 [i_1] [i_1] [i_1] [i_2]);
            }
        }
    }
}
