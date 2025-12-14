/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182093
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((int) max((((((/* implicit */long long int) 271643141)) / (arr_0 [i_0] [i_0]))), (arr_4 [i_1] [i_0] [i_3]))));
                                arr_16 [i_0 + 1] [i_0] [i_0] [i_2 - 1] [i_0] [i_4] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (((((((/* implicit */long long int) ((/* implicit */int) (signed char)94))) != (var_5))) ? (((/* implicit */unsigned long long int) ((arr_4 [i_3 + 2] [i_0] [i_0]) << (((((((/* implicit */int) (signed char)-124)) + (164))) - (39)))))) : (arr_10 [i_0] [i_3 + 1] [i_2] [i_0])))))) : (((/* implicit */signed char) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (((((((/* implicit */long long int) ((/* implicit */int) (signed char)94))) != (var_5))) ? (((/* implicit */unsigned long long int) ((((arr_4 [i_3 + 2] [i_0] [i_0]) + (9223372036854775807LL))) << (((((((((/* implicit */int) (signed char)-124)) + (164))) - (39))) - (1)))))) : (arr_10 [i_0] [i_3 + 1] [i_2] [i_0]))))));
                            }
                        } 
                    } 
                    arr_17 [(_Bool)1] [i_1] [6ULL] [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_5 [i_0 + 1])))) ? (((long long int) arr_14 [i_0] [i_1 - 1] [i_2 - 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 1] [i_2 - 1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)0)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_24 [i_0] [17LL] [i_2 - 1] [(signed char)16] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min(((unsigned short)43941), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_23 [i_6] [i_6] [i_1] [(signed char)15] [i_1] [i_0])) : (((((/* implicit */_Bool) (unsigned short)21594)) ? (((/* implicit */int) (unsigned short)21594)) : (((/* implicit */int) (unsigned short)21579)))))), (((/* implicit */int) (signed char)-1))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-88)) ? (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) (_Bool)1))))));
                                arr_25 [i_0 + 1] [i_1 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_6] = ((/* implicit */signed char) ((int) (-(arr_10 [i_0] [14LL] [i_2 - 1] [8LL]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_7 = 2; i_7 < 20; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 1; i_11 < 21; i_11 += 1) 
                        {
                            {
                                arr_42 [i_7] [i_11 + 1] [i_9] [i_10 - 1] [4ULL] [i_9] = ((/* implicit */_Bool) ((unsigned short) (unsigned short)21594));
                                arr_43 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43941)) ? ((+(((/* implicit */int) (_Bool)0)))) : (((int) (signed char)-33))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_38 [i_7] [i_8] [i_12] [(unsigned short)20])) ? (((/* implicit */int) arr_41 [i_7] [(_Bool)1] [16] [i_7])) : (((/* implicit */int) (signed char)66)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [(_Bool)1])))))))) ? (((((/* implicit */int) arr_33 [8LL] [8LL] [8LL])) - (((/* implicit */int) arr_31 [i_7 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -1678381469))))))))));
                                arr_48 [i_9] [i_13] [i_13] [i_12] [i_9] [(signed char)14] [i_9] = (-(((/* implicit */int) var_8)));
                                var_16 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(_Bool)1] [(signed char)18] [(_Bool)1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) : (max((var_4), (((/* implicit */int) arr_34 [(_Bool)1] [12] [i_13]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                {
                    arr_56 [i_14] [22LL] = ((/* implicit */long long int) (~(var_4)));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) var_8);
                                arr_63 [i_14] [19] [i_15] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */long long int) max((max((arr_54 [i_18 - 1] [i_18 - 1]), (((((/* implicit */_Bool) 1678381469)) ? (((/* implicit */int) arr_60 [i_17] [15LL] [i_15] [i_14])) : (((/* implicit */int) arr_60 [i_14] [i_16] [i_16] [i_18])))))), (((/* implicit */int) var_1))));
                                var_19 = 18446744073709551615ULL;
                                arr_64 [i_14] [i_14] [i_16] [i_17] [i_14] |= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)21615))));
                            }
                        } 
                    } 
                    arr_65 [i_14] [i_14] [i_16] = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) arr_50 [i_14])) ? ((((_Bool)1) ? (-6772422450754558821LL) : (((/* implicit */long long int) arr_54 [i_15] [i_15])))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))))));
                    var_20 += ((/* implicit */_Bool) (unsigned short)1);
                }
            } 
        } 
    } 
}
