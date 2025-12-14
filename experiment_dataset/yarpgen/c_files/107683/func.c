/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107683
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_5 [i_2 + 1] [i_1] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))))))));
                            var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) 2026544795U)) ? (arr_3 [i_3 + 1]) : (((/* implicit */unsigned long long int) min((2026544779U), (((/* implicit */unsigned int) var_3)))))))));
                        }
                    } 
                } 
                var_12 &= ((/* implicit */short) (+(var_3)));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [16] [i_0] [16]))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [8ULL]))))))), (((/* implicit */unsigned long long int) (-(2026544779U)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((2026544779U), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) (_Bool)1))))) : (var_0))) - (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((var_3) / (((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */int) var_5)), (-1))) : (((/* implicit */int) var_9)))))))));
}
