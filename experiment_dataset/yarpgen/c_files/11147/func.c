/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11147
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
    var_13 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_5)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */int) (short)32764)) >= (((/* implicit */int) (_Bool)1))));
                                var_15 -= min((((/* implicit */short) var_9)), (arr_13 [i_0] [(unsigned char)8] [i_2 + 2] [i_3] [i_4]));
                                arr_14 [i_0] [i_2] [i_2] [i_1] [i_4 + 1] &= ((/* implicit */int) (-((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [6U] [i_2] [i_3] [i_4])) : (var_6)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                arr_23 [i_5] = ((/* implicit */unsigned int) ((var_2) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_5] [i_6] [i_7])))));
                                var_16 ^= ((/* implicit */short) (+(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) arr_17 [i_5] [i_5] [(short)1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))));
                }
                for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 3; i_9 < 24; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_8] = ((/* implicit */int) arr_0 [i_9 - 1] [9]);
                                arr_33 [i_10] = ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                    arr_34 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_1]) | (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0]))))) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))) : (max((var_6), (((/* implicit */unsigned long long int) max((arr_11 [i_1] [i_0]), (((/* implicit */int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */int) var_0);
                }
                for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    arr_37 [i_0] &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [(unsigned char)8])), (var_8)))) ? (((/* implicit */long long int) (((_Bool)1) ? (arr_26 [i_11] [i_11] [i_11] [i_1] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_11] [i_11] [i_11])))))) : (((((/* implicit */_Bool) var_5)) ? (arr_4 [(unsigned char)8] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_0] [i_1])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32764)) ? (1982310738208050670ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4)))));
                        var_21 = ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_8)));
                        /* LoopSeq 2 */
                        for (short i_13 = 3; i_13 < 23; i_13 += 1) 
                        {
                            arr_45 [i_0] [i_1] [i_1] [i_11] [i_12] [i_12] [i_13] = ((/* implicit */short) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_41 [i_13 + 1] [i_13 + 2] [i_13 - 2] [i_13 - 2] [i_13])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)142)) >= (((/* implicit */int) (unsigned char)251)))))));
                            var_22 = ((/* implicit */long long int) var_6);
                        }
                        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_11] [i_12] [i_14])))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_14] [i_12] [i_11] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_14] [i_1] [i_14])))) : ((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_11] [i_12] [i_11]))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)26), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((var_3), ((unsigned char)31)))) : ((-(((/* implicit */int) arr_27 [i_0] [i_0] [i_11] [i_12] [i_14])))))) : (((/* implicit */int) ((((/* implicit */int) arr_42 [i_14] [i_12] [i_11] [i_11] [i_1] [i_0])) < ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_12]))))))))))));
                            var_25 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_28 [i_1] [3ULL])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_28 [i_1] [i_0])) : (((/* implicit */int) arr_41 [i_0] [i_1] [i_11] [i_12] [i_14])))))))));
                            var_26 += ((/* implicit */short) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) arr_46 [i_0] [i_0] [i_0])) : (min((((/* implicit */unsigned long long int) (unsigned char)170)), (var_4))))), (((/* implicit */unsigned long long int) (short)-17817))));
                        }
                    }
                }
            }
        } 
    } 
}
