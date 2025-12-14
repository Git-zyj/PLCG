/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123159
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
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */int) var_11);
                            arr_9 [i_3] [i_3] = ((signed char) ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_0] [i_0])), (267386880ULL))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((long long int) -1LL)))));
                var_16 = ((/* implicit */int) -4433084980049448851LL);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_8);
}
