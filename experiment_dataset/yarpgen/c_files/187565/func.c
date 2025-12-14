/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187565
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) var_11);
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~(min((((((/* implicit */_Bool) var_9)) ? (arr_5 [(unsigned short)13] [(unsigned short)13]) : (arr_5 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_6))))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) max((max((arr_8 [i_1] [i_1 - 1]), (arr_8 [i_0] [i_1 - 1]))), (((/* implicit */unsigned long long int) var_1))));
                    arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-563)) + (2147483647))) << (((((/* implicit */int) (unsigned short)2044)) - (2044)))))) ? (max((arr_8 [i_1 - 2] [i_1 - 2]), (arr_8 [i_1 - 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_3 = 4; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)203)), (276828471)))))))));
                    var_16 -= ((/* implicit */_Bool) (+((+(arr_11 [i_3] [i_3] [i_3 - 4] [i_3])))));
                    var_17 -= ((/* implicit */unsigned short) arr_8 [i_0] [i_1]);
                    arr_13 [i_0] [i_0] [(unsigned char)4] [1ULL] = ((/* implicit */unsigned short) min(((-(arr_5 [i_1 + 1] [i_3 + 1]))), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)2044)))))))));
                }
                for (unsigned short i_4 = 4; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (long long int i_6 = 4; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((arr_19 [(unsigned char)17] [i_1] [6LL] [i_1] [i_1]), (((/* implicit */unsigned int) var_6))))))) && (((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1)))))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) arr_16 [i_0] [i_1 - 1] [i_6] [i_6] [i_6]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_5])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_5]))))))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((min((arr_17 [i_6 - 2] [i_1 - 2] [i_4] [i_1 - 2] [i_0]), (((/* implicit */long long int) var_5)))), (max((arr_17 [i_0] [i_1 + 2] [i_1 + 2] [i_0] [i_0]), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0])))))))));
                                var_21 = ((/* implicit */long long int) min(((+(((int) arr_2 [i_5] [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-22202))))))))));
                                arr_22 [i_6] [i_6] [i_4] [i_1 + 1] [i_1] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 268435455U)) ? (5307571892333982958LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22201)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned char) var_5))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)57))))) : ((-((~(arr_2 [i_4] [i_4])))))));
                                var_23 = ((/* implicit */int) arr_5 [i_1 + 1] [i_4 - 3]);
                                var_24 = min((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_0] [(unsigned char)2] [18] [i_7] [i_8])))))))), (((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [(signed char)12]), (((/* implicit */unsigned long long int) var_7))))) ? (min((((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_8] [i_7] [i_8])), (arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)22201)), (-97297871)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) (~((+(276828471)))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        for (short i_10 = 1; i_10 < 18; i_10 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_0] [i_9] [i_1] = ((/* implicit */long long int) arr_9 [i_0] [i_0]);
                                arr_37 [i_10 - 1] [i_4] [i_4] [i_0] = ((/* implicit */signed char) (-(((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (5596137173733817162ULL))))));
                                arr_38 [i_0] [i_0] [i_1] [i_0] [i_1] [i_9] [i_10] &= ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_11 = 1; i_11 < 17; i_11 += 2) 
                {
                    arr_41 [i_0] [i_1] [i_11 + 2] [i_11] = ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 18; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_26 += ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)255))));
                                arr_46 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_0] [i_0] [(unsigned short)12] [i_12] [i_11 + 1] [i_13] [(unsigned short)12]))));
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned long long int) arr_1 [i_0] [i_11])))));
                                arr_47 [i_0] [i_1] [i_11] [(signed char)16] [(signed char)16] [7LL] [i_13] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) arr_21 [i_12] [i_12] [(_Bool)1] [i_12 - 1] [i_12 - 1])));
                                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        for (int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            {
                                arr_53 [i_0] [(unsigned short)9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_51 [i_1 - 1] [i_1 + 2] [i_11 + 2] [i_11 + 1] [i_1 + 2]))));
                                arr_54 [i_0] [i_0] [(unsigned short)0] [i_11] [i_14] [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)74))));
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)6)))) >= (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_51 [i_11 + 1] [i_11] [i_11] [i_11] [i_1]))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_11);
}
