/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145332
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */unsigned long long int) var_14)) + (var_8))) : (((unsigned long long int) arr_15 [i_0] [5ULL] [i_0] [i_3] [5ULL] [i_4 + 2] [i_2]))));
                                arr_19 [i_0] [i_0] [i_0] [i_4 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) min((-61477944), (var_11))))) ? (((unsigned long long int) arr_8 [i_0] [i_1 - 2] [i_4 + 2] [i_4])) : (((/* implicit */unsigned long long int) (+(arr_3 [i_0] [i_1 + 2]))))));
                                var_20 = var_8;
                                var_21 = 61477942;
                            }
                        } 
                    } 
                    var_22 *= (!((!(((/* implicit */_Bool) 0)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_12);
}
