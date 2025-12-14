/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137302
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_8)), (var_6)))))) ? (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) var_8))))) ? (((((/* implicit */_Bool) -1952421966)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (min((var_6), (-1))))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))), (((var_5) / (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))) | (var_1))), (((/* implicit */long long int) arr_1 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_4] |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_4] [i_4 + 3] [i_4] [i_4] [i_3])) ? (arr_11 [i_4] [i_1] [i_2 - 1] [i_4 + 3] [i_4] [i_1] [(unsigned short)4]) : (arr_11 [i_4] [i_0] [i_2 + 2] [i_4 - 1] [i_4 + 2] [i_2 + 2] [i_1]))));
                                arr_14 [i_0 - 1] [i_0] [i_4] [i_0] [i_0] |= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(var_12)))) != ((-(1952421965)))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)32768)))) : (arr_7 [i_0] [(unsigned char)5] [(unsigned char)5] [i_1])))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (unsigned short)32758))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                {
                    var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_22 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11])), (var_6)))) ? (((/* implicit */int) ((((/* implicit */long long int) 1952421951)) >= (arr_24 [(unsigned short)11] [0] [i_7])))) : (((/* implicit */int) arr_22 [i_5] [i_5] [i_5] [i_7]))))) : (min((((/* implicit */unsigned int) arr_2 [i_5 + 2])), (arr_7 [i_6] [i_7 + 1] [i_7] [i_7])))));
                    arr_25 [i_5] [i_6] [i_6] [i_7 + 2] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(-360423835)))), (((arr_4 [i_5] [23U]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_0))));
                }
            } 
        } 
    } 
}
