/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100644
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
    var_13 = ((/* implicit */signed char) ((unsigned int) min(((short)589), ((short)582))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) (short)580);
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
        var_16 = ((/* implicit */long long int) (short)570);
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    var_17 = ((/* implicit */short) arr_7 [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [(unsigned char)1])) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((short) arr_2 [i_3] [i_2]))))) < ((~((~(((/* implicit */int) var_10)))))))))));
                                arr_17 [(unsigned short)4] [i_5] [(unsigned char)8] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) arr_4 [i_3]);
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-571)) * (((/* implicit */int) (short)589))))) ? (((/* implicit */int) (short)587)) : (((/* implicit */int) (short)-571)))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [i_1] [i_1] [i_1] [i_1]), (arr_11 [i_3] [i_2] [i_1])))) && (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) (short)-571))))));
                }
                for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_20 |= ((/* implicit */unsigned char) arr_7 [i_6]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) arr_4 [i_7]))));
                        arr_23 [i_1] [i_1] [i_2] [i_6] [i_6] [i_7] = ((/* implicit */long long int) (short)570);
                        arr_24 [i_7] [(unsigned char)8] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (short)582)) : (((/* implicit */int) arr_19 [i_1] [1U]))))) ? (((/* implicit */int) (short)-577)) : (((/* implicit */int) (short)570))));
                        arr_25 [12LL] [3LL] [(signed char)9] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)578))))) < (arr_21 [i_7] [i_1])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 3) 
                    {
                        var_22 |= ((/* implicit */unsigned short) arr_28 [i_1] [(unsigned char)0]);
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_13 [i_8] [i_6] [i_2] [i_1]))));
                        arr_29 [i_1] [1LL] [i_6] [i_8 - 3] [(unsigned short)8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_6] [i_6] [i_8] [i_8 - 4] [i_8 - 4]))));
                        arr_30 [i_1] [i_2] [i_8] [i_8 - 3] = ((/* implicit */short) (~(((/* implicit */int) arr_14 [(unsigned char)7] [i_2] [6ULL] [6U] [i_2]))));
                    }
                    for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 2) 
                    {
                        arr_33 [i_1] [i_2] [i_9] = arr_1 [i_1] [8LL];
                        arr_34 [i_2] [i_2] [i_6] [i_9] [i_6] [i_1] = ((/* implicit */int) arr_11 [i_9] [i_6] [4LL]);
                    }
                }
                for (signed char i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_21 [i_1] [5]) == (((/* implicit */long long int) ((/* implicit */int) (short)578)))))), ((~(var_1)))))) ? (var_7) : (max((((/* implicit */long long int) var_3)), (max((arr_10 [i_1] [i_2] [i_10 - 1] [i_2]), (((/* implicit */long long int) (short)-571)))))))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_1] [(unsigned short)10])) > (((/* implicit */int) (short)589)))))));
                    arr_38 [i_1] [i_2] [i_10] [2ULL] = ((/* implicit */unsigned char) ((max(((-(arr_0 [i_10 + 2]))), (((/* implicit */unsigned long long int) (short)-578)))) + (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) (short)-597)), (arr_4 [2])))), ((-(((/* implicit */int) var_0)))))))));
                }
                arr_39 [i_1] [i_1] [i_2] = max((((((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((unsigned short) arr_37 [(unsigned short)1] [i_2]))))), (((/* implicit */int) arr_14 [(signed char)8] [i_2] [11LL] [i_2] [i_2])));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
                            {
                                arr_48 [i_1] [11LL] [i_11 + 3] [(unsigned char)9] [i_13] [(unsigned char)4] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_43 [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 4]))))));
                                var_26 = ((/* implicit */unsigned long long int) (+((-(max((((/* implicit */long long int) arr_14 [i_1] [5LL] [i_11 - 1] [i_12] [i_2])), (arr_28 [i_12] [9LL])))))));
                            }
                            arr_49 [3LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_11 + 3])) ? ((~(max((arr_21 [i_12] [(unsigned short)5]), (((/* implicit */long long int) var_2)))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_47 [i_11 + 2] [i_11 - 1] [i_11] [i_1] [5]) > (arr_47 [i_12] [i_11 + 3] [i_11] [(unsigned char)7] [i_1])))))));
                            var_27 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)590))) : (arr_35 [i_2] [i_2] [i_2]))) * (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))), (((/* implicit */long long int) arr_44 [i_12] [i_11] [i_2] [i_1]))));
                            var_28 = ((/* implicit */int) min((arr_0 [i_1]), ((+(arr_47 [i_12] [i_12] [(unsigned char)7] [i_2] [i_1])))));
                            arr_50 [i_1] [i_1] [i_1] [(unsigned char)11] [4ULL] = ((/* implicit */unsigned short) arr_40 [(_Bool)1] [i_2] [(unsigned short)1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */int) var_9);
    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))))));
}
