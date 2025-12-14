/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138458
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_11 [i_0] [6U] [i_4 - 1] [i_4 - 1] [i_1] [4U])))) ? (((long long int) (+(arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) <= (((unsigned int) var_8)))))))))));
                                arr_13 [6U] [6U] [i_0] [6U] [i_4] [4LL] = ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                    arr_14 [i_0] = var_5;
                    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_6)) / (((5127479445265091896LL) | (var_2))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
    var_16 = var_5;
}
