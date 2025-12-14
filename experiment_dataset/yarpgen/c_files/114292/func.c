/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114292
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) -6609208929326181612LL))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_3] [i_3 - 3])) * (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0] [i_3 - 1])))), (((/* implicit */int) min((arr_6 [i_0 + 1] [i_0 + 1] [i_1 - 1]), (arr_6 [i_0 - 1] [i_0 + 2] [i_1 - 1]))))));
                            var_19 = ((/* implicit */signed char) max((((((/* implicit */int) var_14)) % (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 1])))), (((/* implicit */int) min((arr_7 [i_3 + 1] [i_2] [i_1 - 1] [i_0 - 1]), (arr_7 [i_0] [6U] [4ULL] [i_3 + 1]))))));
                        }
                    } 
                } 
                var_20 = max((min((arr_1 [i_0 + 1]), (((/* implicit */unsigned char) arr_7 [i_0 + 3] [i_0] [i_1 - 1] [i_1 - 1])))), (min((arr_1 [i_0 + 2]), (((/* implicit */unsigned char) arr_7 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 - 1])))));
            }
        } 
    } 
}
