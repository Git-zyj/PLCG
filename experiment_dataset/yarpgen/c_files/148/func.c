/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148
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
    var_13 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_0), (var_6)))) : (((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_14 *= ((/* implicit */signed char) min((max(((-(((/* implicit */int) var_8)))), (arr_9 [i_1 + 2] [i_2] [i_2] [i_1 + 2]))), (max((((/* implicit */int) arr_10 [i_3] [i_3] [0] [i_3] [(short)11] [7])), (((((/* implicit */int) arr_8 [i_3] [i_1] [i_0])) >> (((((/* implicit */int) arr_8 [i_3] [i_3] [(short)1])) - (51)))))))));
                            var_15 = ((/* implicit */int) arr_5 [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
                {
                    for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_1))))) % (min((((/* implicit */unsigned long long int) var_11)), (var_10))))) ^ (((/* implicit */unsigned long long int) var_2))));
                            arr_19 [i_0] [i_4] = ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) % (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [(short)11] [i_1] [i_0] [i_5])) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_4 - 1] [i_1])))))) ^ (min((((/* implicit */int) min((((/* implicit */short) (unsigned char)153)), ((short)3644)))), (var_2))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) ((var_0) ? (min((arr_11 [i_1 + 2] [i_1 - 1] [i_1 - 3]), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_1 + 1] [i_0])))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_1] [16])))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_10))));
            }
        } 
    } 
    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) 17870283321406128128ULL)) ? (17870283321406128127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
}
