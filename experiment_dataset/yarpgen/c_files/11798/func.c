/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11798
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
    var_15 = ((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)57344)) >= ((~(((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = (!(((/* implicit */_Bool) 11435091545023131603ULL)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >> (((((7011652528686420016ULL) << (((arr_4 [i_0 + 1] [i_1] [i_1]) - (2329566313U))))) - (7500745179385561086ULL))))))));
                    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 11435091545023131603ULL))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_1] [i_4 + 2] [0] [(signed char)20] [i_4]))));
                                arr_13 [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) (~(((unsigned int) var_13))));
                                var_20 = ((/* implicit */signed char) 3235491586U);
                                arr_14 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_2 [i_2] [(_Bool)1]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) (-((-(var_0)))));
                    var_22 = (~(((/* implicit */int) (unsigned char)61)));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    arr_17 [i_0] [i_0] = ((/* implicit */signed char) 7011652528686420033ULL);
                    arr_18 [i_0] [i_0] [19ULL] [i_0] = ((/* implicit */signed char) ((arr_12 [i_1 - 2] [i_1 - 1] [i_1] [i_1 - 3]) | (arr_12 [i_1 - 3] [i_1 + 1] [i_1 - 1] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (+(arr_5 [i_0])));
                                var_24 = (~(9007194959773696LL));
                                var_25 = ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 1])));
                                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (+(((/* implicit */int) (short)0)))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) var_8);
                }
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                arr_35 [i_1] [(short)9] [(unsigned short)19] [i_0] [i_1] [i_1 - 2] [i_1 + 1] = ((/* implicit */unsigned long long int) var_5);
                                var_27 = ((/* implicit */unsigned short) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) ((int) arr_27 [i_0] [i_8] [i_9]))), (max((7011652528686420016ULL), (((/* implicit */unsigned long long int) var_6)))))) : ((((+(arr_10 [(short)10] [i_0] [i_8] [(short)10] [(short)10]))) % (((/* implicit */unsigned long long int) arr_28 [i_0] [i_0 - 1] [i_8]))))));
                                arr_36 [i_0] [i_1] [i_8] [i_1] [i_9] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_1 - 3])), (7011652528686420028ULL)))) ? (arr_5 [i_9]) : ((~(((/* implicit */int) (unsigned short)14148))))))), ((+((-(arr_4 [i_0] [i_1] [i_9])))))));
                                arr_37 [i_0] [i_1] [0U] [i_9] [i_10] [i_0] [18U] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned short)14148)))), ((+(((/* implicit */int) var_14))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) min((((4135238151U) ^ (arr_4 [i_0 + 1] [i_0 + 1] [i_0]))), (arr_4 [i_0 - 1] [i_0 - 1] [i_0])));
                                arr_44 [i_0] [i_0] [i_0] [i_8] [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((7011652528686420033ULL), (((/* implicit */unsigned long long int) arr_42 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [(unsigned short)3] [i_0 - 1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_1 - 2])) > (0ULL)))) : (((arr_15 [i_1] [i_1] [i_1 - 1]) + (((/* implicit */int) arr_42 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))))));
                                arr_45 [i_0] [i_1] [i_1] [i_8] [i_11] [17] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [i_0] [i_12]))))) ? (((/* implicit */int) min((arr_41 [i_12]), (((/* implicit */unsigned char) (signed char)123))))) : (((/* implicit */int) arr_29 [i_0] [(unsigned char)9] [i_8]))))));
                            }
                        } 
                    } 
                    arr_46 [i_0 + 1] [i_1 - 3] [i_0] = ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned long long int) var_14)), (7011652528686420033ULL))), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_0 - 1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
                }
                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_0 - 1] [i_0] [i_0] [i_1] [i_1] [(signed char)20]))));
                var_30 = ((/* implicit */unsigned char) (~(7011652528686420018ULL)));
            }
        } 
    } 
    var_31 += ((/* implicit */signed char) 504403158265495552ULL);
    var_32 = ((/* implicit */_Bool) var_9);
}
