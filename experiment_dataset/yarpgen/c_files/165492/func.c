/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165492
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
    var_18 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned int) var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 1233865665))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1 + 2] [i_1 + 3]);
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_4 [i_1] [9U]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) -4194304)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (arr_3 [i_0] [i_0] [i_3]))) : (arr_3 [i_3 - 1] [i_3 - 2] [(short)2]))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */signed char) ((477876728U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) != (((((/* implicit */unsigned long long int) arr_6 [i_0])) % (140737454800896ULL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                arr_22 [i_1] [i_1] [i_5] [4] [4] [i_7] [i_7] = ((/* implicit */int) arr_2 [i_6]);
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_2 [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 += ((/* implicit */unsigned short) -2147483645);
}
