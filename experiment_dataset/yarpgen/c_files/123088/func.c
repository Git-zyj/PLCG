/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123088
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) arr_2 [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (unsigned short)12272))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_6))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 2])))))));
                            var_13 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_7 [i_2] [i_2] [i_2 + 1] [i_2]), ((signed char)91)))), (min((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
