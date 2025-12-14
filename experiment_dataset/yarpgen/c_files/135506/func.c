/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135506
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
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (min((var_3), (((/* implicit */unsigned long long int) arr_5 [i_0])))) : (((/* implicit */unsigned long long int) max((2102852962), (172642883))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_8 [10U] [10U] [10U] [i_0]))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned int) arr_9 [i_1] [i_1] [8U])))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_0])) && ((!(((/* implicit */_Bool) var_0))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_3))));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (int i_6 = 3; i_6 < 13; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_6] [8U] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)56))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (short)-24268))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((~(var_2)))))));
                                arr_23 [i_0] [i_1] [3LL] [i_6 - 1] [i_7] = ((/* implicit */int) arr_10 [i_6 + 1] [i_0]);
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_0] [i_7] [(short)13])))))) : (((((arr_15 [i_0] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))))) >> (((arr_3 [i_0] [i_0]) - (2691589211401071788LL)))))));
                                var_25 = ((/* implicit */long long int) (((~(min((((/* implicit */int) (_Bool)1)), (arr_16 [i_0]))))) / ((~(arr_8 [i_6 + 2] [i_0] [i_0] [7])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) var_11);
        arr_26 [i_8] = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-50)))) >> (((((((/* implicit */_Bool) 886727516)) ? (((/* implicit */int) (signed char)-22)) : (arr_24 [i_8]))) + (34)))))));
        var_27 += ((/* implicit */unsigned int) ((var_16) ? (var_12) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) -2102852968)))))))));
    }
    for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 3) 
    {
        var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_9 + 1])) << (((((/* implicit */int) (short)-4195)) + (4204)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_9]))))) : (max((((/* implicit */unsigned int) arr_11 [i_9] [i_9 + 2] [i_9] [14LL])), (var_18)))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_19 [i_9 + 3] [0] [i_9] [i_9])))) ? (max((arr_19 [i_9 + 3] [(signed char)14] [i_9 + 3] [i_9 + 3]), (arr_19 [i_9 + 3] [6] [i_9] [i_9]))) : ((-(1197430273009313875LL))))))));
        arr_30 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_21 [i_9] [i_9 - 1] [(_Bool)1] [i_9] [i_9 + 1] [i_9] [i_9 + 3])))))));
    }
    var_30 = var_2;
}
