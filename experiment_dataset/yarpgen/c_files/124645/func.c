/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124645
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
    var_13 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) arr_1 [i_0] [(short)8]);
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (var_4))))));
                                var_16 = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [(_Bool)1] [i_0] [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
