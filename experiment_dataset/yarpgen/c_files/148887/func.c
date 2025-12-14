/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148887
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
    var_17 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) (unsigned char)107)) ? (var_7) : (var_6)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max((var_18), (arr_0 [i_0 - 1])));
                                var_19 = ((/* implicit */unsigned int) max((max((((arr_13 [i_0] [i_1] [i_2] [(short)2] [i_4]) ? (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0])) : (var_6))), (((/* implicit */unsigned long long int) min((arr_14 [i_4] [i_3] [i_2] [i_1 - 2] [i_0 - 3]), (arr_14 [i_4] [(short)8] [i_2] [i_1 + 2] [i_0])))))), (((/* implicit */unsigned long long int) arr_11 [i_0]))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) & (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_12)))));
                    var_20 = ((/* implicit */long long int) (-(min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_14 [i_0 - 2] [i_1] [i_2] [i_1] [i_1 + 1])))))))));
                }
            } 
        } 
    } 
}
