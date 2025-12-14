/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122864
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
    var_14 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) min((var_0), (var_0)))))), ((_Bool)1)));
    var_15 = ((/* implicit */long long int) ((short) var_8));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 9; i_2 += 4) 
                {
                    arr_7 [(_Bool)1] [i_1] [i_2 - 3] = ((unsigned int) ((int) min((4636389581003328803ULL), (((/* implicit */unsigned long long int) arr_5 [i_0])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [4ULL] [(_Bool)0] [i_3] [i_4 + 1] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) arr_10 [i_1 - 1] [i_1] [i_3] [i_3 - 1] [i_4 - 1]))), (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_11 [i_1 - 2] [i_1 - 2])) : (arr_10 [i_1 + 1] [i_2 - 2] [i_2] [i_3 - 1] [i_4 + 1])))));
                                arr_13 [i_0] [i_0] [i_0] [(unsigned char)2] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)0));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) ((long long int) min((((arr_0 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))))));
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [0ULL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned short)13329)) : (((/* implicit */int) max((arr_4 [(short)7] [i_1 - 1] [i_0]), (((/* implicit */unsigned short) arr_2 [i_0]))))))), (((/* implicit */int) ((_Bool) (unsigned char)85)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [(short)3] = ((/* implicit */unsigned int) arr_6 [i_0] [(short)9] [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                arr_23 [i_6] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)226))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) max((((/* implicit */short) var_2)), (arr_20 [9LL] [i_1] [i_6]))))))) ? (min((((long long int) arr_17 [i_0] [i_0] [i_0])), (((/* implicit */long long int) arr_6 [i_5] [i_6] [i_7])))) : (((((/* implicit */_Bool) arr_5 [i_5])) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))));
                                var_17 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                                var_18 = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                    arr_24 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_9 [i_0]) ? (arr_11 [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                }
                for (unsigned int i_8 = 4; i_8 < 9; i_8 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 2; i_9 < 8; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) var_10);
                        arr_31 [i_0] [i_1] [i_8] [i_9] = var_1;
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((max((arr_33 [1ULL] [i_8 - 1] [i_1 - 1]), (arr_33 [2U] [i_8 - 3] [i_1 + 1]))), (((/* implicit */unsigned char) ((_Bool) arr_17 [i_10] [i_1] [i_0])))));
                        arr_35 [i_8] [i_1] [i_8] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) ((unsigned char) arr_29 [i_0] [(short)9] [i_0] [9U]))), (arr_15 [i_1 + 1] [i_1] [i_8 - 1] [i_1])))));
                        arr_36 [i_10] [i_8] [0] [0] = (!(((/* implicit */_Bool) var_8)));
                        arr_37 [(short)1] [i_0] [i_1] [i_1 - 2] [i_8 - 4] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((449995888U), (((/* implicit */unsigned int) (((_Bool)1) ? (-343309529) : (((/* implicit */int) (unsigned short)65513))))))))));
                    }
                    for (short i_11 = 1; i_11 < 8; i_11 += 1) 
                    {
                        arr_41 [i_0] [i_1 - 1] [i_1] [i_8] [i_8] [i_11 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 2]))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))))), (min((((/* implicit */unsigned char) var_2)), (arr_32 [(_Bool)0] [i_1] [i_8] [i_11] [(_Bool)0] [(_Bool)1])))))) ? (((unsigned int) arr_21 [i_11] [i_11 + 1] [i_8 - 2] [i_11] [i_11])) : (min((((((/* implicit */_Bool) 343309529)) ? (4249244614U) : (27425751U))), (((/* implicit */unsigned int) arr_1 [i_11 + 1] [i_1 + 1]))))));
                        var_22 ^= ((/* implicit */unsigned char) arr_28 [(_Bool)1]);
                    }
                    var_23 = ((/* implicit */unsigned int) ((2927013876U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_28 [(short)7]))) ? (((/* implicit */int) arr_6 [i_0] [(short)8] [i_0])) : (((/* implicit */int) var_4)))))));
                    arr_42 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */short) max((var_6), (((/* implicit */unsigned char) arr_40 [i_0] [i_8]))))), (var_8)))), (((((/* implicit */_Bool) var_6)) ? (arr_22 [i_0] [i_0] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [2])))))));
                }
                arr_43 [i_1 - 1] [8] = ((/* implicit */short) arr_6 [5U] [i_1] [i_1 - 2]);
            }
        } 
    } 
}
