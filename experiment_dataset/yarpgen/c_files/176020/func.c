/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176020
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
    var_18 = ((/* implicit */unsigned int) ((int) var_8));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = 417507126;
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) var_17);
                                var_20 = ((/* implicit */_Bool) (+(var_12)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
