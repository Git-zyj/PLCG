/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11949
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_2] [i_0] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2] [i_1 + 1] [i_0]))));
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((int) (short)24421)))));
                    var_12 = ((/* implicit */int) (((_Bool)1) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) 1236709348))));
                    var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 4095))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_14 += ((/* implicit */short) (-(((/* implicit */int) ((short) var_3)))));
                        arr_11 [i_0] [i_1] [5] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_2]);
                    }
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        arr_15 [7] [i_1 + 2] [i_1] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2147483647) : (((/* implicit */int) var_7))))) ? ((-(var_2))) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]))));
                        var_15 = ((/* implicit */unsigned long long int) (-(2147483642)));
                    }
                    for (short i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_5 - 1])) ? (arr_7 [i_1 + 2] [i_5 + 1]) : (((/* implicit */long long int) -1409049152))))));
                            var_17 = ((/* implicit */long long int) ((2147483647) - (((/* implicit */int) (unsigned short)14182))));
                            var_18 = ((/* implicit */short) (-(arr_14 [i_5 - 2] [i_5 - 1])));
                            arr_21 [i_0] [(_Bool)1] [i_1] [i_2] [i_5 - 2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5 - 2] [i_2] [i_2] [i_2] [i_1 - 1])) ? (arr_19 [i_5 - 2] [(signed char)19] [i_5] [i_2] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        }
                        /* LoopSeq 1 */
                        for (int i_7 = 1; i_7 < 20; i_7 += 2) 
                        {
                            arr_25 [i_1 + 1] [i_2] [i_5] = ((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2]);
                            var_19 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)14192)) * (((/* implicit */int) arr_22 [i_2] [(_Bool)1] [i_2] [i_7 + 1] [i_7 - 1]))));
                            var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0] [i_0] [i_0]));
                        }
                        var_21 = ((/* implicit */_Bool) var_4);
                        var_22 = ((/* implicit */unsigned short) ((int) -1236709357));
                    }
                }
            } 
        } 
        var_23 = (-(((((/* implicit */_Bool) 539379497897852097ULL)) ? (-2147483642) : ((-2147483647 - 1)))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            {
                var_24 -= (-(min((((/* implicit */int) arr_28 [i_8] [i_9])), (arr_6 [i_9] [i_9]))));
                arr_32 [3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) min((arr_29 [i_9] [i_9] [i_8]), (((/* implicit */short) var_10))))) : ((-(((/* implicit */int) arr_29 [i_8] [i_8] [i_9]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned short i_11 = 2; i_11 < 10; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            {
                                var_25 += ((/* implicit */_Bool) (-(((int) 149959253U))));
                                var_26 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)));
                                arr_41 [i_8] [i_8] [i_8] [i_8] [(short)3] = ((((/* implicit */_Bool) arr_0 [i_8])) ? (min((((/* implicit */unsigned long long int) ((_Bool) arr_30 [i_12]))), (((unsigned long long int) 4763330487244554021ULL)))) : (((/* implicit */unsigned long long int) (-(2147483647)))));
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(min((arr_38 [i_8] [i_12]), (arr_38 [i_8] [i_12]))))))));
                                var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_0)), (min(((unsigned short)14192), (((/* implicit */unsigned short) (short)-4224))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) max(((-((-(var_2))))), ((-(var_9)))));
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            {
                var_30 *= ((/* implicit */unsigned long long int) 2147483628);
                var_31 = ((/* implicit */signed char) ((arr_44 [i_13]) > ((+((+(4685003039373778388ULL)))))));
            }
        } 
    } 
    var_32 -= ((/* implicit */signed char) (short)10788);
}
