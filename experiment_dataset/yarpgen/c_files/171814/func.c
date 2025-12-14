/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171814
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (arr_0 [i_0])));
                var_14 = ((/* implicit */unsigned short) ((unsigned char) (+(((((/* implicit */_Bool) arr_1 [0LL] [0LL])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)11651)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */signed char) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_1 [(unsigned char)1] [i_1])))), ((~(((/* implicit */int) arr_2 [i_0]))))))) % (max((arr_0 [(unsigned short)0]), (((/* implicit */unsigned int) arr_10 [i_1] [i_2]))))));
                            arr_11 [(short)4] [(short)4] [i_2] [2U] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53882)) ? (arr_6 [i_1] [i_2]) : (arr_9 [i_0] [i_1] [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)37179)))) : (((arr_9 [i_3] [i_1] [i_1] [i_0]) / (arr_9 [i_0] [i_0] [i_0] [i_3])))));
                        }
                    } 
                } 
                var_16 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) 3017248906282635162LL))), (((unsigned long long int) arr_4 [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((-3473919477231743489LL), (((/* implicit */long long int) var_10))));
    /* LoopNest 3 */
    for (unsigned int i_4 = 2; i_4 < 24; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (~(4294967295U))))) * (((int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) * (-3017248906282635162LL))))));
                    var_19 = ((/* implicit */int) min((var_19), (max(((+(((/* implicit */int) arr_13 [i_4 - 1] [i_4 + 1])))), (max((((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) (short)6703)) : (((/* implicit */int) var_10)))), ((+(((/* implicit */int) (unsigned short)41002))))))))));
                    var_20 = ((/* implicit */long long int) arr_16 [i_4 - 1] [i_4 - 1] [18] [i_5]);
                }
            } 
        } 
    } 
}
