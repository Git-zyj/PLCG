/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12594
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((long long int) arr_1 [i_0]));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [8LL])) ? (((/* implicit */int) arr_1 [(unsigned short)10])) : (((/* implicit */int) arr_1 [(signed char)6]))))), (min((4294967281U), (((/* implicit */unsigned int) arr_1 [0])))))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_9 [20U] [i_1] [20U] |= ((/* implicit */int) var_1);
                    arr_10 [i_0] [i_0] [i_0] [i_2] = var_6;
                }
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    arr_13 [i_0] [0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) 15U));
                    var_13 = (~(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65527))))) ? (((((/* implicit */_Bool) 11U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383))) : (var_4))) : ((+(var_7))))));
                }
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    var_14 |= arr_2 [i_4] [i_4];
                    var_15 = ((/* implicit */short) arr_12 [i_0]);
                    var_16 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_6)), (arr_16 [i_4] [i_4]))), (((/* implicit */unsigned int) (unsigned short)23)))))));
                }
                for (int i_5 = 1; i_5 < 24; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 22; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                arr_28 [i_7] [i_0] [(unsigned short)23] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) (-(536870911U))));
                                var_17 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_2 [i_5] [8LL]) < (arr_2 [i_5] [6ULL]))))));
                                arr_29 [i_0] = ((/* implicit */unsigned char) max((2829104988996365213LL), (((/* implicit */long long int) 0))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_4))) >> (((((var_7) / (((/* implicit */unsigned long long int) 35183835217920LL)))) - (185279ULL))))) | ((~(var_4)))));
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */short) 4294967284U);
                    var_19 = ((/* implicit */signed char) (unsigned char)249);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */long long int) max((((4283112043U) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (var_8))))))) | (2829104988996365207LL)));
}
