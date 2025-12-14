/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155982
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
    var_10 = ((/* implicit */unsigned short) var_9);
    var_11 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) 4294950912U)), (-7590377390804398500LL)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) arr_0 [i_0]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_13 ^= (+(((/* implicit */int) ((((/* implicit */_Bool) (short)4568)) && (((/* implicit */_Bool) (signed char)28))))));
                        var_14 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_8)) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) arr_0 [i_3]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0]))) | (arr_5 [0LL] [i_3] [i_2] [i_3])))))));
                        var_15 = 9223372036854775807LL;
                        arr_8 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) var_1)))));
                    }
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_0 + 1] [i_2 + 1] [i_1 - 1] [i_2] [i_1])), (var_1)))), ((+(((/* implicit */int) arr_9 [i_4] [i_0] [i_1 + 1]))))));
                        arr_11 [i_0 - 1] [i_4] [i_2] [(short)12] [i_4] &= ((/* implicit */short) (~(arr_10 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                        var_17 = ((/* implicit */_Bool) min(((short)8188), ((short)4560)));
                    }
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_0 - 1] [i_1 - 1] [i_0 + 1] [i_1 + 1])) + (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0)));
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2])) != (var_9)));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_21 [i_5] [(unsigned char)14] [i_5] |= ((/* implicit */long long int) min((16384U), (((/* implicit */unsigned int) ((signed char) var_8)))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)4560)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294950912U)));
                    }
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        arr_26 [i_7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((((((/* implicit */unsigned long long int) var_4)) ^ (arr_25 [i_7] [i_5] [i_0] [i_1] [i_0]))) - (((/* implicit */unsigned long long int) ((long long int) (short)-11705)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_20 ^= ((/* implicit */short) ((unsigned int) arr_13 [i_0 - 1] [i_1] [i_5 + 1] [i_8]));
                            var_21 = ((/* implicit */_Bool) arr_25 [i_0 - 1] [i_1 + 1] [i_0] [i_5 + 1] [i_5 + 1]);
                            var_22 &= ((/* implicit */_Bool) 1024699136);
                        }
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) >= (arr_2 [i_0] [i_0])));
                    }
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        arr_32 [i_0] [i_1 - 1] [i_0] [0U] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_9 [i_1 - 1] [i_0] [i_0 - 1]), ((unsigned short)11181)))) * (((/* implicit */int) arr_24 [i_1] [i_1 + 1] [i_1] [i_9] [i_1] [i_1]))));
                        arr_33 [i_0 - 1] [i_0] = arr_9 [i_0] [i_0] [i_5];
                    }
                    arr_34 [i_0] [i_1 + 1] [i_1 + 1] [i_5] = ((min((((/* implicit */unsigned int) (signed char)61)), (arr_31 [i_0] [i_0] [i_0]))) << (((arr_22 [i_0] [i_0 + 1] [i_1 + 1] [i_1]) + (1623991110))));
                }
                arr_35 [i_0] = ((/* implicit */short) (~(min((arr_25 [i_1 + 1] [i_1 - 1] [i_0] [i_1 + 1] [i_0 - 1]), (arr_25 [9] [i_1 + 1] [i_0] [9] [i_0 - 1])))));
                arr_36 [i_0] [i_1 + 1] [i_1 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
