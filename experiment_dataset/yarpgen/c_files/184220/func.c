/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184220
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_0 [i_1] [i_1]))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [15]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_6 [i_3] [(_Bool)1] [i_4])))) ? (((/* implicit */unsigned int) var_7)) : (0U)))), (((((/* implicit */_Bool) ((int) 146033129U))) ? (max((var_8), (((/* implicit */unsigned long long int) arr_1 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_13))))))))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_20 [i_7 + 1] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned int) (+(arr_14 [i_5])));
                                arr_21 [i_3] [6] [i_5] [(short)13] [i_4] [i_3] = ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned long long int) (+(arr_14 [6ULL])))) : ((-(((unsigned long long int) arr_18 [0U] [i_5] [0] [i_3])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
