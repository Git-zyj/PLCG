/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162419
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) (-((~(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) & (var_15)))))));
                arr_6 [i_1] = 16376;
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) arr_4 [i_2]);
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    arr_16 [i_3] [(short)0] [i_2] [i_3] = ((/* implicit */unsigned short) var_15);
                    arr_17 [i_3] [5LL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_9 [i_2]))) ? ((~(((/* implicit */int) arr_9 [i_4])))) : (((((/* implicit */_Bool) arr_11 [(unsigned short)20] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_2])) : (((/* implicit */int) arr_14 [i_2]))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_4] [i_3])) < (min(((((_Bool)1) ? (((/* implicit */int) arr_9 [i_2])) : (arr_10 [i_4] [i_2]))), (((/* implicit */int) (_Bool)1)))))))));
                }
                for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_21 = min((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-109)) >= (((/* implicit */int) var_1))))), (max((arr_2 [i_3]), (((/* implicit */unsigned short) var_16))))))), (min((((/* implicit */int) max((arr_2 [i_5]), (((/* implicit */unsigned short) arr_11 [i_5] [i_5]))))), ((~(arr_10 [i_2] [i_3]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_1 [i_5]) && (arr_1 [i_6])))) * (((((/* implicit */int) arr_1 [i_2])) / (((/* implicit */int) (short)-32764))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((arr_18 [i_5] [i_3] [i_5]) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_2])))), ((~(((/* implicit */int) arr_4 [i_2])))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        arr_25 [i_2] [i_2] [i_3] [i_3] [i_2] [i_2] = (_Bool)1;
                        arr_26 [i_2] [i_3] [i_3] [i_7] = (((~(((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_3] [i_2])))))) > (min((((/* implicit */int) arr_24 [i_2] [i_3] [i_2] [i_5] [i_7])), (((((/* implicit */_Bool) (short)-22900)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_7])))))));
                        var_24 = ((/* implicit */unsigned short) arr_24 [i_3] [(_Bool)1] [i_3] [i_3] [(_Bool)1]);
                        var_25 *= ((/* implicit */unsigned short) min((((signed char) arr_23 [i_2] [i_3] [(signed char)2] [i_7] [i_7])), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_2] [(_Bool)1])) >= (((/* implicit */int) arr_18 [i_7] [i_5] [i_2])))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                arr_32 [i_2] [i_5] [(signed char)18] [i_2] [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3])) * (((/* implicit */int) ((short) arr_5 [i_2] [3])))));
                                var_26 = (short)0;
                                arr_33 [(_Bool)1] &= ((/* implicit */_Bool) (((-(((/* implicit */int) arr_22 [i_2] [(signed char)6] [i_2] [i_2] [(short)18])))) * (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) + (arr_19 [i_9] [i_8 - 3] [i_3] [i_3])))))));
                                arr_34 [(short)10] [(_Bool)1] [i_5] [3LL] [i_3] = ((/* implicit */short) (((((~(((/* implicit */int) var_4)))) + (2147483647))) >> ((((~(((/* implicit */int) arr_18 [i_2] [(signed char)6] [(signed char)6])))) + (16)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_39 [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */short) max((max((((arr_1 [i_3]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) arr_37 [(signed char)20] [(signed char)20])))), (((/* implicit */long long int) ((int) arr_5 [i_11 - 1] [i_11 - 1])))));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_10]))))) + (((/* implicit */int) arr_24 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11]))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (signed char i_13 = 1; i_13 < 18; i_13 += 3) 
                    {
                        {
                            var_28 = arr_5 [i_13 + 2] [i_13 + 2];
                            arr_47 [i_2] [i_3] [i_3] [i_12] [i_13] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), ((((!((_Bool)1))) ? (((/* implicit */int) max((arr_29 [i_2]), ((signed char)34)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) (_Bool)1);
}
