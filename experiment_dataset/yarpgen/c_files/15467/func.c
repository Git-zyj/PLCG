/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15467
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) << (((((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) + (2507578197194082509LL)))))) ? ((-(((/* implicit */int) ((unsigned char) var_8))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_12)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_1)), (((1885789576180154118ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) var_6))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4] [i_3] [i_1])) || (((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]))))), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                                var_17 = var_3;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
