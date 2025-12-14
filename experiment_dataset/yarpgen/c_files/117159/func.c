/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117159
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */int) arr_6 [i_2] [(unsigned char)8] [(unsigned char)8] [i_2]);
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        var_12 ^= ((/* implicit */unsigned char) ((((((unsigned long long int) arr_0 [i_2])) >> ((((~(((/* implicit */int) arr_4 [i_0 - 1] [i_0])))) + (46))))) - (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_3])) * (((/* implicit */int) var_2))))), ((+(var_3))))))));
                        arr_11 [i_0 - 2] [i_1] [i_2] [i_3] = (-(((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (arr_8 [i_2 + 2] [i_1] [i_0 + 2]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((arr_12 [i_2 + 2] [i_4 - 1] [16] [i_4 - 1] [13LL] [14LL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((int) ((long long int) var_1))))));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((_Bool) arr_3 [i_1] [i_3] [i_4 - 1]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_16 = ((((/* implicit */int) var_9)) * (((/* implicit */int) ((((/* implicit */long long int) arr_16 [4LL] [i_2])) <= (arr_9 [i_2])))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(var_3))))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0 - 1] [i_0] [i_0 - 2] [i_0] [i_0] [i_0])) >> ((((+(((/* implicit */int) arr_0 [i_1])))) - (201)))));
                    }
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_19 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) || (((/* implicit */_Bool) -1532708953))))), (1643339949U)));
                        arr_20 [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) arr_6 [i_2] [12U] [i_1] [i_2]);
                        var_20 = ((/* implicit */unsigned int) ((int) ((unsigned int) min((var_9), (((/* implicit */unsigned char) arr_4 [8] [13U]))))));
                    }
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((int) 4294967295U))))) || (((/* implicit */_Bool) arr_1 [i_2]))));
                    arr_21 [i_2] [i_1] [i_1] = ((/* implicit */int) var_0);
                    var_22 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2651627341U)) || (((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (arr_1 [(_Bool)1])))) : (max((((/* implicit */unsigned long long int) arr_19 [(unsigned char)9] [i_1] [(unsigned char)9] [i_1] [i_0])), (var_8)))))) ? (max((((((/* implicit */_Bool) -1)) ? (arr_12 [i_2] [i_1] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1567795433626480165LL))))))) : (((/* implicit */unsigned long long int) max((arr_16 [i_0 + 2] [i_2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_9 = 2; i_9 < 16; i_9 += 1) 
                            {
                                arr_31 [i_9 + 1] [16LL] [i_0] [i_1] [i_0] = arr_1 [i_8];
                                arr_32 [i_9] [i_8] [i_0] [i_0] [i_0] = (~(max(((-(((/* implicit */int) arr_27 [i_0] [i_1])))), (((/* implicit */int) (unsigned char)138)))));
                                arr_33 [i_9] [i_8] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */int) var_2);
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1666810499)) ? (arr_12 [i_0] [i_0] [i_1] [16U] [i_0] [i_9]) : (((/* implicit */unsigned long long int) 1643339949U)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)11]))) / (var_5))))))) ? (min((((((/* implicit */int) arr_17 [i_8] [6] [0LL] [6])) * (((/* implicit */int) arr_19 [9U] [i_1] [i_1] [i_1] [10LL])))), ((-(-1603523073))))) : (min((arr_8 [i_0 - 1] [i_9 - 2] [i_7 - 1]), (((/* implicit */int) ((unsigned short) var_4)))))));
                            }
                            var_24 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1666810499)) ? (2651627347U) : (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) (unsigned char)67)) - (67)))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_3))))), (((/* implicit */unsigned int) ((int) arr_19 [i_0 + 2] [i_0 + 2] [i_7] [i_7 - 1] [i_7 - 1])))));
                            arr_34 [i_8] [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) (-(min(((~(((/* implicit */int) var_9)))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)56))))))));
}
