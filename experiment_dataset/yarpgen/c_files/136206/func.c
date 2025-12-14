/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136206
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 1])) ? (((/* implicit */int) var_3)) : (arr_1 [i_0]))) * (((/* implicit */int) ((signed char) arr_3 [i_0] [i_1]))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0 + 2]), (((/* implicit */int) arr_2 [i_0]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_16)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0]) - (((/* implicit */long long int) ((((/* implicit */int) arr_7 [2U])) + (arr_5 [i_0] [i_0]))))))) && (((/* implicit */_Bool) arr_6 [i_0]))));
                            /* LoopSeq 4 */
                            for (signed char i_4 = 3; i_4 < 15; i_4 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_4 [i_0 - 1] [i_2 + 1]))) ? (arr_4 [i_0 - 1] [i_2 + 1]) : (max((arr_4 [i_0 + 3] [i_2 + 1]), (arr_4 [i_0 + 1] [i_2 - 1])))));
                                var_24 = ((/* implicit */_Bool) arr_10 [i_0]);
                                var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_3 + 3])) ? (((long long int) var_19)) : (((/* implicit */long long int) max((arr_5 [i_0] [(_Bool)1]), (var_2)))))), (((/* implicit */long long int) (-(((((/* implicit */int) var_3)) >> (((var_14) - (14425915291087846418ULL))))))))));
                            }
                            for (signed char i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
                            {
                                var_26 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_2])) : (((/* implicit */int) arr_7 [i_3 + 3])))), (((/* implicit */int) arr_15 [i_5] [i_5 + 2] [i_5] [i_0] [i_5])))), (((/* implicit */int) arr_15 [i_2] [i_0] [i_2 + 1] [i_0] [i_0 - 1]))));
                                var_27 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2 + 2] [i_1] [i_2] [i_0 - 3] [i_5] [i_2])) == (((/* implicit */int) arr_12 [i_2 - 1] [8U] [i_2] [i_0 - 2] [i_5 + 1] [i_3]))))), (min((((/* implicit */unsigned int) arr_12 [i_2 + 3] [i_1] [i_1] [i_0 - 1] [i_5] [i_2 + 3])), (var_18)))));
                            }
                            for (signed char i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
                            {
                                var_28 = ((/* implicit */int) arr_0 [i_0]);
                                var_29 = ((max((((/* implicit */int) arr_17 [i_0] [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0] [i_0])), (arr_16 [i_0] [i_0] [i_0] [i_0]))) & (((/* implicit */int) var_1)));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 4; i_7 < 14; i_7 += 1) 
                            {
                                var_30 = ((/* implicit */short) var_9);
                                var_31 = ((int) ((short) arr_13 [(short)12] [(short)12] [i_2] [i_2] [9LL] [i_2] [(short)12]));
                            }
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_13)) : (arr_5 [i_0 + 1] [i_0]))), (max((((/* implicit */int) var_5)), (arr_5 [i_0 + 1] [(signed char)11])))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_22 [i_8] [i_8] = ((/* implicit */long long int) ((var_11) ^ (((/* implicit */int) arr_21 [i_8]))));
        arr_23 [i_8] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_20 [i_8])) ? (arr_20 [i_8]) : (arr_20 [i_8]))), (((((unsigned int) var_17)) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (var_15))))))));
        var_34 = ((/* implicit */unsigned short) var_6);
        arr_24 [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((var_7), (var_7)))))) != (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (arr_20 [i_8])))) ? (arr_20 [i_8]) : (arr_20 [i_8])))));
    }
    var_35 = ((unsigned long long int) ((var_7) | (((/* implicit */int) ((short) var_3)))));
}
