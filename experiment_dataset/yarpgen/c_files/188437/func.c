/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188437
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) var_8)) * (((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((((((/* implicit */int) (short)-22295)) > (((/* implicit */int) (signed char)127)))), (max((((((/* implicit */int) (signed char)-26)) < (((/* implicit */int) (_Bool)1)))), (min((arr_0 [i_0]), ((_Bool)1))))))))));
                    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_1])), (((((/* implicit */_Bool) 2147483647)) ? ((((_Bool)1) ? (3982645093U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [1ULL] [i_0 - 1]), (((/* implicit */short) var_9))))))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4)))) <= (((unsigned int) 958964655U))))) & (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                }
                arr_8 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (signed char)-124);
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (arr_2 [i_0 - 1])))) <= (((/* implicit */int) max((arr_4 [i_1] [i_0 - 1]), (min((arr_4 [i_0] [i_1]), (((/* implicit */short) arr_6 [i_0] [i_1] [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) arr_6 [i_4 + 1] [i_5 + 3] [i_6]);
                        var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((1715084819979702528ULL) | (((/* implicit */unsigned long long int) 849862948))))) ? (((/* implicit */int) arr_6 [i_3] [i_4 - 1] [i_5 - 1])) : (((/* implicit */int) (unsigned char)195)))), (1304301807)));
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                    {
                        var_23 = max((-1304301807), (((/* implicit */int) (short)8)));
                        var_24 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) (short)-1757)), (arr_15 [i_4]))))), (((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_5] [i_5])) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))));
                        arr_21 [i_3] [i_4 - 2] [i_5] [i_5] = ((/* implicit */short) var_6);
                        var_25 = ((/* implicit */short) (_Bool)1);
                        var_26 = ((/* implicit */short) (~(((/* implicit */int) max((arr_2 [i_5 + 3]), (arr_2 [i_3]))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (short)-24976))));
                        var_28 -= ((/* implicit */int) ((signed char) 1964070157U));
                    }
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) max((min((((/* implicit */short) (unsigned char)61)), (arr_4 [i_5 + 3] [i_4 - 2]))), ((short)-1757)));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3])))))) == (((/* implicit */int) arr_22 [i_4 - 2] [i_5] [i_5] [i_5 + 2] [i_4 - 2] [i_5])))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9]))) | (2724172064U)))) ? (((/* implicit */unsigned int) (~(2147483643)))) : (arr_16 [i_4 + 1] [i_4 + 1] [i_5 + 3] [i_5 - 2])))));
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5 + 2] [(unsigned short)12] [i_4 - 1])) ? (((/* implicit */int) arr_5 [i_5 - 2] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_5 [i_5 - 1] [(short)11] [i_4 - 1]))))) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) var_12)));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_27 [i_4 - 2] [i_3] [i_5] [i_3] [i_5 + 1]), (arr_27 [i_4 + 1] [i_3] [i_4 + 1] [i_5 - 2] [i_5 - 2])))) ? (min((((((/* implicit */_Bool) 1987070357U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_5 [i_9] [i_3] [i_3])))), (((/* implicit */int) var_9)))) : (((/* implicit */int) var_7))));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((int) ((unsigned int) arr_25 [i_3] [i_3] [i_3] [i_3]))))));
                    }
                    var_34 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (13275929935791140958ULL))))))));
                }
            } 
        } 
    } 
}
