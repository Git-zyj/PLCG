/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14125
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
    var_12 = var_8;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((_Bool) max((((arr_2 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_1 - 1])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) (short)-11631);
                            arr_12 [i_0] [i_2] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_3])))))), (max((((/* implicit */long long int) arr_6 [i_2] [i_1] [i_1] [i_2])), (-6066978149585622786LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((_Bool) (short)-30620);
}
