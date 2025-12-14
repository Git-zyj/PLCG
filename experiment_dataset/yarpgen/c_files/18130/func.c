/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18130
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_1])));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (2147483647)))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1])))) : (((/* implicit */int) max((arr_0 [i_1 + 2]), (arr_0 [i_1 + 1])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) arr_6 [i_1] [i_1 - 2] [i_2]);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_3] [i_2] [i_1 - 1]);
                        arr_10 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1 + 2] [i_2] [i_3]);
                        var_19 = ((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) var_9))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1 + 2] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_2] [0LL])) : (((/* implicit */int) arr_3 [i_3] [i_2] [i_0]))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) ((_Bool) 1938318659U))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    }
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((unsigned long long int) 2147483647)) << (((long long int) arr_2 [i_0] [i_1 + 1]))));
                    arr_12 [i_0] [i_0] = arr_5 [i_2] [i_1 + 2] [i_2];
                    arr_13 [3] [i_1 - 2] [i_1] [i_2] = ((/* implicit */short) ((((unsigned int) arr_3 [i_0] [i_0] [i_0])) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483635)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_2])) : (((/* implicit */int) arr_8 [i_1 + 3] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 2])))))));
                }
                for (short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0]))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((arr_4 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_14 [i_0])))))));
                    var_24 = arr_6 [i_4] [i_1 + 1] [14U];
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (short)32767))));
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_7])) ? (var_7) : (((((/* implicit */_Bool) 2356648639U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))))))));
                                arr_24 [16] [11U] [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_7] [i_1] [i_5] [i_6] [i_7])) < (((/* implicit */int) (_Bool)1)))) ? (arr_19 [i_0] [i_1 + 3] [i_5] [i_6] [i_7]) : (((/* implicit */int) ((unsigned short) arr_15 [i_6] [i_5])))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)1] [i_7])) ? (((((/* implicit */_Bool) arr_23 [(signed char)13] [i_7])) ? (arr_23 [i_0] [15]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_5] [i_0]))))) : (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)12] [i_5])))))));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (3976990844U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 4; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((317976451U) >> (((2147483647) - (2147483647))))))));
                                var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_8 - 1] [i_1 + 3] [i_0])) ? (((/* implicit */int) arr_29 [i_9] [i_8 - 1] [i_8 - 1] [i_1 + 3] [i_0])) : (((/* implicit */int) arr_29 [i_8] [i_8] [i_8 - 1] [i_1 + 3] [i_0]))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_33 [i_10] [i_0] [4LL] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [i_10] [i_10] [i_10] [i_0])) <= (((/* implicit */int) arr_20 [i_0] [i_0] [i_0])))) ? (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_16 [i_0] [i_1] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [i_10] [i_10] [i_1 + 2] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_10])) < (((/* implicit */int) arr_25 [i_10] [i_10] [i_10] [i_10]))))))));
                    var_31 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */int) arr_29 [i_10] [i_1] [i_10] [i_0] [i_10])) % (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])))), ((~(2147483647))))), (((/* implicit */int) ((short) arr_0 [i_1 + 1])))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_11 = 1; i_11 < 15; i_11 += 2) 
    {
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
        {
            {
                var_32 = ((/* implicit */int) arr_28 [i_11 - 1] [i_11] [i_12] [i_12]);
                var_33 = ((_Bool) min((arr_26 [i_11 - 1] [(signed char)22] [i_12] [i_11 - 1]), (arr_26 [i_11 + 1] [i_12] [i_12] [i_11 + 1])));
                var_34 *= ((/* implicit */unsigned short) ((arr_32 [i_11 + 1] [i_11 - 1] [i_11 + 2] [i_11 - 1]) < (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [i_12]))))), (arr_35 [i_11 + 2]))))));
            }
        } 
    } 
    var_35 = var_13;
}
