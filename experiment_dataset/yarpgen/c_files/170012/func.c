/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170012
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
    var_10 -= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = arr_2 [11LL];
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_12 = var_2;
                            arr_11 [i_1] [i_3 + 3] = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_2))));
            }
        } 
    } 
}
