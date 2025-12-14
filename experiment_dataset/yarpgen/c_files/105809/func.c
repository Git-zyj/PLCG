/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105809
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((var_17) != (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-40)), (var_8))))));
                            var_19 = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) arr_2 [i_1] [i_2 - 1])))) << (((((/* implicit */int) arr_6 [i_0] [i_2] [i_0] [i_3])) - (188))))) >= (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned short)64))))))))) : (((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) arr_2 [i_1] [i_2 - 1])))) << (((((((/* implicit */int) arr_6 [i_0] [i_2] [i_0] [i_3])) - (188))) + (106))))) >= (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned short)64)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 24; i_5 += 4) 
                    {
                        {
                            arr_15 [i_0] [10] [(unsigned char)20] [i_0] [i_0] [i_0] &= ((((/* implicit */_Bool) var_8)) ? (0ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (unsigned short)8213)) : (((/* implicit */int) (unsigned char)255)))) + ((+(((/* implicit */int) var_5))))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_1)))) ? (min((var_2), (var_11))) : (((/* implicit */unsigned long long int) max((arr_7 [i_5 + 1] [i_5 + 1] [i_1 - 1] [i_0]), (arr_7 [i_5 + 1] [i_5 + 1] [i_1 + 1] [i_0]))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned char)18)))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1])) ? (0ULL) : (((/* implicit */unsigned long long int) var_17)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 24; i_6 += 4) 
                {
                    for (unsigned char i_7 = 3; i_7 < 24; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) 5291695419736655943ULL)));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_6 [i_8] [i_0] [i_0] [i_1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_9 = 4; i_9 < 21; i_9 += 4) 
    {
        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 20; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            {
                                arr_38 [i_10] [i_10] [i_10] [i_12 + 1] [i_13] = ((/* implicit */unsigned long long int) min((((var_14) | ((~(var_13))))), (max((((((/* implicit */_Bool) var_14)) ? (var_13) : (arr_29 [i_9] [i_9] [i_11]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_9 - 2] [i_11] [i_12 + 2])) : (arr_21 [i_9] [i_9] [i_9] [2] [i_9 - 3] [(signed char)14] [i_9 + 1]))))))));
                                arr_39 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
                                var_24 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_27 [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_2 [18] [i_12]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)18))))) : (((int) 1690731758)))))));
                                arr_40 [i_9] [i_10] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max(((-(var_17))), (var_17)))) * ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_10]))) ^ (8129619424541484201ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 19; i_14 += 3) 
                    {
                        for (int i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            {
                                var_25 = (+(var_14));
                                var_26 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) (signed char)-8)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 1; i_16 < 18; i_16 += 2) 
                    {
                        for (unsigned short i_17 = 3; i_17 < 19; i_17 += 3) 
                        {
                            {
                                arr_53 [i_10] = ((/* implicit */int) var_4);
                                var_27 = (((!(((/* implicit */_Bool) (-(7696692864023419817ULL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_4))))) - (max((17910842412785919757ULL), (((/* implicit */unsigned long long int) (unsigned char)27)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_10]))));
                                arr_54 [i_10] = ((/* implicit */signed char) arr_29 [i_11] [i_11] [i_11]);
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (signed char)46))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 3; i_18 < 19; i_18 += 3) 
                    {
                        for (long long int i_19 = 0; i_19 < 22; i_19 += 3) 
                        {
                            {
                                arr_60 [i_10] [i_10] = ((/* implicit */unsigned short) arr_22 [i_9 - 4] [i_18 + 3] [i_18 - 3] [i_18 - 2]);
                                var_29 = ((/* implicit */signed char) max((var_0), ((~(min((var_1), (arr_5 [(unsigned short)18] [(unsigned short)18] [10] [i_19])))))));
                                var_30 = ((/* implicit */int) (-(arr_0 [i_9] [i_10])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
