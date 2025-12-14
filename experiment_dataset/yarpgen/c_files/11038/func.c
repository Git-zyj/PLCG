/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11038
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_2 + 2] [i_2 - 1])) & (((/* implicit */int) arr_2 [i_2 + 2] [i_2 + 1])))) | (((/* implicit */int) ((short) arr_3 [i_1 - 1] [i_1 + 1] [i_2 + 2])))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_6 [i_0] [12LL] [i_2 + 1])), (min((((((/* implicit */_Bool) arr_3 [i_2] [(short)4] [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_6 [i_0] [i_2] [(_Bool)1])))), (((/* implicit */long long int) ((unsigned short) (unsigned short)58676)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        for (short i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            {
                arr_13 [i_4 + 2] = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)24867)) : (((/* implicit */int) arr_5 [i_3] [i_4])))))), (var_19)));
                var_20 = ((/* implicit */int) min(((!(((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) var_2))))));
                arr_14 [i_3] |= (-(((/* implicit */int) ((unsigned short) ((unsigned int) -9223372036854775807LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_11))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (signed char i_8 = 1; i_8 < 23; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                arr_30 [(signed char)0] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (((min((var_12), (((/* implicit */unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                                var_22 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (short)-1))))), (var_5)));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((var_19), (((/* implicit */int) var_6)))) % (336028523)))) ? (((/* implicit */unsigned long long int) ((((arr_23 [i_5 - 3] [i_8 + 1]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_15 [(signed char)13] [i_6]))))) : (min((((/* implicit */unsigned long long int) (-(var_3)))), (((var_12) << (((var_5) - (3645103395477092446LL)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            {
                                arr_39 [i_5] [i_6] [i_6] [i_6] [i_11] [i_12] = ((((_Bool) arr_34 [i_5 - 3] [i_5 - 1] [i_10] [i_11] [i_10])) ? ((+(((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) arr_15 [i_5] [i_6])) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [i_5 - 3] [i_5 + 2])) : (((/* implicit */int) ((unsigned short) var_4))))));
                                arr_40 [(_Bool)1] [i_6] [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1187114758U)) ? (arr_16 [13LL]) : (((/* implicit */unsigned int) var_19))))), (((((/* implicit */_Bool) arr_34 [15] [i_5 + 2] [15] [i_5] [i_5 + 2])) ? (arr_23 [i_5] [i_5 - 1]) : (((/* implicit */long long int) arr_34 [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
