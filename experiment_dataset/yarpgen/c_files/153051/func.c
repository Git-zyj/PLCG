/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153051
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = var_5;
                var_17 = ((/* implicit */unsigned short) 2980135548U);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((short) var_3));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
                {
                    var_19 = ((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9879150472933349341ULL)) ? (arr_15 [i_3] [i_4 - 3] [i_4 - 1]) : (arr_15 [i_3] [i_4 - 3] [i_4 - 1])));
                    var_21 = ((/* implicit */unsigned long long int) 278158247U);
                    arr_16 [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) * (1314831748U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_20 [i_2] [(unsigned char)19] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1096855301))));
                    arr_21 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 193409388)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2980135548U)))) ? (((/* implicit */unsigned int) var_12)) : (arr_19 [i_3])));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */int) var_4);
                        arr_26 [i_2] [i_3] [i_3] [i_6] [i_3] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min(((+(arr_22 [i_3]))), (((/* implicit */long long int) var_13))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) / (14586630694294478150ULL)))) ? (((((/* implicit */_Bool) (short)25370)) ? (arr_18 [i_3] [i_3] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */int) arr_6 [i_2]))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_7 [i_6]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_23 [i_7]))))) : (arr_13 [i_2] [i_2] [i_7]))) : (((/* implicit */unsigned int) ((var_12) * (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_14)) - (19998))))))))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (unsigned char)139)))), (((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) / (((((/* implicit */int) arr_17 [i_3] [i_3] [i_7] [i_8])) - (((/* implicit */int) var_14))))));
                            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */int) var_14)), (var_5)))) ? (((/* implicit */unsigned long long int) (~(278158247U)))) : (arr_9 [i_3] [i_6] [1LL]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_15))))))));
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                        {
                            var_26 = (unsigned short)32713;
                            arr_33 [i_2] [i_3] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-2147483618), (1065353216)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_9 [i_3] [i_3] [i_3]) : (16355087866733833638ULL))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_10]))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_3] [i_10] [i_6] [i_10])) > (((/* implicit */int) arr_17 [i_3] [i_3] [i_6] [i_10]))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        var_29 ^= ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) & (var_15)))));
                        arr_40 [i_3] [i_3] [i_6] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_16) : (((((/* implicit */_Bool) arr_36 [i_11] [i_3])) ? (var_5) : (((/* implicit */int) var_1))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 1; i_12 < 21; i_12 += 4) 
                        {
                            var_30 = ((/* implicit */long long int) ((((arr_38 [i_3]) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))))) > (((/* implicit */long long int) var_12))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))), (var_0)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_2] [i_6] [i_3] [(short)11])))));
                            var_32 = ((/* implicit */long long int) var_2);
                        }
                    }
                    arr_43 [i_2] [i_3] [i_3] [(unsigned short)20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_2] [i_3] [(unsigned short)5])) || (((/* implicit */_Bool) arr_19 [i_3])))) ? (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) : (4016809048U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_42 [i_2] [i_2] [i_2] [i_3] [i_3] [i_2] [i_6]))))))))) ? (min((((7551154423565698810LL) / (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_6]))))), (arr_29 [i_2] [i_2] [i_2]))) : (min((((/* implicit */long long int) arr_23 [i_6])), ((-9223372036854775807LL - 1LL))))));
                }
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((2147483647) & ((-(((/* implicit */int) arr_7 [0ULL])))))))));
            }
        } 
    } 
    var_34 &= ((/* implicit */signed char) var_15);
}
