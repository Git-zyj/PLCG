/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158096
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
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (_Bool)0);
                                var_20 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)125))))), (max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))), (min((var_5), (var_11)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) * (min((((/* implicit */unsigned long long int) (unsigned short)0)), (7741129588027009971ULL)))));
                    var_21 ^= ((/* implicit */unsigned char) max((((arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_2] [i_2]) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_1)))), (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0 - 1])), ((short)2358))))));
                    var_22 = min((min((arr_5 [i_0 + 1]), (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */_Bool) (short)16382)) ? (2177973297819327235ULL) : (((/* implicit */unsigned long long int) -10835623)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_25 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_7] [i_7]))))) <= (((/* implicit */int) max((arr_15 [i_7]), (arr_15 [i_6]))))));
                    arr_26 [i_5] = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(arr_15 [i_8])))) : (arr_23 [i_8] [i_8])));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (int i_12 = 1; i_12 < 15; i_12 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_8] [i_11] [i_12]))))), (min((max((((/* implicit */unsigned int) (_Bool)1)), (var_3))), (((/* implicit */unsigned int) arr_28 [i_11 - 1] [i_12 - 1]))))));
                                var_27 = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) (short)-16382)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_12 + 1] [i_12 - 1] [i_11]))) : (min((((/* implicit */unsigned long long int) var_18)), (3094897258360298113ULL))))), (((/* implicit */unsigned long long int) ((arr_35 [i_12 - 1] [i_11 - 1] [i_9]) ? (((/* implicit */int) arr_27 [i_11 - 1])) : (((/* implicit */int) var_13)))))));
                                var_28 &= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (max((arr_22 [i_12 - 1] [i_10] [i_9]), (((/* implicit */long long int) var_15))))))) : (min((min((((/* implicit */unsigned long long int) arr_38 [i_8] [i_9] [i_10] [i_11] [i_12])), (15351846815349253483ULL))), (((/* implicit */unsigned long long int) arr_24 [i_9]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
