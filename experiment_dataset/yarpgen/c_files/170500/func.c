/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170500
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((min((((((/* implicit */int) var_7)) + (var_3))), (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_7)))))), (((/* implicit */int) ((short) var_1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(signed char)21] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)120))))), (max((((/* implicit */short) (signed char)119)), ((short)-17308)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))))) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                            {
                                var_20 += ((/* implicit */_Bool) var_1);
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0])), (arr_18 [i_4] [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])))))))));
                            }
                            arr_19 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_17 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)54870))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_10)))));
                            var_22 += ((/* implicit */int) var_1);
                            arr_20 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(arr_8 [(unsigned short)8] [i_1] [i_2])));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_16 [6ULL] [i_0] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), ((!(((/* implicit */_Bool) ((int) arr_24 [i_5])))))));
            /* LoopNest 3 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_34 [i_5] [i_6] [i_9] [i_8] [i_9 + 1] [i_5] [i_7]))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_5] [i_9 + 1] [i_7] [i_8] [i_7 - 1] [i_8])) ? (arr_33 [i_5] [i_9 + 2] [i_8] [i_8] [i_7 - 1] [i_6]) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : ((-(arr_33 [i_5] [i_9 + 2] [i_7 - 1] [i_8] [i_7 - 1] [i_6])))));
                        }
                    } 
                } 
            } 
            arr_35 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_6] [i_5] [i_5] [i_6] [i_5] [i_6] [i_5])) ? (((long long int) (unsigned short)59622)) : (((/* implicit */long long int) 4U))));
        }
        for (unsigned char i_10 = 3; i_10 < 23; i_10 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_38 [i_10 + 1] [8ULL] [i_10 + 1])))) : ((-(((((/* implicit */_Bool) (unsigned char)4)) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10 + 1]))))))))))));
            var_27 = ((/* implicit */int) min((var_27), (min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)6)) << (((((/* implicit */int) (signed char)120)) - (94))))))), ((~(arr_31 [i_5] [i_10] [i_10 - 2] [i_5] [i_5])))))));
        }
        for (unsigned char i_11 = 3; i_11 < 23; i_11 += 2) /* same iter space */
        {
            arr_41 [i_5] [(short)8] = ((/* implicit */unsigned char) arr_39 [i_5] [i_11]);
            arr_42 [i_5] [i_5] = ((((/* implicit */unsigned long long int) ((long long int) arr_32 [i_11 - 2] [i_11 - 3] [i_5] [i_11 - 2] [i_5] [i_11 - 2] [i_11]))) & (arr_32 [i_11] [i_11] [i_5] [i_11] [i_5] [i_11 + 1] [i_5]));
            arr_43 [i_5] = ((/* implicit */int) var_7);
        }
        var_28 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_5]))) : (0ULL)))))) ? (max(((~(((/* implicit */int) arr_37 [i_5])))), (((/* implicit */int) arr_25 [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_31 [i_5] [i_5] [(short)22] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) ((unsigned char) arr_39 [i_5] [i_5])))))));
        arr_44 [i_5] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_39 [i_5] [i_5])) : (((/* implicit */int) arr_22 [i_5])))) : (((/* implicit */int) var_17)))));
        var_29 = ((/* implicit */signed char) var_7);
    }
    var_30 = ((/* implicit */int) var_18);
}
