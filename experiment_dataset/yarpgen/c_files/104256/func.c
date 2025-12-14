/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104256
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))))))))) : (min((var_11), (max((853679937U), (((/* implicit */unsigned int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned char)63))) ? (((/* implicit */int) min((arr_2 [i_4] [i_4 + 2]), (arr_2 [i_4] [i_4 - 1])))) : (((/* implicit */int) arr_5 [i_3] [i_1] [i_3]))));
                                var_16 = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) arr_10 [i_0])) ? (6540115266260401434ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_4 - 3] [i_4] [i_1]))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) var_5))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_2] [i_1] [i_3]))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) 2147467264U)) ? (13472954152401971007ULL) : (13472954152401971005ULL))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] = max((var_13), (arr_0 [i_0] [i_2]));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_5] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) var_7));
                                arr_21 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_1])) ? (var_5) : (((/* implicit */unsigned int) var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
