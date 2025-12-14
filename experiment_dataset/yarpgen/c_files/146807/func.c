/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146807
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
    var_10 = max((((/* implicit */long long int) var_2)), (var_8));
    var_11 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) var_0);
                            var_13 = ((/* implicit */short) ((((long long int) arr_1 [i_1 - 4] [i_2 + 1])) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_7 [i_1] [i_1 - 4])), (arr_6 [i_0] [i_0 + 1] [i_1 + 1] [i_1])))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [8] [i_0] [i_0] [i_1]))))))))) / (var_9)));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((int) var_6)))));
            }
        } 
    } 
}
