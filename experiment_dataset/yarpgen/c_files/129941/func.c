/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129941
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
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((unsigned char) ((int) ((((/* implicit */_Bool) (short)27298)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)0] [i_0 + 3]))) : (var_1)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_2])) - (((/* implicit */int) arr_1 [i_1 - 1]))))) : (((((/* implicit */_Bool) (short)22289)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1]))) : (var_1))))))));
                                var_18 |= ((/* implicit */long long int) var_12);
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_0 + 2] [i_0 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114)))))) ? (((((long long int) (_Bool)0)) - (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0 - 1] [(short)9] [i_3] [i_3]) <= (arr_8 [i_0] [i_1] [i_0] [i_3] [i_4]))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_20 = ((/* implicit */unsigned short) var_0);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 3]))));
                                var_22 = ((/* implicit */_Bool) (signed char)0);
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [1U] [i_1 - 2] [i_2] [i_3] [i_5])) ? (1224184781U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_0 - 1] [i_3] [i_5]))))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_5])) ? ((-(((/* implicit */int) (signed char)-1)))) : (((((/* implicit */int) (short)6847)) / (arr_2 [i_0] [i_0])))));
                            }
                            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                            {
                                var_25 = ((/* implicit */signed char) var_11);
                                var_26 &= ((/* implicit */_Bool) var_4);
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                            {
                                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((long long int) ((arr_3 [i_1] [i_1 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
                                arr_21 [i_0] = ((/* implicit */short) var_2);
                            }
                            var_28 = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 1; i_8 < 22; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) arr_25 [i_8 + 1] [i_9]);
                    arr_32 [i_9] = ((short) (+(((/* implicit */int) arr_22 [i_8 + 1]))));
                }
                for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_12 = 2; i_12 < 20; i_12 += 4) 
                    {
                        var_30 += ((/* implicit */signed char) var_13);
                        var_31 = ((/* implicit */short) ((unsigned long long int) var_6));
                    }
                    var_32 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_36 [i_8 + 1] [(unsigned short)2]))));
                }
                for (unsigned int i_13 = 2; i_13 < 21; i_13 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            {
                                var_33 = ((((/* implicit */int) arr_27 [i_8] [i_8])) - (((/* implicit */int) max((((/* implicit */short) arr_40 [i_9] [i_9])), (arr_35 [i_13 - 1] [i_8 - 1])))));
                                arr_49 [i_13] [i_14] [i_15] &= ((/* implicit */int) arr_48 [i_8 + 1] [i_8 + 1] [i_15]);
                                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)49)) >> (((((/* implicit */int) (unsigned char)146)) - (123))))) >> (((((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned short)26605)))) - (26467)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-11))));
                                var_35 ^= ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (short)-6832)) : (((/* implicit */int) (unsigned char)187))))))));
                            }
                        } 
                    } 
                    arr_50 [(short)15] [i_9] [i_9] [i_8] = ((/* implicit */int) max((((/* implicit */short) max((((/* implicit */unsigned char) (signed char)-90)), (arr_22 [i_9])))), (max((var_15), (((/* implicit */short) var_5))))));
                }
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((var_0), (((/* implicit */int) var_6))))) - (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_25 [i_9] [(short)21]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_8] [i_9] [i_9]))))) ? (max((((/* implicit */int) (signed char)126)), (var_8))) : (((/* implicit */int) min((var_13), ((short)6847)))))) : ((~(((/* implicit */int) arr_47 [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1] [i_9]))))));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) (unsigned short)22500)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
}
