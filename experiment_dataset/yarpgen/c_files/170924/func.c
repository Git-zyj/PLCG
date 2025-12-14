/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170924
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
    var_10 = ((/* implicit */int) ((7236653478484110874LL) + (((/* implicit */long long int) 1587590429U))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [i_3] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((unsigned long long int) ((arr_7 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) << (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) -7236653478484110887LL))))))));
                                arr_15 [i_4] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) (+(max((7236653478484110887LL), (((/* implicit */long long int) 2948108504U))))));
                                var_11 = ((/* implicit */unsigned short) arr_11 [i_0] [i_2] [i_0] [i_4]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_0] [i_1] [i_1]);
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-7236653478484110887LL)))) ? (((long long int) arr_8 [i_0 + 1] [i_1])) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_2])) % (((/* implicit */int) arr_8 [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] [(signed char)13] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [9U] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_5] [i_6 - 1]))) : (arr_12 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_1]))), (((/* implicit */unsigned long long int) ((var_8) + (0U)))))))));
                                arr_24 [i_1] [i_1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned short) (+(((((/* implicit */_Bool) -1670676603127910172LL)) ? (((/* implicit */int) (short)-13396)) : (arr_13 [i_0 + 1] [i_1] [i_2] [i_5] [i_6]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 1) 
                {
                    var_13 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [12LL]))));
                    var_14 = ((/* implicit */long long int) ((short) (~(var_1))));
                    arr_27 [i_0] [i_0 + 1] [i_0 + 1] [(unsigned short)6] |= ((/* implicit */unsigned long long int) ((unsigned char) var_9));
                }
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    var_15 += ((/* implicit */unsigned char) (~(var_8)));
                    arr_32 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_1])))) - ((+(arr_12 [i_0] [3] [i_0] [i_8] [i_0] [i_0 + 1] [i_1])))));
                }
                /* vectorizable */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    arr_35 [i_0] [i_0] [6LL] [(unsigned char)4] |= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 2030449900U)) || (((/* implicit */_Bool) var_8))))));
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [10LL] [10LL] [i_9] [i_9 - 1]))));
                }
                arr_36 [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */short) ((2948108500U) | (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [i_0] [i_1] [i_0 + 1]))))), (min((4294967295U), (var_4)))))));
                var_17 = ((/* implicit */long long int) 16383ULL);
                arr_37 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2030449900U)) || (((/* implicit */_Bool) 15746328911135500235ULL))));
            }
        } 
    } 
}
