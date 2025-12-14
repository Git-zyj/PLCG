/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109650
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-27322)) : (((/* implicit */int) var_6)))) - (max((((/* implicit */int) var_13)), (533855156)))))) ? (403224070) : (((/* implicit */int) ((min((var_8), (((/* implicit */int) var_13)))) == (((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2 - 2] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((unsigned long long int) -3573483982575123240LL))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((arr_11 [i_2 - 2] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [6] [i_2 - 1]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_2] [i_0] [i_0])) ? (((unsigned int) (unsigned char)143)) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))))))));
                            }
                        } 
                    } 
                    arr_14 [(unsigned short)15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)27322)) : (var_8)))), (((((/* implicit */long long int) ((/* implicit */int) (short)-24613))) - (3742351081521957585LL)))))) ? (((/* implicit */long long int) ((((56802488) >> (((var_9) + (159583418))))) + ((~(arr_2 [i_0] [(signed char)17])))))) : (((((/* implicit */long long int) (+(690502373)))) * (max((-1056302333907507277LL), (((/* implicit */long long int) arr_9 [i_0] [17U] [17U] [i_1]))))))));
                    var_16 = ((/* implicit */unsigned int) var_1);
                }
            } 
        } 
    } 
}
