/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156126
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
    var_16 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [0] [i_0] [i_2 - 3] [i_2] = ((/* implicit */long long int) ((min((0), (((/* implicit */int) var_1)))) + (((/* implicit */int) min(((_Bool)0), ((_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (min((max((var_8), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (-1)))))))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_9)))) == (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
