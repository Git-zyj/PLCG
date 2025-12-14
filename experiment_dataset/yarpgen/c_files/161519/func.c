/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161519
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
        for (unsigned long long int i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_8 [i_3] = ((/* implicit */short) arr_5 [i_3]);
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned int) (~(arr_2 [i_1] [i_1])))), (arr_4 [i_2] [i_2]))))));
                            var_16 = ((/* implicit */_Bool) arr_7 [i_2] [i_2 + 2] [i_3] [i_2 + 1] [i_2 - 2] [i_2 - 1]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (var_1) : (((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 1] [i_1]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned long long int) var_5))));
}
