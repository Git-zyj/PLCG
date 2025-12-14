/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152383
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
    var_12 = ((/* implicit */long long int) (+(var_2)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_13 -= ((/* implicit */unsigned int) var_7);
                            var_14 = arr_7 [3LL] [i_2] [i_1] [i_0];
                        }
                    } 
                } 
                var_15 &= ((/* implicit */signed char) (~(arr_0 [i_1])));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1] [13LL] [i_1]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                var_16 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1] [i_1]);
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (_Bool)1))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned int) var_2);
}
