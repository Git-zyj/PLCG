/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169309
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (2156795329U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (max((2156795329U), (2311098899U))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (2156795316U) : (2156795329U))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_11 [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))) ? (((/* implicit */int) max((arr_2 [i_0]), (arr_6 [i_3] [i_3])))) : (max((2097136), (((/* implicit */int) var_7))))))), (min((2138171989U), (((/* implicit */unsigned int) var_14)))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = max((min((((/* implicit */long long int) 2097143)), (arr_5 [i_0]))), (min((((/* implicit */long long int) var_11)), (arr_5 [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5)))), (((((/* implicit */_Bool) (signed char)48)) ? (var_13) : (((/* implicit */long long int) var_3))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (short)29594))))), (max((2156795316U), (((/* implicit */unsigned int) var_12)))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (-2097136)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
}
