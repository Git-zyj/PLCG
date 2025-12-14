/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171649
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
    var_13 = ((/* implicit */long long int) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_4))));
    var_14 &= ((/* implicit */unsigned char) var_12);
    var_15 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3])) ? (arr_3 [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_2]) + (((/* implicit */int) var_5))))))))) : (min((((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_3 [i_0] [i_1]))), (((/* implicit */long long int) (signed char)7))))));
                        var_17 ^= (-(((/* implicit */int) (_Bool)1)));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) (signed char)0);
                            arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned int) ((_Bool) var_4));
                            arr_14 [i_0] = ((/* implicit */unsigned short) arr_2 [i_2]);
                        }
                        arr_15 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_0] [i_0]);
                        var_19 = ((/* implicit */unsigned int) max((var_19), ((((!(((/* implicit */_Bool) arr_2 [i_2 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_2 - 2])))) : ((+(arr_2 [i_2 + 1])))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) (signed char)-81);
                        arr_18 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]))))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_16 [i_5] [i_2 - 1] [i_1] [i_1] [i_0]))))))) : (((((/* implicit */_Bool) arr_12 [i_2 - 1])) ? ((+(arr_2 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)24))))))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_5]);
                        arr_20 [i_0] [i_1] [i_2] [i_5] = arr_11 [i_0] [i_1] [i_2] [i_2] [i_5];
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2 - 1])) ? (arr_12 [i_2 + 1]) : (arr_12 [i_2 - 2])));
                        arr_23 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 290151719U)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) arr_7 [i_2 - 2] [i_2] [i_2] [i_2]))));
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                    {
                        var_22 -= ((/* implicit */long long int) min((((/* implicit */int) var_5)), (((int) (((_Bool)1) ? (195459305U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_23 -= ((/* implicit */unsigned char) arr_24 [i_7] [i_1] [i_7] [i_7] [i_1] [i_2]);
                        var_24 = (-(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_2] [i_0] [i_1] [i_7] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_7]))))) : (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_2 - 2] [i_2 - 2])))));
                    }
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                    {
                        var_25 *= ((/* implicit */int) ((unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (2147483635) : (((/* implicit */int) arr_30 [i_0] [i_2 + 1] [i_8])))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_2] [i_8]))))))));
                        arr_31 [i_0] [i_1] [i_2] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (arr_22 [i_0] [i_2 - 1] [i_2] [i_2 - 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_6 [i_2 - 1])))) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2 - 1])) : (arr_6 [i_2 - 1])));
                }
            } 
        } 
    } 
}
