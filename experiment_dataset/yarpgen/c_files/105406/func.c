/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105406
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
    var_19 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */unsigned int) (signed char)-64);
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((unsigned int) (_Bool)1)), (1136455051U))))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */long long int) ((unsigned int) ((((long long int) var_6)) == (((long long int) var_16)))));
                arr_13 [i_0] [i_1] = ((/* implicit */int) arr_0 [4LL]);
            }
        } 
    } 
}
