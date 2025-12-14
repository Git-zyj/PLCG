/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138824
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
    var_17 = ((/* implicit */short) var_16);
    var_18 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((short) arr_0 [i_0]));
        var_20 += ((/* implicit */signed char) ((int) arr_1 [i_0]));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_22 = ((((/* implicit */_Bool) arr_2 [i_0] [18])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [12LL] [12LL])) > (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_23 -= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_5 [i_0]))));
                    var_24 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_0 [i_1])))));
                    var_25 = ((/* implicit */_Bool) (-(arr_4 [i_0])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [14LL])) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (arr_1 [i_3])))) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) ((unsigned char) arr_0 [i_3]))));
        var_27 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (arr_1 [i_3]) : (((/* implicit */int) arr_3 [i_3] [i_3])))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) (!(arr_0 [i_4])));
        var_29 = ((((/* implicit */int) arr_11 [i_4])) <= (((/* implicit */int) arr_11 [i_4])));
        var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */long long int) arr_9 [i_4])) : (arr_10 [i_4]))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4]))))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) min((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_5] [i_5]))))) & (((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (arr_14 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_5] [i_6]))))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_5] [(short)7])), (((((/* implicit */_Bool) arr_3 [i_5] [i_6])) ? (((/* implicit */int) arr_7 [i_6] [i_5])) : (arr_9 [14LL])))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */short) min(((-(((arr_18 [i_8] [i_8] [i_7 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_6]))) : (arr_12 [i_6]))))), (arr_5 [i_7])));
                                arr_27 [i_6] [(short)12] [i_7] [i_6] [i_6] = ((((/* implicit */_Bool) ((signed char) arr_11 [i_6]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 + 1] [i_6] [i_7]))) ^ (min((arr_14 [i_6]), (((/* implicit */unsigned int) arr_0 [i_9])))))) : (max((min((arr_12 [i_6]), (((/* implicit */unsigned int) arr_15 [i_6])))), (((/* implicit */unsigned int) arr_19 [i_5 - 2] [i_7] [i_5 - 2] [i_9])))));
                                arr_28 [i_5] [i_6] [i_7 - 1] [i_8] [i_6] [i_9] = (+(min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [i_6])), (arr_5 [i_7])))), (((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */long long int) arr_12 [i_6])) : (arr_10 [i_6]))))));
                                var_33 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_12 [i_6]), (((/* implicit */unsigned int) arr_3 [i_5] [i_6]))))), (min((((long long int) 298921907)), (((/* implicit */long long int) max((arr_12 [i_6]), (((/* implicit */unsigned int) arr_16 [i_6])))))))));
                            }
                        } 
                    } 
                } 
                arr_29 [i_5 - 3] [12] |= ((/* implicit */unsigned long long int) ((((unsigned long long int) (signed char)-119)) >= (((/* implicit */unsigned long long int) arr_1 [i_5 - 2]))));
            }
        } 
    } 
    var_34 = ((/* implicit */int) ((var_4) ? (min((var_2), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */short) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
}
