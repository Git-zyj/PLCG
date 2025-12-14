/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123543
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) (signed char)-6);
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1]);
                                var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (min((((((/* implicit */_Bool) arr_10 [4U] [i_1] [1U])) ? (var_6) : (((/* implicit */int) var_16)))), (var_6)))));
                                arr_14 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned char) arr_1 [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        var_20 = ((/* implicit */long long int) (-(arr_17 [i_5] [i_5])));
        var_21 += ((/* implicit */short) arr_17 [i_5] [i_5]);
    }
    for (signed char i_6 = 2; i_6 < 17; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_20 [i_6 - 2] [i_6 - 2])), (min(((~(arr_22 [i_6]))), (((/* implicit */unsigned long long int) 542904269))))));
                    arr_28 [i_6] = var_4;
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (signed char i_10 = 1; i_10 < 18; i_10 += 1) 
                        {
                            {
                                arr_33 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 + 2] [i_6] [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)11)) | (((/* implicit */int) arr_26 [i_6] [i_7] [i_7] [i_7])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_6] [i_10 - 1])))))));
                                arr_34 [i_6] [i_9] [i_8] [i_7] [i_6] = ((((/* implicit */_Bool) (unsigned char)106)) ? (min((8502032055514138176LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))));
                                var_23 &= ((/* implicit */unsigned short) var_5);
                                arr_35 [i_10] [i_6] [i_6] [i_7] [i_6 - 1] = ((/* implicit */int) ((arr_22 [11U]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6])))));
                                var_24 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_22 [i_6]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 17; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) (+(min((arr_24 [i_6] [i_6]), (((/* implicit */unsigned int) (short)-11767))))));
                                var_26 = ((/* implicit */unsigned long long int) arr_27 [i_12] [i_11]);
                                arr_41 [i_6] [i_6] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-11)) && (((/* implicit */_Bool) var_1))))), ((-(arr_25 [i_8] [i_11] [i_12]))))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_12])) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_38 [8U] [8U] [i_7] [8U] [i_11] [i_12])))))))));
                                arr_42 [i_6] [i_7] [i_8] [i_8] [i_6] [i_12] = ((/* implicit */signed char) (~((~(162203849)))));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_27 [i_11 + 1] [i_11 - 1])) : ((((-(var_7))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)15799))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_43 [i_6] = ((/* implicit */unsigned int) max((var_0), (((/* implicit */short) max((arr_26 [i_6] [i_6 + 2] [i_6] [i_6 - 2]), (arr_26 [i_6] [i_6] [i_6] [i_6]))))));
    }
}
